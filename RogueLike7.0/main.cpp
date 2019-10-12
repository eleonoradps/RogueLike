#include <iostream>
#include "position.h"
#include "player.h"

// ex 7.0


int main()
{
	Player player = Player();

	for (size_t i = 0; i < 10; i++)
	{
	player.MoveSet();
	}
}

