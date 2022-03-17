/**
 * \file main.cpp
 * \author Stephane Boulanger
 * \version 0.1
 * \date 2022-03-17
 * \copyright Copyright (c) 2022
 */

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
