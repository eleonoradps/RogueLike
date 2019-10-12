#pragma once


class HealthPotion
{
public:
	HealthPotion(const int get_LifePoints);
	~HealthPotion() {};

	void Print() const;

	void DrinkPotion(Player player);
	void PickUpPotion(Player player);

	int get_HealthPotion = 5;
	int playerInput;
};