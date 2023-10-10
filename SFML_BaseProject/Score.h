#pragma once
#include "EngineObject.h"
#include <string>

class Score : public EngineObject
{
private:
	int currentScore = 0,
		scoreSize = 10;
	sf::Color scoreColor;
	sf::Text label;
public:
	Score(const sf::Vector2f& _position, const int& _currentScore, const int& _scoreSize, const sf::Color& _scoreColor);
	~Score();
	virtual void Draw(RenderWindow& _window) override;


};

