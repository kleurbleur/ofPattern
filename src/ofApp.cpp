#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    hk = 0;
    vk = 0;
    mh = 18;
    mv = 750;

}

//--------------------------------------------------------------
void ofApp::update(){

    counter = counter + 0.5f;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetHexColor(0xFF0000);
    
//    for (int v = 0; v <50; v++){
//        int h = v;
//        ofDrawLine(10 + (h*14),10 + (v*14),20 + (h*14),20 + 2 * sin(counter) + (v*14));
//    }
    
    
    for (int h = 0; h <70; h++){
        for (int v = 0; v <50; v++){
            ofDrawLine(10 + (ofRandom(h*hk)*14),10 + (v*14*vk),20 + (h*14),20 + 2 * sin(counter) + (v*14));
        }
    }

// MENU LAYOUT
    
stringstream ss;

ss << "KEYS TO INCREMENT THE MULTIPLICATION ON THE HORIZONTAL AND VERTICAL AXES" << endl;
ss << "----------------------------------------------------------" << endl;
ss << " LEFT/RIGHT KEYS = " << (hk) << endl;
ss << " UP/DOWN KEYS = " << (vk) << endl;
ss << " V/H KEYS FOR INPUT BOX " << endl;
// ss << " mh = " << (mh) << endl;
// ss << " mv = " << (mv) << endl;
ss << "----------------------------------------------------------" << endl;

// draw the menu
ofSetColor(0);
ofDrawBitmapString(ss.str(), mh, mv);

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == OF_KEY_UP) {
        hk+=0.1;
    }
    if (key == OF_KEY_DOWN) {
        hk-=0.1;
    }
    if (key == OF_KEY_LEFT) {
        vk+=0.1;
    }
    if (key == OF_KEY_RIGHT) {
        vk-=0.1;
    }
    if (key == 'h') {
        hksys = ofSystemTextBoxDialog("Horizotnal multiplication", hksys);
        hk = ofToFloat(hksys);
    }
    if (key == 'v') {
        vksys = ofSystemTextBoxDialog("Vertical multiplication", vksys);
        vk = ofToFloat(vksys);
    }
   
    if (key == '[') {
        mh+=1;
    }
    if (key == ']') {
        mh-=1;
    }
    if (key == '-') {
        mv+=1;
    }
    if (key == '=') {
        mv-=1;
    }


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
