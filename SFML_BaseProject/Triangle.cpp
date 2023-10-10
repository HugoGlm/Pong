#include "Triangle.h"

Triangle::Triangle(const FVector& _a, const FVector& _b, const FVector& _c, const Color& _color)
{
	lines = new Vertex[6]
	{
		Vertex(_a, _color),
		Vertex(_b, _color),
		Vertex(_b, _color),
		Vertex(_c, _color),
		Vertex(_c, _color),
		Vertex(_a, _color)
	};
}

Triangle::~Triangle()
{
	delete[] lines;
}

void Triangle::Draw(RenderWindow& _window)
{
	_window.draw(lines, 6, Lines);
}
