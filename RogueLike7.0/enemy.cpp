#include <iostream>
#include "enemy.h"
#include "player.h"
#include "position.h"

Enemy::Enemy(const int damage, const Position pos)
{
	enemyDamage = damage;
	m_EnemyPosition = pos;
}

bool Enemy::CombatSystem(Player* player)
{
	int hitEnemy;
	int Y = 1;
	int N = 2;

	std::cout << "COMBAT\n";
	
	while ((player->playerHealth <= 0) && (enemyHealth <= 0))
	{
		std::cout << "Hit the enemy ? \n Press Y for Yes or N for No. \n";
		std::cin >> hitEnemy;

		if (hitEnemy == Y)
		{
			enemyHealth = enemyHealth - player->playerDamage;
			std::cout << "Your enemy has now " << enemyHealth << " health points left. \n";

			if (enemyHealth <= 0)
			{
				std::cout << "Congratulations you successfully killed the enemy. \n";
				break;
			}
		}
		else if (enemyHealth > 0)
		{
			std::cout << "It is now the enemy's turn. \n";
			player->playerHealth = player->playerHealth - enemyDamage;
			std::cout << "You have now " << player->playerHealth << " health points left. \n";
		}
		/*else if (hitEnemy == N)
		{
			std::cout << "The enemy attacks you first instead. \n";
			player->playerHealth = player->playerHealth - enemyDamage;
			std::cout << "You have now " << player->playerHealth << " health points left. \n";
		}*/
	
	}
	//si joueur meurt return false
	if (player->playerHealth <= 0)
	{
		std::cout << "You were killed by your opponent. \n You lost. \n";
		return false;
	}
	//si enemi meur return true;
	if (enemyHealth <= 0)
	{
		std::cout << "You killed your opponent! \n You won! \n";
		return true;
	}
}

Position Enemy::GetPosition() const
{
	return m_EnemyPosition;
}
