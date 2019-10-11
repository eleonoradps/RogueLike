#include <iostream>
#include "potion.h"
#include "player.h"

void DrinkPotion(int PlayerInput)
{
	if (PlayerInput == 1) {
		std::cout << "You drank one healing potion. \n";
	}
}

void PickUpPotion(int PlayerInput)
{
	if (PlayerInput == 2)
	{
		std::cout << "You picked up one healing potion. \n";
	}
}

void PlayerHealth() 
{
	int GetHealthPotion = 5;
	int PlayerHealth = 30;
	int PickUpPotion;
	int PlayerInput;
	int RemainingPlayerHealth;
	char map_potion = '°';


	std::cout << "To select healing potion, press [1] \n";
	std::cout << "To pick up healing potion, press [2] \n";
	std::cin >> PlayerInput;


	if (PlayerInput == 1)
	{
		std::cout << "You selected a healing potion. \n";
		PlayerHealth = PlayerHealth + GetHealthPotion;
	}
	else if (PlayerInput == 2)
	{
		PickUpPotion;
		std::cout << "You picked up a potion. \n";
	}

	switch (PlayerInput)
	{
	case 1:
		HealthPotion::DrinkPotion;
		std::cout << DrinkPotion;
	
	case 2:
		HealthPotion::PickUpPotion;
		std::cout << PickUpPotion;
	}

	std::cout << '°';

}


