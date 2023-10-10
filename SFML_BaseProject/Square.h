#pragma once
#include "EngineObject.h"

class Square : public EngineObject
{
	CircleShape square;
public:
	Square(Vector2f _position, const int& _size, Color _color = Color::White, const bool& _fillSquare = true);
	~Square();
	virtual void Draw(RenderWindow& _window) override;
};

