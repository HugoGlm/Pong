#pragma once
#include "EngineObject.h"
#include "ScoreItem.h"

class Ball : public EngineObject
{
	CircleShape ball;
	bool playing = false;
	ScoreItem* score;
public:
	Ball(const FVector& _position, const Color _color = Color::White);
	~Ball();
	void Move(const float& _speed = 1.f);
	void Bounce();
	void SetPlaying(bool _playing);
	bool GetPlaying();
	bool IsBorder();
	virtual void Draw(RenderWindow& _window);
};

