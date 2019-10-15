#include <iostream>
#include "potion.h"
#include "player.h"

void Potion::DrinkPotion(Player playerHealth)
{
	playerHealth += healthPotion; // à revoir
}

//void Potion::PickUpPotion(Player player)
//{
//	if (playerInput == 2)
//	{
//		std::cout << "You picked up one healing potion. \n";
//	}
//}

void Player::PlayerHealth()
{
	int playerInput;
	char map_potion = 'P';


	std::cout << "To drink healing potion, press [1] \n";
	// std::cout << "To pick up healing potion, press [2] \n";
	std::cin >> playerInput;


	if (playerInput == 1)
	{
		std::cout << "You drank a healing potion. \n";
		Player::playerHealth = Player::playerHealth + Potion::healthPotion; // à revoir
	}

	/*else if (playerInput == 2)
	{
		std::cout << Potion::PickUpPotion << "You picked up a potion. \n";
	}*/

	//switch (playerInput)
	//{
	//case 1:
	//	Potion::healthPotion; // à revoir
	//	std::cout << Potion::DrinkPotion; // à revoir
	//
	//case 2:
	//	Potion::PickUpPotion; // à revoir
	//	std::cout << pickUpPotion;
	//}

}


