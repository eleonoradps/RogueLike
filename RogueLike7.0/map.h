#pragma once
#include <vector>
#include "position.h"

enum Tile : short
{
	WALL,
	GROUND,
	LENGTH
};

class Map
{
public:
	Map();
	~Map();

	void Print();

	Position GetRandomPosition();

	bool IsFree(Position& pos) const;

private:
	Position Index2Pos(int index) const;
	int Pos2Index(Position pos) const;

	static char TileToChar(Tile tile);
	
	const int sizeX_ = 10;
	const int sizeY_ = 50;

	std::vector<Tile> tiles_ = std::vector<Tile>(sizeY_ * sizeX_);
	
};

