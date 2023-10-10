#include "GameEngine.h"

GameEngine::GameEngine()
{
	database = new Database();
	viewport = new ViewPort();
	gameContent = new Content(viewport->GetWindow());
}

GameEngine::GameEngine(const string& _title, const int& _width, const int& _height)
{
	database = new Database();
	viewport = new ViewPort(_title, _width, _height);
	gameContent = new Content(viewport->GetWindow());
}

GameEngine::~GameEngine()
{
	delete viewport, gameContent, database;
}

void GameEngine::RunEngine()
{
	engineEvent.Bind(this, &GameEngine::TestEvent);
	viewport->InitAllObjects(gameContent);
	//viewport->InitAllObjects(engineObjects);
	viewport->Draw();
}

void GameEngine::StopEngine()
{
	//TODO viewport->Stop()
}

void GameEngine::TestEvent()
{
	std::cout << "Test" << std::endl;
}
