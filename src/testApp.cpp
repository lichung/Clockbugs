#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    font.loadFont("Dreamer.ttf", 24);
    
    bugs.resize(200);
    for(auto& bug : bugs) {
        bug.setup();
    }
}

//--------------------------------------------------------------
void testApp::update(){
    for(auto& bug : bugs) {
        bug.update();
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2.0, ofGetHeight()/2.0);
    
    for(auto& bug : bugs) {
        bug.draw();
    }
    
    for(int i=1; i<13; i++)
    {
        float angle = ofMap(i, 0, 12, CLOCK_TOP, CLOCK_TOP+M_TWO_PI);
        float x = cos(angle) * 300;
        float y = sin(angle) * 300;
        font.drawString(ofToString(i), x, y);
    }
    
    ofPopMatrix();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
