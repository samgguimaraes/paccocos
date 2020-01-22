#include "GraphicsScene.h"

USING_NS_CC;

Scene* GraphicScene::createScene()
{
    auto scene = Scene::create();
    auto layer = GraphicScene::create();
    scene->addChild(layer);

    reuturn scene;
}
