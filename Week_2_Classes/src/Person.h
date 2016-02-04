//
//  Person.h
//  classes
//
//  Created by Jackie Xu on 2016-02-03.
//
//

#ifndef __classes__Person__
#define __classes__Person__

#include "ofMain.h"
#include <stdio.h>

class Person{
public:
    
    //properties
    string name;
    int age;
    string personality;
    string gender;
    Boolean alive;
    
    //methods
    void eat();
    void hello();
    void sleep();
    void talk();
    void lie();
    void shower();
    void fart();
    
};

#endif /* defined(__classes__Person__) */
