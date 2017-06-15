#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(30);
	ofBackground(0);
	ofSetWindowTitle("20170617");

	//for (int i = 0; i < 256; i++) {
	//	Particle particle = Particle(ofRandom(-ofGetWidth() / 2, ofGetWidth() / 2), ofRandom(-ofGetHeight() / 2, ofGetHeight() / 2), ofRandom(-512, 512));
	//	this->particles.push_back(particle);
	//}
}

//--------------------------------------------------------------
void ofApp::update(){
	if (ofRandom(100) > 0) {
		Particle particle = Particle(ofRandom(-ofGetWidth() / 2, ofGetWidth() / 2), ofRandom(-ofGetHeight() / 2, ofGetHeight() / 2), ofRandom(-512, 512));
		//Particle particle = Particle(0, 0, 0);
		this->particles.push_back(particle);
	}

	vector<int> removeIndexes = {};

	for (int i = 0; i < this->particles.size(); i++) {
		this->particles[i].think();
		this->particles[i].flok(this->particles);
		this->particles[i].borders();
		this->particles[i].update();

		if (this->particles[i].life < 0) {
			removeIndexes.push_back(i);
		}
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	this->cam.begin();

	for (auto& p : this->particles) {
		p.draw();
	}

	this->cam.end();
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
