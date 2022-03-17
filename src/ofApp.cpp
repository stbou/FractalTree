#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetWindowTitle("L - SYSTEM");
	ofSetBackgroundColor(31);

	window_width = ofGetWindowWidth();
	window_height = ofGetWindowHeight();

	gui.setup();

	gui.add(branch_ui.setup("Tree size", 250, 10, 250));
	gui.add(expand_ui.setup("Decreasing branch", 2, 1, 200));
	gui.add(branch_length_ui.setup("Branch's length", 0.69, 0.4, 0.69));
	gui.add(theta_ui.setup("Theta", 40, 1, 100));
	gui.add(line_ui.setup("Line weight", 10, 0, 10));
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	gui.draw();

	camera.begin();
	camera.setVFlip(true);

	if (rotate) ofRotate(ofGetElapsedTimef() * 10, 0, 1, 0);

	ofTranslate(window_width / 12, window_height / 2, 0);
	branch(branch_ui, line_ui);

	camera.end();
}

//--------------------------------------------------------------
void ofApp::branch(float len, int line) {

	ofSetLineWidth(line - 1);
	ofDrawLine(0, 0, 0, -len);
	ofTranslate(0, -len, 0);


	len *= branch_length_ui;

	if (len > expand_ui) {

		ofPushMatrix();
		ofRotateZDeg(theta_ui);
		ofSetLineWidth(line - 1.5);
		ofRotateYDeg(theta_ui);
		branch(len, line - 1);
		ofPopMatrix();

		ofPushMatrix();
		ofRotateZDeg(-theta_ui);
		ofSetLineWidth(line - 1.5);
		branch(len, line - 1);
		ofPopMatrix();

		if (line < 5) {
			ofSetColor(ofColor::green);
		}
		else {
			ofSetColor(ofColor::saddleBrown);
		}


	}

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {	

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

	switch (key)
	{
		case 49: // key number 1 
			rotate = true;			
			break; 

		case 50: // key number 2
			rotate = false; 
			break; 

		default: 
		break;
	}
	

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
