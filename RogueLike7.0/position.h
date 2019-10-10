#pragma once

struct Position
{
	int x;
	int y;

	void Print() {
		std::cout << "(" << x << ", " << y << ")\n";
	}

};

static Position wrong_position{ -1, -1 };