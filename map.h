#ifndef MAP_H
#define MAP_H

#include <iostream>

#include "character.h"

const int MAP_MAX_WIDTH = 100;
const int MAP_MAX_HEIGHT = 40;

class Map {
private:
	char terrain_[MAP_MAX_HEIGHT][MAP_MAX_WIDTH];
	Entity& entity_;
public:
	Map(Entity& entity) : entity_(entity)
	{
		entity_.setPosition(50, 20);

		for (int i = 0; i < MAP_MAX_HEIGHT; ++i) {
			for (int j = 0; j < MAP_MAX_WIDTH; ++j) {
				terrain_[i][j] = ' ';
			}
		}

		for (int i = 0; i < MAP_MAX_WIDTH; ++i) {
			terrain_[0][i] = '#';
			terrain_[MAP_MAX_HEIGHT-1][i] = '#';
		}

		for (int i = 0; i < MAP_MAX_HEIGHT; ++i) {
			terrain_[i][0] = '#';
			terrain_[i][MAP_MAX_WIDTH-1] = '#';
		}
	}

	void print() {
		for (int y = 0; y < MAP_MAX_HEIGHT; ++y) {
			for (int x = 0; x < MAP_MAX_WIDTH; ++x) {
				if ((x == entity_.getPos().x) && (y == entity_.getPos().y))
					std::cout << entity_.getSymbol();
				else	
					std::cout << terrain_[y][x];
			}
			std::cout << std::endl;
		}
	}

	void moveCharacter (Vec dir) {
		Vec dest = entity_.getPos();
		dest.x += dir.x;
		dest.y += dir.y;
		if (terrain_[dest.y][dest.x] == ' ')
			entity_.move(dir);
	}
};

#endif
