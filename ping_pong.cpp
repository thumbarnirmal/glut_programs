#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include "glut.h"

#define PI 3.14159265f
#define REFRESH_RATE 30

int gameOn = 1;

GLfloat ballX = 320;
GLfloat ballY = 240;
GLint ballRadius = 10;
GLfloat xSpeed = 5;
GLfloat ySpeed = 5;
GLint ballXMax = 640 - ballRadius;
GLint ballXMin = 0 + ballRadius;
GLint ballYMax = 480 - ballRadius;
GLint ballYMin = 0 + ballRadius;
GLint sliderWidth = 70;
GLint sliderHeight = 5;
GLint sliderX = 320 - sliderWidth / 2;
GLint sliderXMax = 638 - sliderWidth;
GLint sliderXMin = 2;

float round_value(float v)
{
	return floor(v + 0.5);
}

void initGL()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	gluOrtho2D(0, 640, 0, 480);
}

void timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(REFRESH_RATE, timer, 0);
}

void specialKeys(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_LEFT:
		sliderX -= 30;
		if (sliderX < sliderXMin)
			sliderX = sliderXMin;
		break;
	case GLUT_KEY_RIGHT:
		sliderX += 30;
		if (sliderX > sliderXMax)
			sliderX = sliderXMax;
		break;
	case GLUT_KEY_UP:
		xSpeed *= 1.05;
		ySpeed *= 1.05;
		break;
	case GLUT_KEY_DOWN:
		xSpeed *= 0.95;
		ySpeed *= 0.95;
		break;
	}
}

void mouse(int x, int y)
{
	if (x > sliderXMin && x < sliderXMax + sliderWidth)
	{
		sliderX = x - sliderWidth / 2;
		if (sliderX < sliderXMin)
			sliderX = sliderXMin;
		if (sliderX > sliderXMax)
			sliderX = sliderXMax;
	}
}

void display()
{
	if (gameOn == 1)
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLE_FAN);
		glColor3f(0.0f, 0.0f, 0.0f);
		int numSegments = 150;
		for (int i = 0; i < numSegments; i++)
		{
			float angle = 2.0f * 3.14 * float(i) / float(numSegments);
			float x = ballRadius * cosf(angle);
			float y = ballRadius * sinf(angle);
			glVertex2d(x + ballX, y + ballY);
		}
		glEnd();

		glBegin(GL_QUADS);
		glVertex2d(sliderX, 2);
		glVertex2d(sliderX, 2 + sliderHeight);
		glVertex2d(sliderX + sliderWidth, 2 + sliderHeight);
		glVertex2d(sliderX + sliderWidth, 2);
		glEnd();

		glutSwapBuffers();

		ballX += xSpeed;
		ballY += ySpeed;

		if (sliderX < sliderXMin)
		{
			sliderX = sliderXMin;
		}
		else if (sliderX > sliderXMax)
		{
			sliderX = sliderXMax;
		}

		if (ballX > ballXMax) {
			ballX = ballXMax;
			xSpeed = -xSpeed;
		}
		else if (ballX < ballXMin) {
			ballX = ballXMin;
			xSpeed = -xSpeed;
		}
		if (ballY > ballYMax) {
			ballY = ballYMax;
			ySpeed = -ySpeed;
		}
		else if ((ballY < ballYMin + sliderHeight + 2) && (ballX > sliderX) && (ballX < sliderX + sliderWidth))
		{
			ballY = ballYMin + sliderHeight + 2;
			ySpeed = -ySpeed;
		}
		else if (ballY < ballYMin) {
			gameOn = 0;
		}
	}
	else if (gameOn == 0)
	{
		gameOn = 2;

		glClear(GL_COLOR_BUFFER_BIT);
		glutSwapBuffers();

		printf("---------------------------------Game Over---------------------------------");
	}
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Practical");
	initGL();
	glutDisplayFunc(display);
	glutTimerFunc(1000, timer, 0);
	glutSpecialFunc(specialKeys);
	glutPassiveMotionFunc(mouse);
	//glutMotionFunc(mouse);
	glutMainLoop();
	return 0;
}