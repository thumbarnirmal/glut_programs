#include <stdio.h>
#include <conio.h>
#include <math.h>
#include "glut.h"

float round_value(float	v)
{
	return	floor(v + 0.5);
}
void MidpointCircleVer1(void)
{
	double X, Y, R;
	printf("Enter centre and radius of circle to be drawn:\n");
	printf("\n************************************");
	printf("\nEnter Centre(X, Y) :\n");
	scanf("%lf %lf", &X, &Y);
	printf("\n************************************");
	printf("\nEnter Radius(R) :\n");
	scanf("%lf", &R);

	double x = 0, y = R, h = 1 - R;
	// Clears buffers to preset values
	glClear(GL_COLOR_BUFFER_BIT);
	// Plot the points
	glBegin(GL_POINTS);
	glVertex2d(X + round_value(x), Y + round_value(y));
	glVertex2d(X + round_value(y), Y + round_value(x));
	glVertex2d(X + round_value(x), Y - round_value(y));
	glVertex2d(X + round_value(y), Y - round_value(x));
	glVertex2d(X - round_value(x), Y + round_value(y));
	glVertex2d(X - round_value(y), Y + round_value(x));
	glVertex2d(X - round_value(x), Y - round_value(y));
	glVertex2d(X - round_value(y), Y - round_value(x));
	while (y > x)
	{
		if (h < 0)
			h = h + 2 * x + 3;
		else
		{
			h = h + 2 * (x - y) + 5;
			y--;
		}
		x++;
		glVertex2d(X + round_value(x), Y + round_value(y));
		glVertex2d(X + round_value(y), Y + round_value(x));
		glVertex2d(X + round_value(x), Y - round_value(y));
		glVertex2d(X + round_value(y), Y - round_value(x));
		glVertex2d(X - round_value(x), Y + round_value(y));
		glVertex2d(X - round_value(y), Y + round_value(x));
		glVertex2d(X - round_value(x), Y - round_value(y));
		glVertex2d(X - round_value(y), Y - round_value(x));
	}
	glEnd();
	glFlush();
}
void MidpointLine(void)
{
	double X1, Y1, X2, Y2;
	printf("Enter two end points of the line to be drawn:\n");
	printf("\n************************************");
	printf("\nEnter Point1(X1, Y1) :\n");
	scanf("%lf %lf", &X1, &Y1);
	printf("\n************************************");
	printf("\nEnter Point2(X2, Y2) :\n");
	scanf("%lf %lf", &X2, &Y2);
	double x, y, dx, dy, d, deltaE, deltaNE;
	double temp;

	temp = X1; X1 = X2; X2 = temp;
	temp = Y1; Y1 = Y2; Y2 = temp;

	dx = (X2 - X1); dy = (Y2 - Y1);
	temp = X1; X1 = Y1; Y1 = temp;
	temp = X2; X2 = Y2; Y2 = temp;

	x = X1; y = Y1;

	temp = dx; dx = dy; dy = temp;
	//dy = -dy;

	d = 2 * dy - dx;
	deltaE = 2 * dy;
	deltaNE = 2 * (dy - dx);
	// Clears buffers to preset values
	glClear(GL_COLOR_BUFFER_BIT);
	// Plot the points
	glBegin(GL_POINTS);
	glVertex2d(round_value(x), round_value(y));
	while (x < X2)
	{
		if (d <= 0)
			d = d + deltaE;
		else
		{
			d = d + deltaNE;
			y++;
		}
		x++;
		glVertex2d(round_value(y), round_value(x));
	}
	glEnd();
	glFlush();
}
void LineDDA(void)
{
	double X1, Y1, X2, Y2;
	printf("Enter two end points of the line to be drawn:\n");
	printf("\n************************************");
	printf("\nEnter Point1(X1, Y1) :\n");
	scanf("%lf%lf", &X1, &Y1);
	printf("\n************************************");
	printf("\nEnter Point1(X2, Y2) :\n");
	scanf("%lf%lf", &X2, &Y2);
	double dx = (X2 - X1);
	double dy = (Y2 - Y1);
	double steps;
	float xInc, yInc, x = X1, y = Y1;
	// Find out whether to increment x or y
	steps = (fabs(dx)>fabs(dy))?(fabs(dx)):(fabs(dy));
	xInc = dx / (float)steps;
	yInc = dy / (float)steps;
	// Clears buffers to preset values
	glClear(GL_COLOR_BUFFER_BIT);
	// Plot the points
	glBegin(GL_POINTS);
	// Plot the first point
	glVertex2d(x, y);
	int	k;
	// For every step, find an intermediate vertex
	for (k = 0; k<steps; k++)
	{
		x += xInc;
		y += yInc;
		// printf("%0.6lf %0.6lf\n",floor(x), floor(y));
		glVertex2d(round_value(x), round_value(y));
	}
	glEnd();
	glFlush();
}
void Clock(void)
{
	int hr, min;
	double X=320, Y=240, R, X1=320, X2, Y1=240, Y2;
	printf("Enter clock details:\n");
	printf("\n************************************");
	printf("\nEnter Clock radius :\n");
	scanf("%lf", &R);
	printf("\n************************************");
	printf("\nEnter time :\n");
	scanf("%d:%d", &hr, &min);
	X2 = fabs(X + (R*cos(-(hr - 3) * 30)));
	Y2 = fabs(Y + (R*sin(-(hr - 3) * 30)));
	printf("X2=%lf Y2=%lf\n",X2,Y2);

	double x = 0, y = R, h = 1 - R;
	// Clears buffers to preset values
	glClear(GL_COLOR_BUFFER_BIT);
	// Plot the points
	glBegin(GL_POINTS);
	glVertex2d(X + round_value(x), Y + round_value(y));
	glVertex2d(X + round_value(y), Y + round_value(x));
	glVertex2d(X + round_value(x), Y - round_value(y));
	glVertex2d(X + round_value(y), Y - round_value(x));
	glVertex2d(X - round_value(x), Y + round_value(y));
	glVertex2d(X - round_value(y), Y + round_value(x));
	glVertex2d(X - round_value(x), Y - round_value(y));
	glVertex2d(X - round_value(y), Y - round_value(x));
	while (y > x)
	{
		if (h < 0)
			h = h + 2 * x + 3;
		else
		{
			h = h + 2 * (x - y) + 5;
			y--;
		}
		x++;
		glVertex2d(X + round_value(x), Y + round_value(y));
		glVertex2d(X + round_value(y), Y + round_value(x));
		glVertex2d(X + round_value(x), Y - round_value(y));
		glVertex2d(X + round_value(y), Y - round_value(x));
		glVertex2d(X - round_value(x), Y + round_value(y));
		glVertex2d(X - round_value(y), Y + round_value(x));
		glVertex2d(X - round_value(x), Y - round_value(y));
		glVertex2d(X - round_value(y), Y - round_value(x));
	}

	double dx = (X2 - X1);
	double dy = (Y2 - Y1);
	double steps;
	float xInc, yInc;
	x = X1;
	y = Y1;
	// Find out whether to increment x or y
	steps = (fabs(dx)>fabs(dy)) ? (fabs(dx)) : (fabs(dy));
	xInc = dx / (float)steps;
	yInc = dy / (float)steps;
	// Clears buffers to preset values
//	glClear(GL_COLOR_BUFFER_BIT);
	// Plot the points
//	glBegin(GL_POINTS);
	// Plot the first point
	glVertex2d(x, y);
	int	k;
	// For every step, find an intermediate vertex
	for (k = 0; k<steps; k++)
	{
		x += xInc;
		y += yInc;
		// printf("%0.6lf %0.6lf\n",floor(x), floor(y));
		glVertex2d(round_value(x), round_value(y));
	}

	X1 = 320;
	Y1 = 240;
	X2 = 380;
	Y2 = 240;
	dx = (X2 - X1);
	dy = (Y2 - Y1);
	x = X1;
	y = Y1;
	// Find out whether to increment x or y
	steps = (fabs(dx)>fabs(dy)) ? (fabs(dx)) : (fabs(dy));
	xInc = dx / (float)steps;
	yInc = dy / (float)steps;
	// Clears buffers to preset values
//	glClear(GL_COLOR_BUFFER_BIT);
	// Plot the points
//	glBegin(GL_POINTS);
	// Plot the first point
	glVertex2d(x, y);
	// For every step, find an intermediate vertex
	for (k = 0; k<steps; k++)
	{
		x += xInc;
		y += yInc;
		// printf("%0.6lf %0.6lf\n",floor(x), floor(y));
		glVertex2d(round_value(x), round_value(y));
	}

	glEnd();
	glFlush();
}
void Smiley(void)
{
	double X = 320, Y = 240, R = 100;

	double x = 0, y = R, h = 1 - R;
	// Clears buffers to preset values
	glClear(GL_COLOR_BUFFER_BIT);
	// Plot the points
	glBegin(GL_POINTS);
	glVertex2d(X + round_value(x), Y - round_value(y));
	glVertex2d(X - round_value(x), Y - round_value(y));
	while (y > x)
	{
		if (h < 0)
			h = h + 2 * x + 3;
		else
		{
			h = h + 2 * (x - y) + 5;
			y--;
		}
		x++;
		glVertex2d(X + round_value(x), Y - round_value(y));
		glVertex2d(X - round_value(x), Y - round_value(y));
	}

	double X1 = 320, X2 = 320, Y1 = 240, Y2 = 190;
	double dx = (X2 - X1);
	double dy = (Y2 - Y1);
	double steps;
	float xInc, yInc;
	x = X1;
	y = Y1;
	// Find out whether to increment x or y
	steps = (fabs(dx)>fabs(dy)) ? (fabs(dx)) : (fabs(dy));
	xInc = dx / (float)steps;
	yInc = dy / (float)steps;
	// Clears buffers to preset values
//	glClear(GL_COLOR_BUFFER_BIT);
	// Plot the points
//	glBegin(GL_POINTS);
	// Plot the first point
	glVertex2d(x, y);
	int	k;
	// For every step, find an intermediate vertex
	for (k = 0; k<steps; k++)
	{
		x += xInc;
		y += yInc;
		// printf("%0.6lf %0.6lf\n",floor(x), floor(y));
		glVertex2d(round_value(x), round_value(y));
	}
	glVertex2d(280, 260);
	glVertex2d(360, 260);
	glVertex2d(281, 260);
	glVertex2d(359, 260);
	glVertex2d(280, 259);
	glVertex2d(360, 259);
	glVertex2d(281, 259);
	glVertex2d(359, 259);

	glEnd();
	glFlush();
}
void Init()
{
	// Set clear color to white
	glClearColor(1.0, 1.0, 1.0, 0.0);
	// Set fill color to black
	glColor3f(0.0, 0.0, 0.0);
	// glViewport(0 , 0 , 640 , 480);
	// glMatrixMode(GL_PROJECTION);
	// glLoadIdentity();
	gluOrtho2D(0, 640, 0, 480);
}
void main(int argc, char **argv)
{
	// Initialise GLUT library
	glutInit(&argc, argv);
	// Set the initial display mode
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	// Set the initial window position and size
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(640, 480);
	// Create the window with title "DDA_Line"
	glutCreateWindow("DDA_Line");
	// Initialize drawing colors
	Init();
	// Call the displaying function
	glutDisplayFunc(MidpointLine);
	// Keep displaying untill the program is closed
	glutMainLoop();
	getch();
}