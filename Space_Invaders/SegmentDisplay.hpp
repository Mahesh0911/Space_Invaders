//
//  SegmentDiaplay.hpp
//  AtariSpaceInvaders


#define GL_SILENCE_DEPRECATION
#ifndef SegmentDisplay_hpp
#define SegmentDisplay_hpp

#include <stdio.h>
#include <iostream>
#include <GLFW/glfw3.h>
//#include <String>

class SegmentDisplay{
    
public:
    float posx;
    float posy;
    std::string letter;
    
    void draw(int,float , float, float);
    SegmentDisplay(std::string);
    
};

#endif /* SegmentDiaplay_hpp */
