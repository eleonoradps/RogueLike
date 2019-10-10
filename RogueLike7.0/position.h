#pragma once
#include <iostream>

struct Position
{
	int x;
	int y;

	void Print() const
	{
		std::cout << "(" << x << ", " << y << ")\n";
	}
};

static Position wrong_position{ -1, -1 };