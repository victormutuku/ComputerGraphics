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
   

    //Draw 1st Circle for the moon
   	glColor3f(0.313, 0.407, 0.525);  
        glBegin(GL_POLYGON);
            
                for (int i = 0; i < 360; i++) {
                    // Find the angle
                    float angle_theta = i * 3.142 / 180;
                    glVertex2f(600 + 50 * cos(angle_theta),
                            530 + 50 * sin(angle_theta));
                }       
        glEnd();

        //Draw 2nd Circle for the moon
        //Color it white
        glColor3f(1, 1, 1); 
        glBegin(GL_POLYGON);
            
                for (int i = 0; i < 360; i++) {
                    // Find the angle
                    float angle_theta = i * 3.142 / 180;
                    glVertex2f(620 + 50 * cos(angle_theta),
                            550 + 50 * sin(angle_theta));
                }       
        glEnd();

    // square bottom
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(150, 0);
    glVertex2i(150, 400);
    glVertex2i(550,400);
    glVertex2i(550,0);
    glEnd();

    //lines of square bottom
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(150, 0);
    glVertex2i(150, 400);
    glVertex2i(550,400);
    glVertex2i(550,0);
    glVertex2i(550,0);
    glVertex2i(150, 0);
    glEnd();

    // Set line segment color as glColor3f(R,G,B)
    glColor3f(0.807, 0.576, 0.847);
    glBegin(GL_POLYGON);
    glVertex2i(100, 300);
    glVertex2i(100, 400);
    glVertex2i(600, 400);
    glVertex2i(600, 300);
    glEnd();

    //lines of rectangle top
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(1);
    glBegin(GL_LINES);
    glVertex2i(100, 300);
    glVertex2i(100, 400);
    glVertex2i(100, 400);
    glVertex2i(600, 400);
    glVertex2i(600, 400);
    glVertex2i(600, 300);
    glVertex2i(100, 300); 
    glVertex2i(600, 300);
    glEnd();

    
    // window one
    glColor3f(1, 0.768, 1);
    glBegin(GL_POLYGON);
    glVertex2i(200, 185);
    glVertex2i(200, 100);
    glVertex2i(270, 100);
    glVertex2i(270, 185);
    glEnd();
    // line of window one
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(200,100);
    glVertex2i(200,185);
    glVertex2i(200,185);
    glVertex2i(235,185);
    glVertex2i(235,185);
    glVertex2i(235,100);
    glVertex2i(235,100);
    glVertex2i(200,100);
    glVertex2i(235,100);
    glVertex2i(270,100);
    glVertex2i(270,100);
    glVertex2i(270,185);
    glVertex2i(270,185);
    glVertex2i(235,185);
    glVertex2i(200,143);
    glVertex2i(270,143);
   
    glEnd();

    // Front Door
    glColor3f(0.1, 0.7, 0.5);
    glBegin(GL_POLYGON);
    glVertex2i(320, 0);
    glVertex2i(320, 150);
    glVertex2i(400, 150);
    glVertex2i(400, 0);
    glEnd();

     //Front Door Lock
    glColor3f(1, 0.768, 1); 
    glBegin(GL_POLYGON);
        
            for (int i = 0; i < 360; i++) {
                // Find the angle
                float angle_theta = i * 3.142 / 180;
                glVertex2f(390 + 8 * cos(angle_theta),
                        75 + 8 * sin(angle_theta));
            }       
    glEnd();

    // window two
     glColor3f(1, 0.768, 1);
    glBegin(GL_POLYGON);
    glVertex2i(430, 185);
    glVertex2i(430, 100);
    glVertex2i(500, 100);
    glVertex2i(500, 185);
    glEnd();

    // lines of window two
    glColor3f(0.1, 0.7, 0.5);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2i(430, 100);
    glVertex2i(430, 185);
    glVertex2i(430, 185);
    glVertex2i(500, 185);
    glVertex2i(500, 185);
    glVertex2i(500, 100);
    glVertex2i(500, 100);
    glVertex2i(430, 100);
    glVertex2i(430, 143);
    glVertex2i(500, 143);
    glVertex2i(465, 185);
    glVertex2i(465, 100);    
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
    glutInitWindowSize(800, 600);
    // Create display window with the given title
    glutCreateWindow("2D House");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(home);
    // Display everything and wait.
    glutMainLoop();
}
