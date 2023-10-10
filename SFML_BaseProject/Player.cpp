#include "Player.h"

Player::Player(const FVector& _position, const Color _color)
{
	rect = RectangleShape(FVector(10, 70));
	rect.setPosition(_position);
	rect.setFillColor(_color);
}

Player::~Player()
{
}

void Player::Move(const Keyboard::Key& _up, const Keyboard::Key& _down)
{
	if (Keyboard::isKeyPressed(_up))
		rect.setPosition(FVector(rect.getPosition() + FVector(0, 1)));
	if (Keyboard::isKeyPressed(_down))
		rect.setPosition(FVector(rect.getPosition() + FVector(0, -1)));
}

void Player::Draw(RenderWindow& _window)
{
	_window.draw(rect);
}
