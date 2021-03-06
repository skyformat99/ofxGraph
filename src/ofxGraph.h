#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "ofxGui.h"

class ofxGraph{
public:
    ofxGraph();
    ~ofxGraph();
    void setup(int _x, int _y, int _w, int _h);
    void setMaxLengthOfData(int &_max_length_of_data);
    void setDx(float _dx);
    void add(float _data);
    void draw();
    void setName(string _name);
    void setPosition(float _x, float _y);
    void setSize(float _w, float _h);
    void clear();
    void saveSettings();
    void saveCSV();
    void basicOperation(ofxPanel _panel);
    int max_length_of_data;
    ofColor color;
    ofRectangle r;
    ofImage img_move;
    ofImage img_expand;
    
    vector<float> data;

    float dx;

    float max_data;
    float min_data;
    string name;
    ofTrueTypeFont font_title;
    ofTrueTypeFont font_parameter;
    
    bool flg_mouse_dragged;
    ofPoint dragged_start_point;
    
    ofxXmlSettings xml_settings;
    ofxPanel panel;
    ofVec2f panel_size;
    ofxIntSlider slider_bufsize;
    ofxButton button_save_csv;
    ofxButton button_clear;
    ofxToggle toggle_pause;
    ofxToggle toggle_no_draw;
};

class ofxGraph2D : public ofxGraph
{
public:
    ofxGraph2D();
    ~ofxGraph2D();

    vector< vector<float> >data;
    void add(vector<float> _data);
    void setup(int _x, int _y, int _w, int _h);
    void draw();
    void clear();
    void saveCSV();
    int max_length_of_data2d;
    void setMaxLengthOfData2D(int &_max_length_of_data2d);
    float max_size_of_data2d;
    float min_size_of_data2d;
    
    ofxXmlSettings xml_settings;
    ofxPanel panel;
    ofxButton button_save_csv;
    ofxButton button_clear;
    ofxIntSlider slider_bufsize;



};
