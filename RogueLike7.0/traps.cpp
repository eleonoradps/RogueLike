#include <iostream>
#include "traps.h"
#include "player.h"

void MapTraps()
{
	char map_trap = 'T';

	if (Player == 'T') // à revoir
	{
		Player::playerHealth = Player::playerHealth - Trap::trapsDamage;
		std::cout << "You walked on a trap! \n" << map_trap << " You lost 5 Health Points. \n";
	}

}

