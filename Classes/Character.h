#pragma once

#include <string>
#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;


class Character
{
    public:
        Character();
        Character(const std::string& spriteFile);
        Character(const std::string& spriteFile, int tileSize);
        ~Character();
    private:
        int tileSize_;
};
