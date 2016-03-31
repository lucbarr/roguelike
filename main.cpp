#include <iostream>
#include <cstdio>
#include <cstdlib>

#include "map.h"
#include "character.h"

Direction getInput() {
	while (1) { 
		char c; 
		// TODO(luciano): Make this right
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
	Map map(character);
	while (1) {
		system("clear");
		map.print();
		Direction dir = getInput();
		character.move(dir);
	}

	
	
	return 0;
}
