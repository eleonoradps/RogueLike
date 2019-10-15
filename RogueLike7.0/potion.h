#pragma once
#include "player.h"


class Potion
{
public:
	Potion();
	~Potion() {};
	int healthPotion = 5;

	void Print();

	void DrinkPotion(Player player);
	// void PickUpPotion(Player player);

	int playerInput;

	//ajouter position potion pour la map
};