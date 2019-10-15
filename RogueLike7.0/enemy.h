#pragma once
#include "player.h"
#include "position.h"

class Enemy
{
public:
	Enemy(const int damage);
	~Enemy() {};

	int enemyDamage = 4;
	int enemyHealth = 20;

	void CombatSystem(Player player); //Tu as oubli� d'include player

private:
	// ajouter position pour afficher dans la map
	Position m_EnemyPosition{ 0, 0 };
};