#include <iostream>
#include "GL/freeglut.h"
#include "myutil/draw.hpp"

void display(void)  {
    glClear(GL_COLOR_BUFFER_BIT);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    drawSquare(0.5);
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char *argv[])    {
    // setup OpenGL
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitContextFlags(GLUT_COMPATIBILITY_PROFILE);
    glutCreateWindow("Box");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}