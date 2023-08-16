/*
    Write a Program to display three dots using OpenGL and Glut utility tool.
*/

#include <GL/glut.h>

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT); // clear the screen
    glBegin(GL_POINTS);
    glVertex2i(250, 200); // draw three dots
    glVertex2i(230, 150);
    glVertex2i(200, 250);
    glEnd();
    glFlush(); // send all output to display
}

void myInit()
{
    glClearColor(1.0, 0.0, 0.0, 0.0); // set red background color
    glColor3f(0.0, 1.0, 0.0);         // set the drawing color
    glPointSize(10.0);                // a 'dot' is 10 by 10 pixels
    // The following lines establish the coordinate system.
    // Details will be covered later.
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 640, 0, 480);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);                       // initialize the toolkit
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode
    glutInitWindowSize(300, 200);                // set window size
    glutInitWindowPosition(100, 150);            // set window position
    glutCreateWindow("Drawing three dots");      // open the screen window
    glutDisplayFunc(myDisplay);                  // register redraw function
    myInit();                                    // additional initializations as necessary
    glutMainLoop();                              // go into a perpetual loop

    return 0;
}