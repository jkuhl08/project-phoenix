//
//  graphicsManager.h
//  myengine
//
//  Created by Jacob Kuhl on 11/13/13.
//  Copyright (c) 2013 Jacob Kuhl. All rights reserved.
//

#ifndef __myengine__graphicsManager__
#define __myengine__graphicsManager__

#include <iostream>
#include <GLUT/glut.h>

#define gfx graphicsManager::Instance()

class graphicsManager{
    
public:

    static graphicsManager* Instance();
    void render();
    void update(float dt);
    static void display(void);
    static void reshape(int width, int height);
    static void idle(void);
    static void processNormalKeys(unsigned char key,int x,int y);
    static void processSpecialKeys(int key, int x, int y);
        
private:
    
    graphicsManager();
    static graphicsManager* instance;
};

#endif /* defined(__myengine__graphicsManager__) */
