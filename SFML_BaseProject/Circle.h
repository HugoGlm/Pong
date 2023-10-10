#pragma once
#include "EngineObject.h"

class Circle : public EngineObject
{
	CircleShape circle;
public:
	Circle(Vector2f _position, const int& _radius, Color _color, const bool& _fillSquare);
	~Circle();
	virtual void Draw(RenderWindow& _window) override;
};

