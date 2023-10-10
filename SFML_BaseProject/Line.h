#pragma once
#include "EngineObject.h"

class Line : public EngineObject
{
	Vertex* points = new Vertex[2];
public:
	Line(const FVector& _from, const FVector& _to, const Color _color = Color::White);
	~Line();
	virtual void Draw(RenderWindow& _window) override;
};

