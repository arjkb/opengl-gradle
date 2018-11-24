#include <iostream>
#include "greeting.hpp"
#include "GL/glew.h"
#include "GL/freeglut.h"

using namespace std;

void drawSquare(const GLfloat SIDE) {
    glBegin(GL_POLYGON);
        glVertex3f(-SIDE, SIDE, 0);
        glVertex3f(-SIDE, -SIDE, 0);
        glVertex3f(SIDE, -SIDE, 0);
        glVertex3f(SIDE, SIDE, 0);
    glEnd();
}

void display(void)  {
    glClear(GL_COLOR_BUFFER_BIT);
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
    drawSquare(0.5);
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char *argv[])    {
    std::cout << greeting << std::endl;

    // setup OpenGL
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitContextFlags(GLUT_COMPATIBILITY_PROFILE);
    glutCreateWindow("Box");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
