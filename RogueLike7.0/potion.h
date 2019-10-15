#pragma once
#include "player.h"
#include "position.h"


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

private:
	Position m_PotionPosition{ 0, 0 };
};