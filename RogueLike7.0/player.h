#pragma once
#include "position.h"

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
	int PlayerHealth = 30;

	void CheckInput(); //regarde les inputs de l'utilisateur


private:
	//Ajouter la vie (variable)
	Position m_PlayerPosition{ 0, 0 };
	MoveDirection direction;

};
