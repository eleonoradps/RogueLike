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

void PlayerHealth() //Cette fonction appartient � rien du tout.
{
	int get_HealthPotion = 5; //Mauvaise nomenclature de nom de variable, mauvais nom de variable
	int playerHealth = 30;
	int pickUpPotion;
	int playerInput;
	int remainingPlayerHealth;
	char map_potion = '�'; //Mauvaise nomenclatire de nom de variable


	std::cout << "To select healing potion, press [1] \n";
	std::cout << "To pick up healing potion, press [2] \n";
	std::cin >> playerInput;


	if (playerInput == 1)
	{
		std::cout << "You selected a healing potion. \n";
		playerHealth = playerHealth + get_HealthPotion; //Devrait pas �tre get_HealthPotion mais devrait �tre la valeur enregistr�e dans la potion
	}
	else if (playerInput == 2)
	{
		pickUpPotion; //Il se passe rien du tout, parce que l� c'est juste une variable sur la quelle tu fais rien
		std::cout << "You picked up a potion. \n";
	}

	switch (playerInput)
	{
	case 1:
		HealthPotion::DrinkPotion; //Tu acc�des � une fonction qui n'est pas en static, du coup il faut acc�der � cette fonction depuis une instance mais pas depuis la classe
		std::cout << HealthPotion::DrinkPotion; //Tu essaie d'afficher la valeur de la fonction d'une classe alors qu'elle est pas static, je sais m�me pas ce qu'il doit se passer si tu essaies de faire �a
	
	case 2:
		HealthPotion::PickUpPotion; //Tu acc�des � une fonction qui n'est pas en static, du coup il faut acc�der � cette fonction depuis une instance mais pas depuis la classe
		std::cout << pickUpPotion; 
	}

	std::cout << '�'; // ?

}


