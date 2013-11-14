//
//  main.cpp
//  myengine
//
//  Created by Jacob Kuhl on 11/13/13.
//  Copyright (c) 2013 Jacob Kuhl. All rights reserved.
//

#include <stdlib.h>

#include "graphicsManager.h"


void setUpOpenGL(){

  

}


int main(int argc, char** argv)
{
 
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(640, 480);
    glutCreateWindow("graphics demo");
    glutDisplayFunc(gfx->display);
    glutReshapeFunc(gfx->reshape);
    glutIdleFunc(gfx->idle);
    // here are the new entries
	glutKeyboardFunc(gfx->processNormalKeys);
	glutSpecialFunc(gfx->processSpecialKeys);
    glutMainLoop();

    return EXIT_SUCCESS;
}


