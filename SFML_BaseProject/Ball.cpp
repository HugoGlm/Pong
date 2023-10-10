#include "Ball.h"
#include "Player.h"

Ball::Ball(const FVector& _position, const Color _color)
{
	ball = CircleShape(10.f);
	ball.setOrigin(10, 0);
	ball.setFillColor(_color);
	ball.setPosition(_position);
}

Ball::~Ball()
{
}

void Ball::Move(const float& _speed)
{
	ball.setPosition(FVector(ball.getPosition().x - (_speed / 100), ball.getPosition().y));
}

void Ball::Draw(RenderWindow& _window)
{
	_window.draw(ball);
}
