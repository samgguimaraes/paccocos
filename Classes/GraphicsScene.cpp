#include "GraphicsScene.h"
#include "Character.h"

#include <iostream>
using namespace std;

USING_NS_CC;

Scene* GraphicsScene::createScene()
{
    auto scene = Scene::create();
    auto layer = GraphicsScene::create();
    scene->addChild(layer);

    return scene;
}

bool GraphicsScene::init()
{
    if (!Layer::init())
        return false;

    auto texCache = Director::getInstance()->getTextureCache();
    auto texture = texCache->addImage("pacco.png");

    Animation* animation = Animation::create();
    animation->addSpriteFrameWithTexture(texture, Rect(0,0,32,32));
    animation->addSpriteFrameWithTexture(texture, Rect(32,0,32,32));
    animation->addSpriteFrameWithTexture(texture, Rect(0,32,32,32));
    animation->addSpriteFrameWithTexture(texture, Rect(32,32,32,32));
    animation->setDelayPerUnit(0.5);
    animation->setLoops(-1);

    std::cout << animation->getFrames().size() << std::endl;

    auto sprite = Sprite::createWithSpriteFrame(animation->getFrames().at(0)->getSpriteFrame());
    sprite->runAction(Animate::create(animation));
    sprite->setPosition(100, 100);


    this->addChild(sprite, 0);

    Character c1 = Character();
    Character c2 = Character("file1.png");
    Character c3 = Character("file2.png", 32);

    return true;
}
