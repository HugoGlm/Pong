#include "Square.h"

Square::Square(Vector2f _position, const int& _size, Color _color, const bool& _fillSquare)
{
	square = CircleShape(_size, 4);
	square.setPosition(_position);
	square.setOutlineColor(_color);
	square.setOutlineThickness(1);
	square.setFillColor(_fillSquare ? _color : Color::Transparent);
	square.setRotation(45);
}

Square::~Square()
{
	
}

void Square::Draw(RenderWindow& _window)
{
	_window.draw(square);
}
