#pragma once
#include "EngineObject.h"
#include <string>

class ScoreItem;

class Score : public EngineObject
{
private:
	int currentScore = 0,
		scoreSize = 10;
	sf::Color scoreColor;
	sf::Text label;

	ScoreItem* scoreItem;
public:
	Score(const sf::Vector2f& _position, const int& _currentScore, const int& _scoreSize, const sf::Color& _scoreColor);
	~Score();
	int GetCurrentScore();
	void SetCurrentScore(int _score);
	virtual void Draw(RenderWindow& _window) override;
	bool GetGameWin();
};

