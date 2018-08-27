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

void draw_shape1()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_POINTS);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x,y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_shape2()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_LINES);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_shape3()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_LINE_STRIP);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_shape4()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_LINE_LOOP);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_shape5()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_TRIANGLES);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_shape6()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_TRIANGLE_STRIP);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_shape7()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_TRIANGLE_FAN);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_shape8()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_QUADS);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
/*	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);*/
	glEnd();
	glFlush();
}

void draw_shape9()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_QUAD_STRIP);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_shape10()
{
	int x, y;
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(3.0f);
	glBegin(GL_POLYGON);
	//Your code goes here
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	printf("---------------------------------------------\n");
	printf("Enter point(x,y):");
	scanf("%d %d", &x, &y);
	glVertex2d(x, y);
	glEnd();
	glFlush();
}

void draw_circle(float cx, float cy, float r, int num_segments) {
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < num_segments; i++)
	{
		float angle = 2.0f * 3.14 * float(i) / float(num_segments);
		float x = r * cosf(angle);
		float y = r * sinf(angle);
		glVertex2f(x + cx, y + cy);
	}
	glEnd();
}

void draw_colorfilled_circle(float cx, float cy, float r, int num_segments) {
	glBegin(GL_POLYGON);
	for (int i = 0; i < num_segments; i++)
	{
		float angle = 2.0f * 3.14 * float(i) / float(num_segments);
		float x = r * cosf(angle);
		float y = r * sinf(angle);
		glVertex2f(x + cx, y + cy);
	}
	glEnd();
}

void flag() {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(0.07, 0.53, 0.03);	//Green
	glVertex2d(0, 0);
	glVertex2d(0, 160);
	glVertex2d(640, 160);
	glVertex2d(640, 0);
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.6, 0.2);	//Saffron
	glVertex2d(0, 320);
	glVertex2d(0, 480);
	glVertex2d(640, 480);
	glVertex2d(640, 320);
	glEnd();
	glColor3f(0.0, 0.0, 0.5);	//Blue
	glLineWidth(5);
	draw_circle(320, 240, 80, 100);
	draw_colorfilled_circle(320, 240, 10, 100);
	glLineWidth(2);
	glBegin(GL_LINES);
	for (int i = 0; i < 24; i++)
	{
		float angle = float(i) * 15.0f * 3.14 / 180.0f;
		float x = 80.0f * cosf(angle);
		float y = 80.0f * sinf(angle);
		glVertex2f(320.0, 240.0);
		glVertex2f(320.0 + x, 240.0 + y);
	}
	glEnd();
	glFlush();
}

int main(int argc, char **argv)
{
	int ch;
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640,480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Shapes");
	Initialize();
	printf("Enter choice:");
	scanf("%d", &ch);
	if (ch == 1)
		glutDisplayFunc(draw_shape1);
	else if (ch == 2)
		glutDisplayFunc(draw_shape2);
	else if (ch == 3)
		glutDisplayFunc(draw_shape3);
	else if (ch == 4)
		glutDisplayFunc(draw_shape4);
	else if (ch == 5)
		glutDisplayFunc(draw_shape5);
	else if (ch == 6)
		glutDisplayFunc(draw_shape6);
	else if (ch == 7)
		glutDisplayFunc(draw_shape7);
	else if (ch == 8)
		glutDisplayFunc(draw_shape8);
	else if (ch == 9)
		glutDisplayFunc(draw_shape9);
	else if (ch == 10)
		glutDisplayFunc(draw_shape10);
	else if (ch == 11)
		glutDisplayFunc(flag);
	glutMainLoop();
	return 0;
}