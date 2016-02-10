#pragma once

#include "ofMain.h"
#include "Robot.h"

#define NUMROBOTS 5

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    void pentogon(int px1, int py1, int px2, int py2, int px3, int py4, int px5, int py5);
    
    int px1,py1,px2,py2,px3,py3,px4,py4,px5,py5;
    
    void octogon();
    
    int ox1,ox2,ox3,ox4,ox5,ox6,ox7,ox8,oy1,oy2,oy3,oy4,oy5,oy6,oy7,oy8;
    
    void star();
    
    int sx1,sx2,sx3,sx4,sx5,sy1,sy2,sy3,sy4,sy5;
    
    float mouseX,mouseY;
    
    int numRobots;
    Robot rob [NUMROBOTS];
};
