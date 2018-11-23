#include <iostream>
#include "greeting.hpp"

#include "GL/glew.h"
#include "GL/freeglut.h"

using namespace std;

void drawSquare(const GLfloat SIZE) {
    glBegin(GL_POLYGON);
        glVertex3f(-SIDE, SIDE, 0);
        glVertex3f(-SIDE, -SIDE, 0);
        glVertex3f(SIDE, -SIDE, 0);
        glVertex3f(SIDE, SIDE, 0);
    glEnd();
}

void display(void)  {
    return;
}

int main(int argc, char *argv[])    {
    std::cout << greeting << std::endl;

    // setup OpenGL
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Box");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}