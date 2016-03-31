#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>

#include "map.h"
#include "character.h"

Vec getInput() {
	while (1) { 
		char c; 
		// TODO(luciano): Make this right
		scanf (" %c", &c);
		switch (c) {
			case 'w':
				return NORTH;
			case 's':
				return SOUTH;
			case 'a':
				return WEST;
			case 'd':
				return EAST;
			default:
				return getInput();
		}
	}
}

int main() {
	Character character2 (4,4);
	Character character(5,5);
	Map map(character);
	while (1) {
		system("clear");
		map.print();
		Vec dir = getInput();
		map.moveCharacter(dir);
	}

	
	
	return 0;
}
