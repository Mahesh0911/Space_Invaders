//
//  Bullet.hpp
//  AtariSpaceInvaders


#ifndef Bullet_hpp
#define Bullet_hpp


#include <stdio.h>
#include <iostream>
#include <GLFW/glfw3.h>
#include "Player.hpp"
#include "Heart.hpp"
#include "HealthBar.hpp"
#include <vector>
#include <cmath>

class Bullet{
public:
    float posx;
    float posy;
    
    Bullet(float, float);
    ~Bullet();
    void draw();
    void moveDown();
    int destroyPlayerIfNear(Player&, std::vector<Heart*>&, HealthBar&);
    
};

#endif /* Bullet_hpp */
