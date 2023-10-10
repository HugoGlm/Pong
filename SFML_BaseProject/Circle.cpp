#include "Circle.h"

Circle::Circle(Vector2f _position, const int& _radius, Color _color, const bool& _fillSquare)
{
	circle = CircleShape(_radius);
	circle.setPosition(_position);
	circle.setOutlineColor(_color);
	circle.setOutlineThickness(1);
	circle.setFillColor(_fillSquare ? _color : Color::Transparent);
}

Circle::~Circle()
{

}

void Circle::Draw(RenderWindow& _window)
{
	_window.draw(circle);
}
