//
//  Heart.hpp
//  AtariSpaceInvaders

#define GL_SILENCE_DEPRECATION
#ifndef Heart_hpp
#define Heart_hpp

#include <stdio.h>
#include <iostream>
#include <GLFW/glfw3.h>
#include <cmath>

class Heart {
public:
    float posx;
    float posy;
    
    Heart (float, float);
    void draw();
};



#endif /* Heart_hpp */
