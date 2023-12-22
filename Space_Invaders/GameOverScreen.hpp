//
//  GameOverScreen.hpp
//  AtariSpaceInvaders


#ifndef GameOverScreen_hpp
#define GameOverScreen_hpp

#include <stdio.h>
#include <iostream>
#include <GLFW/glfw3.h>
#include "SegmentDisplay.hpp"
#include <vector>

class GameOverScreen{
public:
    void draw(std::vector<SegmentDisplay>&,std::vector<SegmentDisplay>&, std::vector<SegmentDisplay>&, bool, bool);
};

#endif /* GameOverScreen_hpp */
