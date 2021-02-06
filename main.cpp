#include <iostream>

#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <GLUT/glut.h>
#define GL_SILENCE_DEPRECATION
#endif

#ifdef _MSC_VER
#include <GL/glut.h>
#endif

int width = 400;
int height = 400;

void display() {

#ifdef __APPLE__
    glViewport(0, 0, 2 * width, 2 * height);
#endif

    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex3f(-0.5, -0.5, 0.0);
    glVertex3f(0.5, -0.5, 0.0);
    glVertex3f(0.5, 0.5, 0.0);
    glVertex3f(-0.5, 0.5, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    glutDisplayFunc(display);
    glutMainLoop();
}
