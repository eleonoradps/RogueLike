#pragma once

class Enemy
{
public:
	Enemy(const int damage);
	~Enemy() {};

	int enemyDamage = 4;
	int enemyHealth = 20;

	void CombatSystem(Player player);

private:
	//Il manque une position du coup je peux pas l'afficher dans la map
};