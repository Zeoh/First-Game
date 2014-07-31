#pragma once
#include "cocos2d.h"
#include "Defines.h"

USING_NS_CC;

class ActionSprite : public cocos2d::Sprite
{
public:
	ActionSprite();
	~ActionSprite();

	//action methods
	void idle();
	void attack();
	void hurtWithDamage(float damage);
	void knockout();
	void walkWithDirection(Vec2 direction);

	//scheduled methods
	void update(float dt);

	//actions
	CC_SYNTHESIZE_RETAIN(Action*, _idleAction, IdleAction);
	CC_SYNTHESIZE_RETAIN(Action*, _attackAction, AttackAction);
	CC_SYNTHESIZE_RETAIN(Action*, _walkAction, WalkAction);
	CC_SYNTHESIZE_RETAIN(Action*, _hurtAction, HurtAction);
	CC_SYNTHESIZE_RETAIN(Action*, _knockedOutAction, KnockedOutAction);

	//states
	CC_SYNTHESIZE(ActionState, _actionState, ActionState);

	//attributes
	CC_SYNTHESIZE(float, _walkSpeed, WalkSpeed);
	CC_SYNTHESIZE(float, _hitPoints, HitPoints);
	CC_SYNTHESIZE(float, _damage, Damage);

	//movement
	CC_SYNTHESIZE(cocos2d::Vec2, _velocity, Velocity);
	CC_SYNTHESIZE(cocos2d::Vec2, _desiredPosition, DesiredPosition);

	//measurements
	CC_SYNTHESIZE(float, _centerToSides, CenterToSides);
	CC_SYNTHESIZE(float, _centerToBottom, CenterToBottom);

	Animation* animationWithPrefix(std::string prefix, int startFrameIdx, int frameCount, float delay);
};