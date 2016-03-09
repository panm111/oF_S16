//
//  Branch.cpp
//  Week_6_Tree
//
//  Created by Jackie Xu on 2016-03-02.
//
//

#include "Branch.h"

void Branch::setup(float _xPos, float _yPos,
           float _length, float _width,
           float _splitPercentage,
           float _maxSplitAngle,
           float _maxSubdivisions,
           float _maxSegments,
           float _segmentsSinceStart,
           float _angle,
           float _curvature,
           ofColor _color
//           int _counter
                   ){
    
//Set incoming values to the last branch values
    xPos = _xPos;
    yPos = _yPos;
    length = _length;
    width = _width;
    splitPercentage = _splitPercentage;
    maxSplitAngle = _maxSplitAngle;
    maxSubdivisions = _maxSubdivisions;
    maxSegments = _maxSegments;
    segmentsSinceStart = _segmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;

//Check if the branch splits
    float r = ofRandomuf(); //gives avlue btwn 0 & 1
    
    if(r > splitPercentage && segmentsSinceStart != maxSegments){
        split = true;
    } else {
        split = false;
    }
    
//draw current branch
    ofSetColor(color);
    ofSetLineWidth(int(width));
    ofLine(xPos, yPos, xPos + length*cos(angle), yPos + length*sin(angle));
    
    
    
//update the values of existing branch
    xPos += length*cos(angle);
    yPos += length*sin(angle);
    width = ofRandom(0.4, 0.8)*width;
    length = ofRandom(0.6,0.8)*length;
    angle += curvature;
    curvature = ofRandom(0,2*PI/360);
    segmentsSinceStart++;
    
//recursion
    if(segmentsSinceStart <= maxSegments){
        
        if(!split){
            //do not split
            Branch subBranch;
            subBranch.setup(xPos, yPos, length, width, splitPercentage, maxSplitAngle, maxSubdivisions, maxSegments, segmentsSinceStart, angle, curvature, color);
        }else{
            //split occurs
            Branch subBranch1;
            float angle1 = angle + ofRandom(0,maxSplitAngle);
            subBranch1.setup(xPos, yPos, length, width, splitPercentage, maxSplitAngle, maxSubdivisions, maxSegments, segmentsSinceStart, angle1, curvature, color);
            
            Branch subBranch2;
            float angle2 = angle -ofRandom(0, maxSplitAngle);
            subBranch2.setup(xPos, yPos, length, width, splitPercentage, maxSplitAngle, maxSubdivisions, maxSegments, segmentsSinceStart, angle2, curvature, color);
            
        }
    }
    
    
}
