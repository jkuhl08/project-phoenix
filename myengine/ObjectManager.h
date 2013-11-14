//
//  ObjectManager.h
//  myengine
//
//  Created by Jacob Kuhl on 11/13/13.
//  Copyright (c) 2013 Jacob Kuhl. All rights reserved.
//

#ifndef __myengine__ObjectManager__
#define __myengine__ObjectManager__

#include <iostream>
#include <map>
class ObjectManager{

public:
    ~ObjectManager();
    static ObjectManager* Instance();
    

    
    int getNextValidId();  //Simple id counter
    int createObject();
    int removeObject();
    
    void setId(int i);
    int getId();
    
    
    
    
private:
    
    ObjectManager();
    static ObjectManager* instance;
    
    int _id;
    int objectCount;

    
};


#endif /* defined(__myengine__ObjectManager__) */
