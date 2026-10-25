#include "ofApp.h"

//--------------------------------------------------------------

ofFbo Arte;

void proceso()
{
	ofSetColor(0);

	int margen = 50;
	for (int y = margen+margen; y < ofGetWindowHeight() - margen; y += 15)
	{
		ofPolyline linea;
		for (int x = margen; x < ofGetWindowWidth() - margen; x++)
		{
			//float deformacion = ofNoise(x * 0.005f, y * 0.01f) * 100.0f;


			int XY = y * x;
			float deformacion = ofNoise(x * ofMap(x, margen, ofGetWindowWidth(), 0, 0.015), y * 0.01f) * ofMap(XY, 0, ofGetWindowWidth() * ofGetWindowHeight(), 0, 200);
			//float deformacion = ofNoise(x * ofMap(XY, margen, ofGetWindowWidth() * ofGetWindowHeight(), 0, 0.015), y * 0.01f) * ofMap(XY, margen, ofGetWindowWidth() * ofGetWindowHeight(), 0, 200);


			//float deformacion = ofNoise(x * ofMap(y, margen, ofGetWindowHeight(), 0, 0.015), y * 0.01f) * ofMap(x, margen, ofGetWindowWidth(), 0, 200);
			//float deformacion = ofNoise(x * ofMap(x, margen, ofGetWindowWidth(), 0, 0.015), y * ofMap(y, margen, ofGetWindowHeight(), 0, 0.01f)) * ofMap(x, margen, ofGetWindowWidth(), 0, 200);
			linea.addVertex(x, y - deformacion);
		}
		linea.draw();
	}

}

void ofApp::setup()
{
	ofBackground(255);

	ofRectangle r(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
	ofBeginSaveScreenAsSVG("Resultado.svg", false, false, r);
	proceso();
	//ofDrawCircle(50, 50, 20);
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
