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

private:
	Position m_PlayerPosition{ 0, 0 };
};
