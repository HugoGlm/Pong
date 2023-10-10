#pragma once
#include "EngineObject.h"
#include "ShapeCore.h"

class Ball : public EngineObject
{
	Circle ball;
public:
	Ball();
	~Ball();
	virtual void Draw(RenderWindow& _window);
};

