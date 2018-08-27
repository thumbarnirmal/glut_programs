#include <stdio.h>
#include <math.h>
#include "glut.h"

int spy = 240;
int spx = 100;
int width = 50;

void Initialize()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	gluOrtho2D(0, 640, 0, 480);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(spx,spy);
	glVertex2d(spx + width, spy + width);
	glVertex2d(spx + width, spy - width);
	glEnd();

	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(spx + width, spy);
	glVertex2d(spx + width, spy + width);
	glVertex2d(spx + (2*width), spy + width);
	glVertex2d(spx + (2 * width), spy - width);
	glEnd();

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(spx + width, spy);
	glVertex2d(spx + (2 * width), spy - width);
	glVertex2d(spx + width, spy - width);
	glEnd();

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex2d(spx + (2 * width), spy - width);
	glVertex2d(spx + (2 * width), spy + width);
	glVertex2d(spx + (3 * width), spy + width);
	glVertex2d(spx + (3 * width), spy);
	glEnd();

	glColor3f(1.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(spx + (2 * width), spy - width);
	glVertex2d(spx + (3 * width), spy);
	glVertex2d(spx + (3 * width), spy - width);
	glEnd();

	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2d(spx + (3 * width), spy - width);
	glVertex2d(spx + (3 * width), spy + width);
	glVertex2d(spx + (4 * width), spy);
	glEnd();

	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_POLYGON);
	glVertex2d(spx + (4 * width), spy);
	glVertex2d(spx + (5 * width), spy - width);
	glVertex2d(spx + (5 * width), spy + width);
	glEnd();

	glFlush();
}

void main(int argc, char ** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutInitWindowPosition(0, 0);
glutCreateWindow("Practical");
Initialize();
glutDisplayFunc(display);
glutMainLoop();
}