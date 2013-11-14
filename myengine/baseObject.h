//
//  baseObject.h
//  myengine
//
//  Created by Jacob Kuhl on 11/13/13.
//  Copyright (c) 2013 Jacob Kuhl. All rights reserved.
//
//Base Class for graphics Objects to inherit from

#ifndef __myengine__baseObject__
#define __myengine__baseObject__

#include <iostream>


class baseObject{
    
    
public:
    
    
    baseObject();
    ~baseObject();
    
    
    //Pure Virtuals
    virtual void render() = 0;
    virtual void update(float dt) = 0;
    
    
private:
    
    
    
};


#endif /* defined(__myengine__baseObject__) */
