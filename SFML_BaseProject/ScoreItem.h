#pragma once
#include "EngineObject.h"
#include "Player.h"
#include "Score.h"

class ScoreItem : public EngineObject
{
	Player* player = nullptr;
	Score* score = nullptr;
	int scoreMax = 10;
public:
	ScoreItem(Player* _player, Score* _score, const int& _scoreMax);
	~ScoreItem();

	bool IsScoreMax();
	int GetScore();
	bool GameWin();
	virtual void Draw(RenderWindow& _window) override;
};

