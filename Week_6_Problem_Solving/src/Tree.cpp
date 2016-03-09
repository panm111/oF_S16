//
//  Tree.cpp
//  Week_6_Problem_Solving
//
//  Created by Jackie Xu on 2016-03-02.
//
//

#include "Tree.h"

void Tree::seed1(float dotSize, float angle, float x, float y){
    //nested if statement
    ofSetColor(255,0,0);
    ofFill();
    if(dotSize > 1.0f){
        float r = ofRandomuf(); // gives you a random number btwn 0 & 1
        
        //first if statement will happen 98 of time
        if (r > 0.02f) {
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed1(dotSize*0.99f, angle + angleOffSetA, newX, newY);
        } else {
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle);
            float newY = y + sin(angle);
            seed1(dotSize*0.99f, angle - angleOffSetA, newX, newY);
            seed2(dotSize*0.6f, angle + angleOffSetB, newX, newY);
            seed1(dotSize*0.5f, angle - angleOffSetB, newX, newY);
        }
    }
}


void Tree:: seed2(float dotSize, float angle, float x, float y){
    ofSetColor(0,0,255);
    ofFill();
    if(dotSize > 1.0f){
        float r = ofRandomuf();
        if(r > 0.05f){
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed2(dotSize*0.99f, angle + angleOffSetA, newX, newY);
        } else {
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle);
            float newY = y + sin(angle);
            seed2(dotSize*0.99f, angle - angleOffSetA, newX, newY);
            seed1(dotSize*0.6f, angle + angleOffSetB, newX, newY);
            seed2(dotSize*0.5f, angle - angleOffSetB, newX, newY);
        }
        
    }
}
