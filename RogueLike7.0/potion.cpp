#include <iostream>
#include "potion.h"
#include "player.h"

void HealthPotion::DrinkPotion(Player player)
{
	int playerInput;
	if (playerInput == 1) {
		std::cout << "You drank one healing potion. \n";
	}
}

void HealthPotion::PickUpPotion(Player player)
{
	if (playerInput == 2)
	{
		std::cout << "You picked up one healing potion. \n";
	}
}

void PlayerHealth() 
{
	int get_HealthPotion = 5;
	int playerHealth = 30;
	int pickUpPotion;
	int playerInput;
	int remainingPlayerHealth;
	char map_potion = '°';


	std::cout << "To select healing potion, press [1] \n";
	std::cout << "To pick up healing potion, press [2] \n";
	std::cin >> playerInput;


	if (playerInput == 1)
	{
		std::cout << "You selected a healing potion. \n";
		playerHealth = playerHealth + get_HealthPotion;
	}
	else if (playerInput == 2)
	{
		pickUpPotion;
		std::cout << "You picked up a potion. \n";
	}

	switch (playerInput)
	{
	case 1:
		HealthPotion::DrinkPotion;
		std::cout << HealthPotion::DrinkPotion;
	
	case 2:
		HealthPotion::PickUpPotion;
		std::cout << pickUpPotion;
	}

	std::cout << '°';

}


