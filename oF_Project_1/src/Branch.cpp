//
//  Branch.cpp
//  oF_Project_1
//
//  Created by Jackie Xu on 2016-03-13.
//
//

#include "Branch.h"

Branch::Branch(){
    
}

void Branch::setup(){
    gui.setup(); //setups the panel
    gui.add(detail.setup("detail", 2, 1, 10));
}

void Branch::draw(){
    gui.draw();
}

void Branch::display(float length, float theta){
    ofLine(0,0,0, -length);
    
    ofPushMatrix();
    ofTranslate(0, -length);
    length = length*0.6;
    
    if(length>detail){
        
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
    
    
    ofLine(0,0,0, -length/3);
    
    ofPushMatrix();
    ofTranslate(0, -length);
    length = length*0.6;
    
    if(length>detail){
        
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