#include <GL/glut.h>
#include <stdio.h>
#include<math.h>
#include <stdlib.h>

void init(void)
{
     glClearColor(1.0f, 1.0f, 1.0f,0.0f);
     glMatrixMode(GL_PROJECTION);
     gluOrtho2D(0.0,1000.0,0.0,600.0);
}

void display (void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.82,0.82,0.82);
    glBegin(GL_POLYGON);
    glVertex2d(160,130);
    glVertex2d(185,130);
    glVertex2d(185,200);
    glVertex2d(160,200);
    glEnd();
    glColor3f(0.66,0.66,0.66);
    glBegin(GL_POLYGON);
    glVertex2d(185,185);
    glVertex2d(195,175);
    glVertex2d(195,155);
    glVertex2d(185,140);
    glEnd();
    glColor3f(0.66,0.66,0.66);
    glBegin(GL_POLYGON);
    glVertex2d(122,110);
    glVertex2d(132,114);
    glVertex2d(150,110);
    glVertex2d(152,100);
    glVertex2d(120,100);
    glVertex2d(140,110);
    glEnd();
    glColor3i(192.0,192.0,192.0);
    glBegin(GL_POLYGON);
    glVertex2d(140,113);
    glVertex2d(150,110);
    glVertex2d(151,103);
    glVertex2d(140,103);
    glEnd();
    glColor3i(47,47,79);
    glLineWidth(2.0);
    glBegin(GL_LINE_STRIP);
    glVertex2d(152,100);
    glVertex2d(155,97);
    glVertex2d(156,97.5);
    glVertex2d(156.5,97.8);
    glVertex2d(157,97.7);
    glVertex2d(185,97.8);
    glVertex2d(190,150);
    glEnd();
    glLoadIdentity();
    glFlush();
}


int main (int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE);
    glutInitWindowSize (1080,640);
    glutInitWindowPosition (10, 10);
    glutCreateWindow ("Fulfilment Center");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
}
