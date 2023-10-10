#pragma once
#include "EngineObject.h"
#include "Line.h"
#include <vector>

class Grid : public EngineObject
{
	std::vector<Line*> grid;
public:
	Grid(const int& _gap = 20, const Color _color = Color::White);
	~Grid();
	virtual void Draw(RenderWindow& _window) override;
};

