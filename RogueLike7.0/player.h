#pragma once
#include <vector>
#include "position.h"
#include "potion.h"

enum class MoveDirection
{
	UP,
	DOWN,
	RIGHT,
	LEFT
};

enum class MoveResult
{
	OK,
	CANNOT_MOVE_FURTHER,
	COLLISION
};


class Player
{
public:
	Player();
	void MoveSet();
	int playerHealth = 30; //Ajouter la vie (variable)
	int playerDamage = 5;

	void PlayerHealth();
	void CheckInput(); //regarde les inputs de l'utilisateur


	Position GetPosition() const;

private:
	
	Position m_PlayerPosition{ 0, 0 };
	MoveDirection direction; 
	
	// vecteur potion

	const int maxPotion = 5;
	std::vector<Potion> healthPotion;


};
