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

	for (int i = 0; i < 100; i++)
	{
		player.MoveSet();
		
		system("cls");
		map.Print();
	}
}

