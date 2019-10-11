#pragma once


class HealthPotion
{
public:
	HealthPotion(const int GetLifePoints);
	~HealthPotion() {};

	void Print() const;

	void DrinkPotion();
	void PickUpPotion();

	int GetHealthPotion = 5;

};