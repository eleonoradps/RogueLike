#include <iostream>
#include "traps.h"
#include "player.h"

void MapTraps() //Appartient pas à la classe Traps
{
	char map_trap = 'T';
	Player player; //Tu crées ici un nouveau player qui n'est pas le "vrai", il faudrait le recevoir en paramètre

	if (Player::MoveSet = 'T') //Tu essaie d'accéder à une fonction d'une classe, mais cette fonction appartient à l'instance player. Ensuite tu fais un = et pas un == du coup tu essaie d'assigner une valeur à une fonction ce qui n'est pas possible
	{
		player.playerHealth = player.playerHealth - trapsDamage; //Il reconnait pas trapsDamage puisque cette fonction appartient à rien du tout
		std::cout << "You walked on a trap! \n" << map_trap << " You lost 5 Health Points. \n";
	}

}

