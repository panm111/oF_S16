//
//  Alien.h
//  Week_3_Many_Classes
//
//  Created by Jackie Xu on 2016-02-10.
//
//

#ifndef __Week_3_Many_Classes__Alien__
#define __Week_3_Many_Classes__Alien__

#include <stdio.h>
#include "ofMain.h"

#endif /* defined(__Week_3_Many_Classes__Alien__) */

class Alien{
public:
    
    //properties
    int xPos, yPos;
    int velX, velY;
    int r,g,b;
    int diam;
    
    //constructor - allows us to give its initial values - set up the constructors in the cpp file
    Alien();
    
    //method
    void setup(float _x, float _y);
    void update();
    void draw();
    
};
