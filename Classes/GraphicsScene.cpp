#include "GraphicsScene.h"

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


//    Image imageWall;
//    imageWall.initWithImageFile("walls.png");
//    Texture2D* texWall;
//    texWall->initWithImage(imageWall);

    Vector<SpriteFrame*> frames;
    frames.pushBack(SpriteFrame::create("pacco.png", Rect(0,0,32,32)));
    frames.pushBack(SpriteFrame::create("pacco.png", Rect(0,32,32,32)));
    frames.pushBack(SpriteFrame::create("pacco.png", Rect(32,0,32,32)));
    frames.pushBack(SpriteFrame::create("pacco.png", Rect(32,32,32,32)));

    Animation* animation = Animation::create();
    animation->addSpriteFrame(frames.at(0));
    animation->addSpriteFrame(frames.at(1));
    animation->addSpriteFrame(frames.at(2));
    animation->addSpriteFrame(frames.at(3));

    auto sprite = Sprite::create();
    sprite->setSpriteFrame(frames.at(0));
    sprite->runAction(Animate::create(animation));
    sprite->setPosition(100, 100);


    this->addChild(sprite, 0);

    return true;
}
