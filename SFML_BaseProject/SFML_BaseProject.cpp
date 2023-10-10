#include <iostream>
#include "GameEngine.h"

int main()
{
	GameEngine* _engine = new GameEngine("P2-Exercice", 800, 600);
	_engine->RunEngine();
	//_engine->StopEngine()
	delete _engine;
}