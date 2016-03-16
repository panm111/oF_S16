#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(137,207,240);
//    branchLength = ofRandom(50,75);
    //    branchAngle = ofRandom(30,350);
    //    branchLength= 200;
    
    
    gui.setup(); //setups the panel
    gui.add(branchLength.setup("branchLength", 50, 20, 300));
    gui.add(branchAngle.setup("branchAngle", 50,0,360));
    
    snowflake.setup();
    
}

//--------------------------------------------------------------
void ofApp::update(){
//    branchAngle = sin(ofGetElapsedTimef())*100;
    
    speed = ofGetElapsedTimef()*25;
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    snowflake.draw();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    ofPushMatrix();
    
    ofRotate(speed);
    cout << ofGetElapsedTimef() << endl;
    
    ofPushMatrix();
    snowflake.display(branchLength,branchAngle);
    //    snowflake.display(100, cos(ofGetElapsedTimef())*100);
    ofPopMatrix();
    
    ofPushMatrix();
    ofRotate(45);
    snowflake.display(branchLength,branchAngle);
    ofPopMatrix();
    
    ofPushMatrix();
    //        ofTranslate(0, branchLength);
    ofRotate(90);
    snowflake.display(branchLength, branchAngle);
    ofPopMatrix();
    
    ofPushMatrix();
    //        ofTranslate(0, branchLength);
    ofRotate(135);
    snowflake.display(branchLength, branchAngle);
    ofPopMatrix();
    
    
    ofPushMatrix();
    //        ofTranslate(0, branchLength);
    ofRotate(180);
    snowflake.display(branchLength, branchAngle);
    ofPopMatrix();
    
    ofPushMatrix();
    //        ofTranslate(0, branchLength);
    ofRotate(225);
    snowflake.display(branchLength, branchAngle);
    ofPopMatrix();
    
    
    ofPushMatrix();
    //        ofTranslate(0, branchLength);
    ofRotate(270);
    snowflake.display(branchLength, branchAngle);
    ofPopMatrix();
    
    ofPushMatrix();
    //        ofTranslate(0, branchLength);
    ofRotate(315);
    snowflake.display(branchLength, branchAngle);
    ofPopMatrix();
    
    ofPopMatrix();
    
    
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
