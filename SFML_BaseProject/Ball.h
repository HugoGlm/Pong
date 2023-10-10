#pragma once
#include "EngineObject.h"

class Ball : public EngineObject
{
	CircleShape ball;
public:
	Ball(const FVector& _position, const Color _color = Color::White);
	~Ball();
	void Move(const float& _speed = 1.f);
	virtual void Draw(RenderWindow& _window);
};

