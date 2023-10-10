#pragma once
#include "Core.h"
#include "Database.h"
#include "ActionEvent.h"

class GameEngine
{
	Database* database = nullptr;
	ViewPort* viewport = nullptr;
	Content* gameContent = nullptr;
	vector<EngineObject*> engineObjects;
	Action engineEvent;
	//2	- RessourcesManager class
	
public:
	GameEngine();
	GameEngine(const string& _title, const int& _width, const int& _height);
	~GameEngine();

	void RunEngine();
	void StopEngine();

	void TestEvent();
};

