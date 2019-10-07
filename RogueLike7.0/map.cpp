#include "map.h"
#include <iostream>

#include <random>
#include <ctime>

Map::Map()
{
	std::default_random_engine generator(time(NULL));
	const std::uniform_int_distribution<int> distribution(0, LENGTH - 1);
	for (auto& tile : tiles_)
	{
		auto diceRoll = distribution(generator);
		tile = static_cast<Tile>(diceRoll);
	}
}

Map::Map(std::vector<std::vector<int>> tiles)
{
	tiles_.resize(tiles.size() * tiles[0].size());
	
	for(auto y = 0; y < tiles.size(); y++)
	{
		for (auto x = 0; x < tiles[y].size(); x++)
		{
			tiles_[Pos2Index(x, y)] = static_cast<Tile>(tiles[y][x]);
		}
	}
}

Map::~Map() {}

void Map::Print()
{
	auto line = 1;
	for (auto& tile : tiles_)
	{
		std::cout << TileToChar(tile);
		if(line % sizeX_ == 0)
		{
			std::cout << "\n";
		}
		
		line++;
	}
}

Position Map::GetRandomPosition()
{
	const Position pos{0, 0}; //TODO faire la génération random de position libre

	return pos;
}

bool Map::IsFree(Position& pos) const
{
	return tiles_[Pos2Index(pos)] == GROUND;
}

Position Map::Index2Pos(const int index) const
{
	return Position{index % sizeX_, index / sizeX_};
}

int Map::Pos2Index(const Position pos) const
{
	return pos.y * sizeX_ + pos.x;
}

int Map::Pos2Index(const int x, const int y) const
{
	return y * sizeX_ + x;
}

char Map::TileToChar(const Tile tile)
{
	auto c = ' ';
	switch (tile)
	{
	case WALL:
	{
		c = '|';
		break;
	}
	case GROUND:
	{
		c = ' ';
		break;
	}
	default:
	{
		c = 'O';
	}
	}

	return c;
}
