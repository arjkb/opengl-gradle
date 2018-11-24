#include "GL/freeglut.h"

void drawSquare(const GLfloat SIDE) {
    glBegin(GL_POLYGON);
        glVertex3f(-SIDE, SIDE, 0);
        glVertex3f(-SIDE, -SIDE, 0);
        glVertex3f(SIDE, -SIDE, 0);
        glVertex3f(SIDE, SIDE, 0);
    glEnd();
}