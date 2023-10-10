#pragma once
#include "EngineObject.h"

class CircleVertex : public EngineObject
{
	Vertex* circle;
	int definition = 30;
public:
	CircleVertex(const FVector& _position, const float& _radius, const int& _definition, const Color& _color);
	~CircleVertex();
	virtual void Draw(RenderWindow& _window) override;
};

