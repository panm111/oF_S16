#include "ofApp.h"

void ofApp::drawBranch(float length, float theta){
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofLine(0,0,0, -length);
    ofTranslate(0, -length);
    length = length*0.5;

    if(length>2){
        
    ofPushMatrix();
    ofRotate(theta);
    drawBranch(length, theta);
    ofPopMatrix();
    
    ofPushMatrix();
    ofRotate(-theta);
    drawBranch(length, theta);
    ofPopMatrix();
    
    }
}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight());
//    drawBranch(200, cos(ofGetElapsedTimef())*100);
    drawBranch(200,40);
    
//    ofLine(0,0,0,-200);
//    
//    ofSetColor(255, 0, 0);
//    ofTranslate(0, -200); //taking our origin point and moving it up.
//    ofRotate(40);
//    ofLine(0,0,0,-200);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
