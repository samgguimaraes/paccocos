#include "Character.h"

Character::Character(): Character("", 0) {}
Character::Character(string spriteFile): Character(spriteFile, 0) {}
Character::Character(string spriteFile, int tileSize): tileSize_(tileSize)
{
    cout << "New Character: " << spriteFile << ":" << tileSize << endl;
}
Character::~Character() {}


