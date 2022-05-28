#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include <math.h>
#include <Windows.h>
#include <MMSystem.h>
#include < GL/freeglut.h>
# define PI 3.14159265358979323846




int flag=0;

void RenderString(float x, float y, void *font, const char* string)
{
  char *c;
  glRasterPos2f(x, y);

  glutBitmapString(font, string);
}
void frontscreen(void)
{
        glClear (GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3ub(255, 255, 255);
RenderString(0.0f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Hello");
    glFlush ();
}



void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1240.0, 0.0, 697.5);
}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
  glutInitWindowSize(1240, 697.5);
  glutInitWindowPosition (100, 150);
  glutCreateWindow ("Season Change");

  glutDisplayFunc(frontscreen);

  myInit ();
  glutMainLoop();
}
