#include "Score.h"
#include "Database.h"

Score::Score(const sf::Vector2f& _position, const int& _currentScore, const int& _scoreSize, const sf::Color& _scoreColor)
{
	scoreSize = _currentScore;
	scoreColor = _scoreColor;

	label = sf::Text(std::to_string(_currentScore), Database::font);
	label.setPosition(_position);
	label.setCharacterSize(_scoreSize);
	label.setFillColor(_scoreColor);
}

Score::~Score()
{
}

void Score::Draw(RenderWindow& _window)
{
	_window.draw(label);
}
