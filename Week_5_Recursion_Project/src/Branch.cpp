//
//  Branch.cpp
//  Week_5_Recursion_Project
//
//  Created by Jackie Xu on 2016-02-22.
//
//

#include "Branch.h"
#include "ofMain.h"

Branch::Branch(){
    
}

void Branch::setup(){
    
}

void Branch::display(float length, float theta){
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
//    display(200, cos(ofGetElapsedTimef())*100);
    
//    ofLine(x1,y1,x2,y2)
    ofLine(0,length,0, -length);
    ofLine(-length,0,length,0);
    
//    ofTranslate(float x, float y, float z)
    ofTranslate(0, -length);
    length = length/2;
   
    ofPushMatrix();
        if(length>2){
        
        ofPushMatrix();
        ofRotate(theta);
        display(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        display(length, theta);
        ofPopMatrix();
        
    }
    ofPopMatrix();
    
    ofPushMatrix();
    ofRotate(180);
//    ofTranslate(length, ofGetHeight());
    ofTranslate(0, -200);
//    ofTranslate(length, length);
    if(length>2){
        
        ofPushMatrix();
        ofRotate(theta);
        display(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        display(length, theta);
        ofPopMatrix();
        
    }
    ofPopMatrix();
    

    
}