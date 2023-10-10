#pragma once
#include <vector>
#include "EngineObject.h"
#include "ShapeCore.h"
#include "Player.h"
#include "Ball.h"
#include "Score.h"


using namespace std;
class Content
{
	vector<EngineObject*> engineObjects;

	Player* player1 = nullptr;
	Player* player2 = nullptr;

	Color colorPlayer1 = Color::Red;
	Color colorPlayer2 = Color::Blue;

	Ball* ball = nullptr;

	Line* line = nullptr;

	Score* score1 = nullptr;
	Score* score2 = nullptr;

	bool isPlaying = false;
public:
	inline vector<EngineObject*> Get() const { return engineObjects; }
	Content(RenderWindow* _render);
	~Content();
	void ContentTick();
};

