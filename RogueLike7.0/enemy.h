#pragma once
#include "player.h"

class Enemy
{
public:
	Enemy(const int damage);
	~Enemy() {};

	int enemyDamage = 4;
	int enemyHealth = 20;

	void CombatSystem(Player player);

private:

	// ajouter position pour afficher dans la map
};