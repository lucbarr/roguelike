#ifndef MAP_H
#define MAP_H

#include <iostream>

const int MAP_MAX_WIDTH = 100;
const int MAP_MAX_HEIGHT = 40;

class Map {
private:
	char terrain_[MAP_MAX_HEIGHT][MAP_MAX_WIDTH];
public:
	Map()
	{
		for (int i = 0; i < MAP_MAX_HEIGHT; ++i) {
			for (int j = 0; j < MAP_MAX_WIDTH; ++j) {
				terrain_[i][j] = '.';
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
		for (int i = 0; i < MAP_MAX_HEIGHT; ++i) {
			for (int j = 0; j < MAP_MAX_WIDTH; ++j) {
				std::cout << terrain_[i][j];
			}
			std::cout << std::endl;
		}
	}
};

#endif
