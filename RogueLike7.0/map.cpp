#include "map.h"
#include <iostream>

#include <random>
#include <ctime>

Map::Map()
{ 
	std::default_random_engine generator(time(NULL));
	const std::uniform_int_distribution<int> distribution(0, LENGTH - 1);

	int i = 0;
	for (auto& tile : tiles_)
	{
		auto diceRoll = distribution(generator);
		tile = static_cast<Tile>(diceRoll);

		if (IsFree(tile))
		{
			freeTiles_.push_back(i);
		}
		i++;
	}
}

Map::Map(std::vector<std::vector<short>> tiles)
{
	tiles_.resize(tiles.size() * tiles[0].size());
	
	for(auto y = 0; y < tiles.size(); y++)
	{
		for (auto x = 0; x < tiles[y].size(); x++)
		{
			tiles_[Pos2Index(x, y)] = static_cast<Tile>(tiles[y][x]);

			if(IsFree(x, y))
			{
				freeTiles_.push_back(Pos2Index(x, y));
			}
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
	if(freeTiles_.empty())
	{
		return wrong_position;
	}
	
	std::default_random_engine generator(time(NULL));
	const std::uniform_int_distribution<int> distribution(0, freeTiles_.size() - 1);
	const auto indexFreeTile = distribution(generator);
	const auto pos = Index2Pos(freeTiles_[indexFreeTile]);

	//Remove free tile
	std::vector<int> newFreeTiles;
	newFreeTiles.reserve(freeTiles_.size() - 1);
	for(auto i = 0; i < freeTiles_.size(); i++)
	{
		if(i != indexFreeTile)
		{
			newFreeTiles.push_back(freeTiles_[i]);
		}else
		{
			tiles_[freeTiles_[i]] = WALL;
		}
	}
	freeTiles_.clear();
	freeTiles_.assign(newFreeTiles.begin(), newFreeTiles.end());
	
	return pos;
}

bool Map::IsFree(const Position pos) const
{
	return tiles_[Pos2Index(pos)] == GROUND;
}

bool Map::IsFree(Position& pos) const
{
	return tiles_[Pos2Index(pos)] == GROUND;
}

bool Map::IsFree(const int x, const int y) const
{
	return IsFree(Position{ x, y });
}

bool Map::IsFree(const Tile tile) const
{
	return tile == GROUND;
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
