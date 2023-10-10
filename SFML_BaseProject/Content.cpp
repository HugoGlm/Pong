#include "Content.h"
#include "ShapeCore.h"
#include "ViewPort.h"
#include "Player.h"
#include "ScoreItem.h"
#include <iostream>

Content::Content(RenderWindow* _render)
{
	
	//engineObjects.push_back(new Score(FVector(100, 200), 0, 50, Color::Red));
	/*engineObjects.push_back(new Square(FVector(100, 100), 50, Color::Red, false));
	engineObjects.push_back(new Triangle(FVector(200, 200), FVector(400, 300), FVector(300, 550), Color::Red));
	engineObjects.push_back(new Circle(FVector(300, 300), 50, Color::Red, false));
	engineObjects.push_back(new CircleVertex(FVector(250, 150), 50, 50, Color::Yellow));*/
	//triangle = new Triangle(FVector(500, 200), FVector(600, 200), FVector(500, 500), Color::Red);

	//engineObjects.push_back(new Grid(50));

	//makeTriangleButton = new Button(FVector(100, 100), FVector(100, 50), "Make Triangle", _render);
	//makeCircleButton = new Button(FVector(300, 100), FVector(100, 50), "Make Circle", _render);
	//makeSquareButton = new Button(FVector(500, 100), FVector(100, 50), "Make Square", _render);

	//engineObjects.push_back(makeTriangleButton);
	//engineObjects.push_back(makeCircleButton);
	//engineObjects.push_back(makeSquareButton);

	//makeTriangleButton->OnClick().Bind(this, &Content::MakeTriangle);
	//makeCircleButton->OnClick().Bind(this, &Content::MakeCircle);
	//makeSquareButton->OnClick().Bind(this, &Content::MakeSquare);

	player1 = new Player(FVector(50, 50));
	player2 = new Player(FVector(ViewPort::Width - 50, ViewPort::Height - 120));

	ball = new Ball(FVector(ViewPort::Width / 2, ViewPort::Height / 2));

	line = new Line(FVector(ViewPort::Width / 2, 0), FVector(ViewPort::Width / 2, ViewPort::Height));
	player2 = new Player(FVector(ViewPort::Width - 50, ViewPort::Height - 50));
	score1 = new Score(FVector(300, 25), 0, 35, Color::Blue);
	score2 = new Score(FVector(450, 25), 0, 35, Color::Red);


	engineObjects.push_back(player1);
	engineObjects.push_back(player2);
	engineObjects.push_back(ball);
	engineObjects.push_back(line);

	engineObjects.push_back(new ScoreItem(player1, score1, 10));
	engineObjects.push_back(new ScoreItem(player2, score2, 10));
}

Content::~Content()
{
	for (EngineObject* _obj : engineObjects)
		delete _obj;
	delete makeTriangleButton, makeCircleButton, makeSquareButton;
	makeTriangleButton, makeCircleButton, makeSquareButton = nullptr;
}

void Content::ContentTick()
{
	player1->Move(Keyboard::Key::Z, Keyboard::Key::S);
	player2->Move(Keyboard::Key::Up, Keyboard::Key::Down);
	
	ball->Move();


	
	//TODO incrémenter le score en cas de but
	//TODO arreter le jeu en cas de score max : appeler la methode GameWin du scoreItem associé






	/*makeTriangleButton->IsClicked();
	makeCircleButton->IsClicked();
	makeSquareButton->IsClicked();*/
	//if (makeTriangleButton && makeTriangleButton->IsClicked())
	//	ViewPort::SetShape(new Triangle(Triangle(FVector(200, 200), FVector(300, 200), FVector(200, 400), Color::Red)));

	//if (makeCircleButton && makeCircleButton->IsClicked())
	//	ViewPort::SetShape(new CircleVertex(FVector(350, 250), 50, 50, Color::Yellow));

	//if (makeSquareButton && makeSquareButton->IsClicked())
	//	ViewPort::SetShape(new Square(FVector(500, 200), 50, Color::Red, false));
}

void Content::MakeTriangle()
{
	ViewPort::SetShape(new Triangle(FVector(500, 200), FVector(600, 200), FVector(500, 500), Color::Red));
}

void Content::MakeCircle()
{
	ViewPort::SetShape(new CircleVertex(FVector(350, 250), 50, 50, Color::Yellow));
}

void Content::MakeSquare()
{
	ViewPort::SetShape(new Square(FVector(500, 100), 50, Color::Yellow, false));
}
