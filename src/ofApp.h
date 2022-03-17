/**
 * \file ofApp.h
 * \author Stephane Boulanger
 * \version 0.1
 * \date 2022-03-17
 * \copyright Copyright (c) 2022
 */

#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();
	void branch(float len, int line);

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

	// Gui panel 
	ofxPanel gui;
	ofxIntSlider branch_ui;
	ofxIntSlider expand_ui;
	ofxFloatSlider branch_length_ui;
	ofxFloatSlider theta_ui;
	ofxIntSlider line_ui;

	// Camera 
	ofEasyCam camera;

	// Variables
	int window_width;
	int window_height;

	float branch_length;
	int branch_size;
	float theta;
	int expand;

	int line_weight;

	bool rotate; 
};
