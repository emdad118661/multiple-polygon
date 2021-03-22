#include <windows.h> // for MS Windows
#include <math.h>
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<iostream>
using namespace std;
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color
glLineWidth(4.0);
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f); // black
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(1.0f, 0.0f); // x, y
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(-1.0f, 0.0f); // x, y

glEnd();
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f); // black
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.0f, 1.0f); // x, y
glVertex2f(0.0f, 0.0f); // x, y
glVertex2f(0.0f, -1.0f);
glEnd();

glBegin(GL_QUADS); // Each set of 4 vertices form a quad
glColor3f(1.0f, 0.0f, 0.0f); // Red
glVertex2f(-0.25f, 0.25f); // x, y
glVertex2f(-0.25f, 0.75f);
glVertex2f(-0.75f, 0.75f); // x, y
glVertex2f(-0.75f, 0.25f);
glEnd();// Draw a Red 1x1 Square centered at origin

glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
glColor3f(0.5f, 0.0f, 0.5f); // violate
glVertex2f(-0.25f, -0.75f); // x, y
glVertex2f(-0.75f, -0.5f);
glVertex2f(-.25f, -0.25f);
glEnd();

glBegin(GL_TRIANGLES); // Each set of 4 vertices form a quad
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
glVertex2f(0.25f, -0.75f); // x, y
glVertex2f(0.75f, -0.75f);
glVertex2f(0.5f, -0.3f);
glEnd();

glBegin(GL_POLYGON); // These vertices form a closed polygon
glColor3f(0.0f, 1.0f, 0.0f); // Green
glVertex2f(0.8f, 0.5f);
glVertex2f(0.6f, 0.75f);
glVertex2f(0.6f, 0.62f);
glVertex2f(0.2f, 0.62f);
glVertex2f(0.2f, 0.38f);
glVertex2f(0.6f, 0.38f);
glVertex2f(0.6f, 0.25f);
glEnd();

glFlush(); // Render now
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
glutInitWindowSize(320, 320); // Set the window's initial width & height
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}


