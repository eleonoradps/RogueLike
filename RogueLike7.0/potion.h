#pragma once


class HealthPotion //Normalement une classe devrait avoir le m�me nom qu'une potion
{
public:
	HealthPotion(const int get_LifePoints); //Pas de d�finition
	~HealthPotion() {};

	void Print() const; //Pas de d�finition

	void DrinkPotion(Player player);
	void PickUpPotion(Player player);

	int get_HealthPotion = 5; //Mauvaise nomeclature de variable et mauvais nom de variable
	int playerInput;

	//Il manque une position du coup je peux pas l'afficher sur la map
};