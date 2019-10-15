#include <iostream>
#include "position.h"
#include "player.h"
#include "map.h"

// ex 7.0


int main()
{
	Player player = Player();

	Map map = Map(level_0);
	map.AddPlayer(player);

	Potion p0 = Potion(map.GetRandomPosition());
	Potion p1 = Potion(map.GetRandomPosition());
	Potion p2 = Potion(map.GetRandomPosition());

	map.AddPotion(p0);
	map.AddPotion(p1);
	map.AddPotion(p2);

	Enemy e0 = Enemy(4, map.GetRandomPosition());
	Enemy e1 = Enemy(4, map.GetRandomPosition());
	Enemy e2 = Enemy(4, map.GetRandomPosition());

	map.AddEnemy(e0);
	map.AddEnemy(e1);
	map.AddEnemy(e2);

	//First print
	map.Print();
	
	for (int i = 0; i < 100; i++)
	{
		//move player
		player.MoveSet(&map);

		//Clear and draw new map
		system("cls");
		map.Print();

		map.Update();
		player.PlayerHealth();
	}
}

