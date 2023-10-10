#include "Line.h"

Line::Line(const FVector& _from, const FVector& _to, const Color _color)
{
	points[0] = Vertex(_from, _color);
	points[1] = Vertex(_to, _color);
}

Line::~Line()
{
	delete[] points;
}

void Line::Draw(RenderWindow& _window)
{
	_window.draw(points, 2, Lines);
}
