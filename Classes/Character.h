#pragma once

#include <string>
#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;
using namespace std;


class Character
{
    public:
        Character();
        Character(string spriteFile);
        Character(string spriteFile, int tileSize);
        ~Character();
    private:
        Texture2D* texture;
        int tileSize_;
};
