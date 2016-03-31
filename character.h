#ifndef CHARACTER_H
#define CHARACTER_H

#include "enum.h"
#include "entity.h"
#include "vector.h"

class Entity;

class Character : public Entity {
private:
	int hitPoints_;
	int attack_;
	bool isDead_;
public:
	
	Character(int hitPoints, int attack) :
			hitPoints_(hitPoints),
			attack_(attack),
			isDead_(false)
	{ setSymbol('@'); }

	int getHitPoints() const { return hitPoints_; }
	int getAttack() const { return attack_; }

	void changeHitPoints (int val) {
		hitPoints_ += val;
		if (hitPoints_ <= 0)
			isDead_ = true;
	}
};

#endif
