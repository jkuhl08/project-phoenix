//
//  graphicsManager.cpp
//  myengine
//
//  Created by Jacob Kuhl on 11/13/13.
//  Copyright (c) 2013 Jacob Kuhl. All rights reserved.
//

#include "graphicsManager.h"

graphicsManager* graphicsManager::instance = NULL;

// all variables initialized to 1.0, meaning
// the triangle will initially be white
float red=0.3f, blue=0.2f, green=1.0f;
// variables to compute frames per second
int frame;
long timer, timebase;
char s[50];
GLvoid *font_style = GLUT_BITMAP_TIMES_ROMAN_24;
float angle = 0.0f;
graphicsManager::graphicsManager(){

    std::cout << "Initialization of the graphics manager";
  
}

graphicsManager* graphicsManager::Instance(){

    if (!instance) {
        instance = new graphicsManager();
	};
	return instance;

}

void graphicsManager::display(void){

   	// Clear Color and Depth Buffers
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    // Reset transformations
	glLoadIdentity();
	// Set the camera
	gluLookAt(	0.0f, 0.0f, 10.0f,
              0.0f, 0.0f,  0.0f,
              0.0f, 1.0f,  0.0f);
    
	glRotatef(angle, 0.0f, 1.0f, 0.0f);
    
    // Code to compute frames per second
	frame++;
    
	timer=glutGet(GLUT_ELAPSED_TIME);
	if (timer - timebase > 1000) {
		sprintf(s,"Pheonix - FPS:%4.2f",frame*1000.0/(timer-timebase));
        glutSetWindowTitle(s);
        timebase = timer;
		frame = 0;
	}

    glColor3f(red,green,blue);
	glBegin(GL_TRIANGLES);
    glVertex3f(-2.0f,-2.0f, 0.0f);
    glVertex3f( 2.0f, 0.0f, 0.0);
    glVertex3f( 0.0f, 2.0f, 0.0);
    glEnd();
    angle+=0.9f;
    
	glutSwapBuffers();
}
void graphicsManager::reshape(int w, int h)
{
    
        // Prevent a divide by zero, when window is too short
        // (you cant make a window of zero width).
        if (h == 0)
		h = 1;
        
        float ratio =  w * 1.0 / h;
        
        // Use the Projection Matrix
        glMatrixMode(GL_PROJECTION);
        
        // Reset Matrix
        glLoadIdentity();
        
        // Set the viewport to be the entire window
        glViewport(0, 0, w, h);
        
        // Set the correct perspective.
        gluPerspective(45.0f, ratio, 0.1f, 100.0f);
        
        // Get Back to the Modelview
        glMatrixMode(GL_MODELVIEW);
    

}

void graphicsManager::idle(void)
{
    glutPostRedisplay();
}
void graphicsManager::processNormalKeys(unsigned char key, int x, int y)
{
    
        if (key == 27)
		exit(0);
    


}
void graphicsManager::processSpecialKeys(int key, int x, int y) {
    
	switch(key) {
            case GLUT_KEY_F1 :
            red = 1.0;
            green = 0.0;
            blue = 0.0; break;
            case GLUT_KEY_F2 :
            red = 0.0;
            green = 1.0;
            blue = 0.0; break;
            case GLUT_KEY_F3 :
            red = 0.0;
            green = 0.0;
            blue = 1.0; break;
	}
}