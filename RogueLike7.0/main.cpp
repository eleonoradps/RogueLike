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

	for (int i = 0; i < 100; i++)
	{
		player.MoveSet(&map);
		
		system("cls");
		map.Print();
	}
}

