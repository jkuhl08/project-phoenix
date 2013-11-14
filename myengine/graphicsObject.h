//
//  graphicsObject.h
//  myengine
//
//  Created by Jacob Kuhl on 11/13/13.
//  Copyright (c) 2013 Jacob Kuhl. All rights reserved.
//

#ifndef __myengine__graphicsObject__
#define __myengine__graphicsObject__

#include <iostream>
#include "baseObject.h"


class graphicsObject : public baseObject{



public:
    
    graphicsObject();
    ~graphicsObject();
    
    
    void render();
    void update(float dt);






};

#endif /* defined(__myengine__graphicsObject__) */
