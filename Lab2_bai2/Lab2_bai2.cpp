//Lab2 bai 2
#include "stdafx.h"
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <math.h>
#define PI 3.14159265f

char title[] = "Lab2_NguyenHoangAn_1611061291";
int WWight = 640;
int WHeight = 480;
int WPosX = 50;
int WPosY = 50;

GLfloat ballRadius = 0.5f;
GLfloat ballX = 0.0f;
GLfloat ballY = 0.0f;
GLfloat ballXMax, ballXMin, ballYMax, ballYMin;
GLfloat xSpeed = 0.02f;
GLfloat ySpeed = 0.007f;
int refreshMillis = 30;
GLdouble clipAreaXLeft, clipAreaXRight, clipAreaYBottom, clipAreaYTop;


void initGL2() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_SMOOTH);
}


void display2() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glutSolidTeapot(0.5);
	glFlush();
}

void reshape2(int w, int h) {
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
}

void Timer2(int value) {
	glutPostRedisplay();
	glutTimerFunc(refreshMillis, Timer2, 0);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(WWight, WHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow(title);
	glutDisplayFunc(display2);
	glutReshapeFunc(reshape2);
	initGL2();
	glutMainLoop();
	return 0;
}

