#include "Content.h"
#include "ViewPort.h"
#include "Player.h"
#include "ScoreItem.h"
#include <iostream>

Content::Content(RenderWindow* _render)
{
	player1 = new Player(FVector(50, 50), colorPlayer1);
	player2 = new Player(FVector(ViewPort::Width - 50, ViewPort::Height - 120), colorPlayer2);

	ball = new Ball(FVector(ViewPort::Width / 2, ViewPort::Height / 2), Color::Yellow);

	line = new Line(FVector(ViewPort::Width / 2, 0), FVector(ViewPort::Width / 2, ViewPort::Height));

	score1 = new Score(FVector(300, 25), 0, 35, colorPlayer1);
	score2 = new Score(FVector(450, 25), 0, 35, colorPlayer2);

	engineObjects.push_back(player1);
	engineObjects.push_back(player2);
	engineObjects.push_back(score1);
	engineObjects.push_back(score2);
	engineObjects.push_back(ball);
	engineObjects.push_back(line);

	engineObjects.push_back(new ScoreItem(player1, score1, 10));
	engineObjects.push_back(new ScoreItem(player2, score2, 10));
}

Content::~Content()
{
	for (EngineObject* _obj : engineObjects)
		delete _obj;
}

void Content::ContentTick()
{
	if (Keyboard::isKeyPressed(Keyboard::Key::Space))
		ball->SetPlaying(true);
	if (ball->GetPlaying()) // TODO condition de win
	{
		player1->Move(Keyboard::Key::Z, Keyboard::Key::S);
		player2->Move(Keyboard::Key::Up, Keyboard::Key::Down);
		ball->Move(4);
		if (!ball->IsBorder())
		{
			score1->SetCurrentScore(1);
			std::cout << score1->GetCurrentScore() << std::endl;
		}
	}

	ball->Bounce();
}
