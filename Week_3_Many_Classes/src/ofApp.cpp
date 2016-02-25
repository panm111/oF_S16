#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    scully.setup(mouseX, mouseY);
    booboo.setup(mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::update(){
    scully.update();
    booboo.update();
    
    for(int i=0; i<myAliens.size(); i++){
        myAliens[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    scully.draw();
    booboo.draw();
    
    for(int i=0; i<myAliens.size(); i++){
        myAliens[i].draw();
    }
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
    Alien tempAlien; //declared oject
    
    tempAlien.setup(x,y); //setup declared object
    myAliens.push_back(tempAlien);
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    myAliens.clear();
    
    for(int i=0; i<myAliens.size(); i++){
        float distance = ofDist(x,y, myAliens[i].xPos, myAliens[i].yPos);
        //calculates distance between two points.
        
        if(distance<myAliens[i].diam/2){
            myAliens.erase(myAliens.begin() + i); //erasing each one that is within.
            //.begin that gives you a pathto something.
        }
    }
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
