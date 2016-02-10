//
//  Robot.cpp
//  Week_2_Homework
//
//  Created by Jackie Xu on 2016-02-08.
//
//

#include "Robot.h"
#include "ofMain.h"


Robot::Robot(){
    posX = ofGetWidth()*0.5;
    posY = ofGetHeight()*0.5;
    vX = ofRandom(-5,5);
    vY = ofRandom(-5,5);
}

void Robot::setup(){
    r = ofRandom(255);
    g = ofRandom(255);
    b = ofRandom(255);
}

void Robot::display(){
    ofSetColor(r,g,b);
    ofRect(posX, posY, 100,100);
    ofRect(posX+45, posY-40, 10, 40);
    
    ofSetColor(0);
    ofCircle(posX+80, posY+15, 10);
    ofCircle(posX+30, posY+15, 10);
    ofRect(posX+10, posY+50, 80, 20);
}

void Robot::move(){
    posX += vX;
    posY += vY;
    
    if(posX>ofGetWidth()-100 || posX < 0){
        vX = -vX;
    }
    
    if(posY>ofGetHeight()-100 || posY <0){
        vY = -vY;
    }
}