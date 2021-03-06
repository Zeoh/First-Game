#pragma once
#include "cocos2d.h"
#include "OperationLayer.h"
#include "GameLayer.h"


USING_NS_CC;

class GameScene : public cocos2d::Scene
{
public:
	GameScene();
	~GameScene();

	virtual bool init();
	CREATE_FUNC(GameScene);

	CC_SYNTHESIZE(GameLayer*, _gameLayer, GameLayer);
	CC_SYNTHESIZE(OperationLayer*, _operationLayer, OperationLayer);

	
};

