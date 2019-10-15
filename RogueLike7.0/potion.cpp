#include <iostream>
#include "potion.h"
#include "player.h"
#include "position.h"

Potion::Potion(const Position position)
{
	m_PotionPosition = position;
}

//void Potion::DrinkPotion(Player* playerHealth)
//{
//	playerHealth->playerHealth += healthPotion; // � revoir
//}

Position Potion::GetPosition() const
{
	return m_PotionPosition;
}

//void Potion::PickUpPotion(Player player)
//{
//	if (playerInput == 2)
//	{
//		std::cout << "You picked up one healing potion. \n";
//	}
//}




