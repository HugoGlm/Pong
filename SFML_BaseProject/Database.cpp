#include "Database.h"
#include <iostream>

Database::Database()
{
	LoadDatabase();
}

Database::~Database()
{
}

void Database::LoadDatabase()
{
	if (!font.loadFromFile("font.ttf"))
		std::cout << "NO FONT lOADED !" << std::endl;
}
