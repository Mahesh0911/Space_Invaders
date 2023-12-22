//
//  Enemy.hpp
//  AtariSpaceInvaders


#ifndef Enemy_hpp
#define Enemy_hpp

#include <stdio.h>
#include <iostream>
#include <GLFW/glfw3.h>



class Enemy{

private:
    int health = 100;
    
public:
    float posx;
    float posy;
    int dir = 1;
    
    void draw();
    void translateLeft();
    void translateRight();
    void decreaseHealth();
    int getHealth();
    void move();
    Enemy(float, float);
    
};
#endif /* Enemy_hpp */
