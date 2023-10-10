#include "CircleVertex.h"

#define PI 3.14159265359
#define TORAD PI/180

CircleVertex::CircleVertex(const FVector& _position, const float& _radius, const int& _definition, const Color& _color)
{
	definition = _definition;
	circle = new Vertex[_definition + 1];
	for (size_t i = 0; i < _definition + 1; i++)
	{
		const float _part = ((float)i / _definition) * 360,
			_x = cos(_part * TORAD) * _radius,
			_y = sin(_part * TORAD) * _radius;
		circle[i] = Vertex(FVector(_x, _y) + _position, _color);

		//x = cos(deg -> to rad) * radius;
		//y = sin(deg -> to rad) * radius;
		//a[i] = vector(x, y) + _position;
	}
}

CircleVertex::~CircleVertex()
{
	delete[] circle;
}

void CircleVertex::Draw(RenderWindow& _window)
{
	_window.draw(circle, definition + 1, LinesStrip);
}
