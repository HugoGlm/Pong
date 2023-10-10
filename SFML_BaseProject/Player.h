#pragma once
#include "EngineObject.h"
#include "ActionEvent.h"

class Player : public EngineObject
{
	RectangleShape rect;
public:
	Player(const FVector& _position, const Color _color = Color::White);
	~Player();
	void Move(const Keyboard::Key& _up, const Keyboard::Key& _down);
	virtual void Draw(RenderWindow& _window);
};

