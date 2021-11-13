// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      // GLUT, include glu.h and gl.h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Note: GLglut.h path depending on the system in use
void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(1, 1,1, 0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 800, 0.0, 600);
}


void home()
{   

    glClear(GL_COLOR_BUFFER_BIT);     // Clear display window
        //Draw stars
        //Draw first triangle
 glBegin(GL_POLYGON);
    glColor3f(0.992, 0.909, 0.325); 
    glVertex2f(500, 520);
    glVertex2f(520, 506);
    glVertex2f(480, 506);
  glEnd();
        //Draw second triangle
 glBegin(GL_POLYGON);
    glColor3f(0.992, 0.909, 0.325); 
    glVertex2f(480, 514);
    glVertex2f(520, 514);
    glVertex2f(500, 500);
  glEnd();
  

    // Process all OpenGL routine s as quickly as possible
    glFlush();
}
int main(int argc, char** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Set top - left display window position.
    glutInitWindowPosition(100, 100);
    // Set display window width and height
    glutInitWindowSize(900, 800);
    // Create display window with the given title
    glutCreateWindow("2D House");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(home);
    // Display everything and wait.
    glutMainLoop();
}
