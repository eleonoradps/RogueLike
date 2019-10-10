#include <iostream>
#include "player.h"
#include "position.h"


Player::Player()
{
	m_PlayerPosition.x = 0;
	m_PlayerPosition.y = 0;
}

void Player::MoveSet()
{
	char key;
	char main_char = '@';
	bool move = true;

	MoveDirection direction = MoveDirection::DOWN;

	MoveResult moveResult = MoveResult::OK;

	std::cin >> key;

	switch (key)
	{
	case 'w':
		direction = MoveDirection::UP;
		break;

	case 'a':
		direction = MoveDirection::LEFT;
		break;

	case 's':
		direction = MoveDirection::DOWN;
		break;

	case 'd':
		direction = MoveDirection::RIGHT;
		break;
	default: 
		direction = MoveDirection::UP;
	}

	//TODO rajouter le IsFree() de la map une fois le merge fait

	switch (moveResult)
	{
	case MoveResult::CANNOT_MOVE_FURTHER:
		move = false;
		std::cout << "You cannot move further. \n Go back. \n";
		break;

	case MoveResult::COLLISION:
		move = false;
		std::cout << "Collision. \n You can't get through. \n";
		break;
	}

	if (!move) {
		return;
	}

	switch (direction) {
	case MoveDirection::DOWN: 
		m_PlayerPosition.y += 1;//TODO
		break;
	
	case MoveDirection::UP: 
		m_PlayerPosition.y -= 1; //TODO
		break;
	
	case MoveDirection::LEFT: 
		m_PlayerPosition.x -= 1; //TODO
		break;
	
	case MoveDirection::RIGHT: 
		m_PlayerPosition.x += 1; //TODO
		break;
	
	}

	m_PlayerPosition.Print();


	//TODO afficher la nouvelle position ici
}

Position Player::GetPosition() const
{
	return m_PlayerPosition;
}

