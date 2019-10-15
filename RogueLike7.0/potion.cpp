#include <iostream>
#include "potion.h"
#include "player.h"
#include "position.h"

void Potion::DrinkPotion(Player* playerHealth)
{
	playerHealth->playerHealth += healthPotion; // � revoir
}

//void Potion::PickUpPotion(Player player)
//{
//	if (playerInput == 2)
//	{
//		std::cout << "You picked up one healing potion. \n";
//	}
//}




