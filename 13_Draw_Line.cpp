/*
    Write a Program to draw a line using OpenGL and Glut utility tool.
*/

#include <GL/glut.h>

void myinit(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 156.0);
}

void lineSegment(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.4, 0.2);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(186, 15);
    glVertex2i(10, 145);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(56, 100);
    glutInitWindowSize(300, 200);
    glutCreateWindow("Drawing a line");
    myinit();
    glutDisplayFunc(lineSegment);
    glutMainLoop();

    return 0;
}