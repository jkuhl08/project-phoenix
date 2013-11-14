//
//  ObjectManager.cpp
//  myengine
//
//  Created by Jacob Kuhl on 11/13/13.
//  Copyright (c) 2013 Jacob Kuhl. All rights reserved.
//

#include "ObjectManager.h"

ObjectManager* ObjectManager::instance = NULL;

ObjectManager::ObjectManager(){

    setId(0); //Start of the object manager with an id of zero
    
}
ObjectManager::~ObjectManager(){

    delete instance;

}

ObjectManager* ObjectManager::Instance(){

    if(!instance){
    
        instance = new ObjectManager();
        
    };
    
        return instance;

}

void ObjectManager::setId(int i)
{

    this->_id = i;

}
int ObjectManager::getId(){

    return this->_id;

}


int ObjectManager::getNextValidId(){

    int nextId = getId();
    nextId++;
    
    return nextId;

}



