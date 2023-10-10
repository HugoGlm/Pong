#include "Ball.h"
#include "Player.h"
#include "ViewPort.h"

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
	if (IsBorder())
		ball.setPosition(FVector(ball.getPosition().x - (_speed / 100), ball.getPosition().y));
	else
	{
		ball.setPosition(FVector(ViewPort::Width / 2, ViewPort::Height / 2));
		SetPlaying(false);
	}
}

void Ball::Bounce()
{
	
}

void Ball::SetPlaying(bool _playing)
{
	playing = _playing;
}

bool Ball::GetPlaying()
{
	return playing;
}

bool Ball::IsBorder()
{
	return ball.getPosition().x > 10 && ball.getPosition().x < ViewPort::Width - 10;
}

void Ball::Draw(RenderWindow& _window)
{
	_window.draw(ball);
}
