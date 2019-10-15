#include <iostream>
#include <vector>
#include "position.h"
#include "player.h"
#include "map.h"

void Player::MoveSet(Map* map)
{
	char key;
	bool move = true;

	MoveDirection direction = MoveDirection::DOWN;

	MoveResult moveResult = MoveResult::OK; // � revoir

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

	if (!move) 
	{
		return;
	}

	switch (direction) {
	case MoveDirection::DOWN:
		m_PlayerPosition.y += 1;
		if(!map->IsFree(m_PlayerPosition))
		{
			m_PlayerPosition.y -= 1;
		}
		break;
	
	case MoveDirection::UP: 
		m_PlayerPosition.y -= 1;
		if (!map->IsFree(m_PlayerPosition))
		{
			m_PlayerPosition.y += 1;
		}
		break;
	
	case MoveDirection::LEFT: 
		m_PlayerPosition.x -= 1;
		if (!map->IsFree(m_PlayerPosition))
		{
			m_PlayerPosition.x += 1;
		}
		break;
	
	case MoveDirection::RIGHT: 
		m_PlayerPosition.x += 1;
		if (!map->IsFree(m_PlayerPosition))
		{
			m_PlayerPosition.x -= 1;
		}
		break;
	
	}

	m_PlayerPosition.Print();
}

bool Player::PickupPotion(Potion potion)
{
	std::cout << "PICKUP POTION\n";
	//donne le choix à l'utilisateur de ramasser ou non la potion

	//si prend la potion return true

	//sinon return false

	return true;
}

void Player::PlayerHealth()
{
	// appeler vecteur potion

	if (healthPotion.empty() == true)
	{
		std::cout << "You don't have any potions. \n";
		return;
	}

	int playerInput;
	char map_potion = 'P';


	std::cout << "To drink healing potion, press [1] \n";
	// std::cout << "To pick up healing potion, press [2] \n";
	std::cin >> playerInput;



	if (playerInput == 1)
	{
		std::cout << "You drank a healing potion. \n";
		//playerHealth = playerHealth + Potion::healthPotion; // à revoir
	}

	/*else if (playerInput == 2)
	{
		std::cout << Potion::PickUpPotion << "You picked up a potion. \n";
	}*/

	//switch (playerInput)
	//{
	//case 1:
	//	Potion::healthPotion; // � revoir
	//	std::cout << Potion::DrinkPotion; // � revoir
	//
	//case 2:
	//	Potion::PickUpPotion; // � revoir
	//	std::cout << pickUpPotion;
	//}

}

Position Player::GetPosition() const
{
	return m_PlayerPosition;
}

