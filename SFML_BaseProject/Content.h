#pragma once
#include <vector>
#include "EngineObject.h"
#include "ShapeCore.h"
#include "Player.h"
#include "Ball.h"

using namespace std;
class Content
{
	vector<EngineObject*> engineObjects;
	Button* makeTriangleButton = nullptr, 
		*makeCircleButton = nullptr, 
		*makeSquareButton = nullptr;

	Triangle* triangle = nullptr;
	Circle* circle = nullptr;
	Square* square = nullptr;

	Player* player1 = nullptr;
	Player* player2 = nullptr;

	Ball* ball = nullptr;

	Line* line = nullptr;

public:
	inline vector<EngineObject*> Get() const { return engineObjects; }
	Content(RenderWindow* _render);
	~Content();
	void ContentTick();
	void MakeTriangle();
	void MakeCircle();
	void MakeSquare();
};

