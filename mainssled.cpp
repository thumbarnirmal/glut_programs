#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "glut.h"

float round_value(float v)
{
	return floor(v + 0.5);
}

void Initialize()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glColor3f(0.0, 0.0, 0.0);
	gluOrtho2D(0, 640, 0, 480);
}

void ssled(int x, int y, int digit) {
	int numberCode[10][7] = { { 1,1,1,1,1,1,0 },{ 0,0,0,0,1,1,0 },{ 1,1,0,1,1,0,1 },{ 1,0,0,1,1,1,1 },{ 0,0,1,0,1,1,1 },{ 1,0,1,1,0,1,1 },{ 1,1,1,1,0,1,1 },{ 0,0,0,1,1,1,0 },{ 1,1,1,1,1,1,1 },{ 1,0,1,1,1,1,1 } };

	glBegin(GL_QUADS);

	if (numberCode[digit][0])
	{
		glVertex2d(x + 2, y + 0);
		glVertex2d(x + 78, y + 0);
		glVertex2d(x + 68, y + 10);
		glVertex2d(x + 12, y + 10);
	}
	if (numberCode[digit][1])
	{
		glVertex2d(x + 0, y + 2);
		glVertex2d(x + 0, y + 78);
		glVertex2d(x + 10, y + 72);
		glVertex2d(x + 10, y + 12);
	}
	if (numberCode[digit][2])
	{
		glVertex2d(x + 0, y + 82);
		glVertex2d(x + 0, y + 158);
		glVertex2d(x + 10, y + 148);
		glVertex2d(x + 10, y + 88);
	}
	if (numberCode[digit][3])
	{
		glVertex2d(x + 2, y + 160);
		glVertex2d(x + 78, y + 160);
		glVertex2d(x + 68, y + 150);
		glVertex2d(x + 12, y + 150);
	}
	if (numberCode[digit][4])
	{
		glVertex2d(x + 80, y + 158);
		glVertex2d(x + 80, y + 82);
		glVertex2d(x + 70, y + 88);
		glVertex2d(x + 70, y + 148);
	}
	if (numberCode[digit][5])
	{
		glVertex2d(x + 80, y + 78);
		glVertex2d(x + 80, y + 2);
		glVertex2d(x + 70, y + 12);
		glVertex2d(x + 70, y + 72);
	}

	glEnd();
	glBegin(GL_POLYGON);
	if (numberCode[digit][6])
	{
		glVertex2d(x + 2, y + 80);
		glVertex2d(x + 12, y + 85);
		glVertex2d(x + 68, y + 85);
		glVertex2d(x + 78, y + 80);
		glVertex2d(x + 68, y + 75);
		glVertex2d(x + 12, y + 75);
	}
	glEnd();
}

void segled()
{
	int number, digit;
	
	//Your code goes here
	printf("Enter a 5 digit number: ");
	scanf("%d", &number);
	glClear(GL_COLOR_BUFFER_BIT);
	for (int i = 4; i >= 0; --i)
	{
		digit = number % 10;
		number /= 10;
		ssled(i*100,0,digit);
	}
	
	glFlush();
}

int main(int argc, char **argv)
{
	int ch;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("7 Segment LED");
	Initialize();
	glutDisplayFunc(segled);
	glutMainLoop();
	return 0;
}