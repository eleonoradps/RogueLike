#include <iostream>
#include "traps.h"
#include "player.h"

void MapTraps() //Appartient pas � la classe Traps
{
	char map_trap = 'T';
	Player player; //Tu cr�es ici un nouveau player qui n'est pas le "vrai", il faudrait le recevoir en param�tre

	if (Player::MoveSet = 'T') //Tu essaie d'acc�der � une fonction d'une classe, mais cette fonction appartient � l'instance player. Ensuite tu fais un = et pas un == du coup tu essaie d'assigner une valeur � une fonction ce qui n'est pas possible
	{
		player.playerHealth = player.playerHealth - trapsDamage; //Il reconnait pas trapsDamage puisque cette fonction appartient � rien du tout
		std::cout << "You walked on a trap! \n" << map_trap << " You lost 5 Health Points. \n";
	}

}

