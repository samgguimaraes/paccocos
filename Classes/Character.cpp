#include "Character.h"

Character::Character(): Character("", 0) {}
Character::Character(const std::string& spriteFile): Character(spriteFile, 0) {}
Character::Character(const std::string& spriteFile, int tileSize): tileSize_(tileSize)
{
    std::cout << "New Character: " << spriteFile << ":" << tileSize << std::endl;
}
Character::~Character() {}

