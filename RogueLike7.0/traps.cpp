#include <iostream>
#include "traps.h"
#include "player.h"

void Trap::MapTraps() // nico met dans map stp
{
	char map_trap = 'T';

	if (Player == 'T') // à revoir
	{
		Player::playerHealth = Player::playerHealth - trapsDamage;
		std::cout << "You walked on a trap! \n" << " You lost 5 Health Points. \n";
	}

}

