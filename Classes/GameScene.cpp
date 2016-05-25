#include "GameScene.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"

USING_NS_CC;

using namespace cocostudio::timeline;

GameScene::GameScene() {}
GameScene::~GameScene() {}
bool GameScene::init()
{
	auto gameLayer = GameLayer::create();
	this->addChild(gameLayer);

	return true;
}


