//
//  Branch.h
//  oF_Project_1
//
//  Created by Jackie Xu on 2016-03-13.
//
//

#ifndef __oF_Project_1__Branch__
#define __oF_Project_1__Branch__

#include <stdio.h>
#include "ofxGui.h"

#endif /* defined(__oF_Project_1__Branch__) */

#include "ofMain.h"

class Branch{
public:
    Branch();
    
    float length;
    float theta;
    
    void setup();
    void display(float length, float theta);
    void draw();
    
    ofxPanel gui;
    ofxFloatSlider detail;

};