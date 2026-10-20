#include "ofApp.h"

//--------------------------------------------------------------

ofFbo Arte;

void proceso()
{
	ofSetColor(0);
	
}
//set a4 window, white background. 
//export and ready


void ofApp::setup()
{
	ofBackground(255);

	ofRectangle r(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	ofBeginSaveScreenAsSVG("Resultado.svg", false, false, r);
	proceso();

	ofEndSaveScreenAsSVG();

	Arte.allocate(ofGetWindowWidth(), ofGetWindowHeight(), GL_RGBA);
	ofClear(0, 0, 0, 255);
	Arte.begin();
	proceso();
	Arte.end();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
	Arte.draw(0,0);

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
