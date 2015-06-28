#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "ofxKinect.h"
#include "ofxOpenCv.h"

#define HOST "192.168.1.65"
#define PORT 12345

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
    
        ofxOscSender sender;
    	ofxKinect kinect;
        ofxCvColorImage colorImg;
    
        ofxCvGrayscaleImage grayImage; // grayscale depth image
        ofxCvGrayscaleImage grayThreshNear; // the near thresholded image
        ofxCvGrayscaleImage grayThreshFar; // the far thresholded image
    
        ofxCvContourFinder contourFinder;
    
        int nearThreshold;
        int farThreshold;
    
        int rhysmFlag[100];
        int centerX[100];
        int centerY[100];
        string center;
    
        bool bThreshWithOpenCV;
		
};
