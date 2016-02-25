//
//  Tree.cpp
//  Week_5_Recursive_Tree_Object
//
//  Created by Jackie Xu on 2016-02-24.
//
//

#include "Tree.h"


//void Tree::seed1(float dotSize, float angle, float x, float y){
//    //nested if statement
//    if(dotSize > 1.0f){
//        float r = ofRandomuf(); //gives you a random number between 0 and 1
//        
//        //first if statement will happen 98% of the time
//        if(r > 0.02f){
//            ofCircle(x,y, dotSize);
//            float newX = x + cos(angle)*dotSize;
//            float newY = y + sin(angle)*dotSize;
//            
//            seed1(dotSize*0.9f, angle - angleOffSetA, newX, newY);
//            
//        }else{
//            ofCircle(x, y, dotSize);
//            float newX = x + cos(angle)*dotSize;
//            float newY = y + sin(angle)*dotSize;
//            
//            seed1(dotSize*0.2f, angle - angleOffSetA, newX, newY);
//            seed2(dotSize*0.3f, angle + angleOffSetB, newX, newY);
//            seed1(dotSize*0.4f, angle - angleOffSetB, newX, newY);
//        }
//    }
//    
//}
//
//void Tree::seed2(float dotSize, float angle, float x, float y){
//    if(dotSize > 1.0f){
//        float r = ofRandomuf(); //gives you a random number between 0 and 1
//        
//        if(r > 0.05f){
//            ofCircle(x,y, dotSize);
//            float newX = x + cos(angle)*dotSize;
//            float newY = y + sin(angle)*dotSize;
//            
//            seed2(dotSize*0.9f, angle - angleOffSetA, newX, newY);
//            
//        }else{
//            ofCircle(x, y, dotSize);
//            float newX = x + cos(angle)*dotSize;
//            float newY = y + sin(angle)*dotSize;
//            
//            seed2(dotSize*0.2f, angle - angleOffSetA, newX, newY);
//            seed1(dotSize*0.3f, angle + angleOffSetB, newX, newY);
//            seed2(dotSize*0.4f, angle - angleOffSetB, newX, newY);
//        }
//    }
//
//    
//}



void Tree::seed1(float dotSize, float angle, float x, float y){
    //nested if statement
    if(dotSize > 1.0f){
        float r = ofRandomuf(); // gives you a random number btwn 0 & 1
        
        //first if statement will happen 98 of time
        if (r > 0.02f) {
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle)*dotSize;
            float newY = y + sin(angle)*dotSize;
            seed1(dotSize*0.99f, angle - angleOffSetA, newX, newY);
        } else {
            ofCircle(x, y, dotSize);
            float newX = x + cos(angle);
            float newY = y + sin(angle);
            seed1(dotSize*0.99f, angle + angleOffSetA, newX, newY);
            seed2(dotSize*0.6f, angle + angleOffSetB, newX, newY);
            seed1(dotSize*0.5f, angle - angleOffSetB, newX, newY);
        }
    }
}


void Tree:: seed2(float dotSize, float angle, float x, float y){
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