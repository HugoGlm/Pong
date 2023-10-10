#pragma once
#include "EngineObject.h"

class Triangle : public EngineObject
{
	Vertex* lines;
public:
	Triangle(const FVector& _a, const FVector& _b, const FVector& _c, const Color& _color = Color::White);
	~Triangle();
	virtual void Draw(RenderWindow& _window) override;
};

