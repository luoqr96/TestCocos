#pragma once

#include "cocos2d.h"
#include "GameLayer.h"

using namespace cocos2d;

//class GameLayer : public cocos2d::Layer {
//public:
//	static cocos2d::Scene* createScene();
//	virtual bool init();
//	virtual void onEnterTransitionDidFinish();
//	CREATE_FUNC(GameLayer);
//
////public:
////	void gameUpdate(float dt);
////	bool bulletCollisionEnemy(Sprite* pBullet);
////	bool enemyCollisionPlane();
////	void menuCloseCallback(cocos2d::Ref* pSender);
////public:
////	PlaneLayer *planeLayer;
////	BulletSprite *bulletSprite;
////	EnemyLayer *enemyLayer;
//
//	//int getRand(int start, int end);
//};

class GameScene : public Scene {
public:
	GameScene();
	~GameScene();
	bool virtual init();
	void restart();
	CREATE_FUNC(GameScene);
};
