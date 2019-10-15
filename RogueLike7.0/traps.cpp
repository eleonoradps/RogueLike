#include <iostream>
#include "traps.h"
#include "player.h"

void MapTraps() //Appartient pas � la classe Traps
{
	char map_trap = 'T';

	if (Player == 'T') // � revoir
	{
		Player::playerHealth = Player::playerHealth - Trap::trapsDamage;
		std::cout << "You walked on a trap! \n" << map_trap << " You lost 5 Health Points. \n";
	}

}

