#include "ofApp.h"


void ofApp::pentogon(int px1, int py1, int px2, int py2, int px3, int py4, int px5, int py5){
    //Line 1
    ofLine(px1, py1, px2, py2);
    //Line 2
    ofLine(px2, py2, px3, py3);
    //Line 3
    ofLine(px3, py3, px4, py4);
    //Line 4
    ofLine(px4, py4, px5, py5);
    //Line 5
    ofLine(px5, py5, px1, py1);
}

void ofApp::octogon(){
    //Line 1
    ofLine(ox1, oy1, ox2, oy2);
    //Line 2
    ofLine(ox2, oy2, ox3, oy3);
    //Line 3
    ofLine(ox3, oy3, ox4, oy4);
    //Line 4
    ofLine(ox4, oy4, ox5, oy5);
    //Line 5
    ofLine(ox5, oy5, ox6, oy6);
    //Line 6
    ofLine(ox6, oy6, ox7, oy7);
    //Line 7
    ofLine(ox7, oy7, ox8, oy8);
    //Line 8
    ofLine(ox8, oy8, ox1, oy1);

}

void ofApp::star(){
    //Line 1
    ofLine(sx1,sy1, sx2, sy2);
    //Line 2
    ofLine(sx2, sy2, sx3, sy3);
    //Line 3
    ofLine(sx3, sy3, sx4, sy4);
    //Line 4
    ofLine(sx4, sy4, sx5, sy5);
    //Line 5
    ofLine(sx5, sy5, sx1, sy1);
}

//--------------------------------------------------------------
void ofApp::setup(){
    px1 = 80;
    py1 = ofGetHeight()/2;
    px2 = 160;
    py2 = ofGetHeight()/2 -80;
    px3 = 240;
    py3 = ofGetHeight()/2;
    px4 = 200;
    py4 = ofGetHeight()/2 + 80;
    px5 = 120;
    py5 = ofGetHeight()/2 + 80;
    
    ox1 = 300;
    oy1 = ofGetHeight()/2-80;
    ox2 = 360;
    oy2 = ofGetHeight()/2-80;
    ox3 = 400;
    oy3 = ofGetHeight()/2-30;
    ox4 = 400;
    oy4 = ofGetHeight()/2 + 30;
    ox5 = 360;
    oy5 = ofGetHeight()/2+80;
    ox6 = 300;
    oy6 = ofGetHeight()/2+80;
    ox7 = 260;
    oy7 = ofGetHeight()/2 +30;
    ox8 = 260;
    oy8 = ofGetHeight()/2-30;
    
    sx1 = 450;
    sy1 = ofGetHeight()/2+80;
    sx2 = 550;
    sy2 = ofGetHeight()/2-80;
    sx3 = 650;
    sy3 = ofGetHeight()/2+80;
    sx4 = 450;
    sy4 = ofGetHeight()/2;
    sx5 = 650;
    sy5 = ofGetHeight()/2;
    
    for(int i=0; i<NUMROBOTS; i++){
        rob[i].setup();
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i=0; i<NUMROBOTS; i++){
        rob[i].move();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
//    ofSetColor(255, 0, 0);
//    ofFill();
    pentogon(px1, py1, px2, py2, px3, py4, px5, py5);
    octogon();
    star();
    
    
    for(int i=0; i<NUMROBOTS; i++){
        rob[i].display();
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
