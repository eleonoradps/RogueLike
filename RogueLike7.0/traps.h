#pragma once

class Traps //Une classe devrait avoir un nom au singulier
{
public:
	Traps(const int trapsDamage); //Pas de définition pour le constructeur
	~Traps() {};

	int trapsDamage = 5;
};