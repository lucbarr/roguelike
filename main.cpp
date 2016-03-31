#include <iostream>
#include <cstdio>

#include "map.h"
#include "character.h"

Direction getInput() {
	while (1) {
		char c;
		c = std::getchar();
		std::getchar();
		switch (c) {
			case 'n':
				return NORTH;
			case 's':
				return SOUTH;
			case 'w':
				return WEST;
			case 'e':
				return EAST;
			default:
				break;
		}
	}
}

int main() {
	Character character(5,5);
	while (1) {
		Direction dir = getInput();
		character.move(dir);

		std::cout << "XY: " << character.getX() << ", " << character.getY() << std::endl;  
	}

	/*
	Map map;
	map.print();
	*/
	return 0;
}
