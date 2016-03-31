#ifndef CHARACTER_H
#define CHARACTER_H

#include "enum.h"

const char CHAR_SYMBOL = '@';

class Character {
private:
	int hitPoints_;
	int attack_;
	bool isDead_;
	int x_, y_;
public:
	Character(int hitPoints, int attack) :
			hitPoints_(hitPoints),
			attack_(attack),
			isDead_(false),
			x_(0),
			y_(0)
	{}

	int getHitPoints() const { return hitPoints_; }
	int getAttack() const { return attack_; }
	int getX() const { return x_; }
	int getY() const { return y_; }

	void changeHitPoints (int val) {
		hitPoints_ += val;
		if (hitPoints_ <= 0)
			isDead_ = true;
	}

	void move(Direction dir) {
		switch (dir) {
			case NORTH:
				y_--;
				break;
			case SOUTH:
				y_++;
				break;
			case WEST:
				x_--;
				break;
			case EAST:
				x_++;
				break;
		}
	}
};

#endif