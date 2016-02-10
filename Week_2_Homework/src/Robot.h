//
//  Robot.h
//  Week_2_Homework
//
//  Created by Jackie Xu on 2016-02-08.
//
//

#ifndef __Week_2_Homework__Robot__
#define __Week_2_Homework__Robot__

#include <stdio.h>

#endif /* defined(__Week_2_Homework__Robot__) */

class Robot{
public:
    Robot();
    
    float posX, posY;
    float r,g,b;
    float vX, vY;
    
    void setup();
    void display();
    void move();
};