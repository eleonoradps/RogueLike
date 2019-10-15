#pragma once
#include "player.h"
#include "position.h"

class Player;

class Potion
{
public:
	Potion(){};
	Potion(Position position);;
	~Potion() {};
	int healthPotion = 5;

	void Print();

	void DrinkPotion(Player* player);
	// void PickUpPotion(Player player);

	int playerInput{};

	Position GetPosition() const;;

private:
	Position m_PotionPosition{ 0, 0 };
};