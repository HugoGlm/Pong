#include "ViewPort.h"

ViewPort::ViewPort()
{
	sfmlWindow = new RenderWindow(VideoMode(1280, 720), "Render");
}

ViewPort::ViewPort(const string& _title, const int& _width, const int& _height)
{
	Width = _width;
	Height = _height;
	sfmlWindow = new RenderWindow(VideoMode(_width, _height), _title);
}

ViewPort::~ViewPort()
{
	delete sfmlWindow;
}

void ViewPort::Draw()
{
	while (sfmlWindow->isOpen())
	{
		Event _event;
		while (sfmlWindow->pollEvent(_event))
		{
			if (_event.type == Event::Closed)
				sfmlWindow->close();
		}
		sfmlWindow->clear();
		DrawAllObjects();
		if (mainShape)
			mainShape->Draw(*sfmlWindow);
		content->ContentTick();
		sfmlWindow->display();
	}
}

void ViewPort::DrawAllObjects()
{
	for (EngineObject* _ob : allObjects)
	{
		if (!_ob)
			continue;
		_ob->Draw(*sfmlWindow);
	}
}

void ViewPort::InitAllObjects(const vector<EngineObject*> _objects)
{
	allObjects = _objects;
}

void ViewPort::InitAllObjects(Content* _content)
{
	content = _content;
	allObjects = _content->Get();
}

void ViewPort::AddObjectToViewport(EngineObject* _object)
{
	allObjects.push_back(_object);
}

void ViewPort::ClearObjects()
{
	allObjects.clear();
}

void ViewPort::SetShape(EngineObject* _shape)
{
	delete mainShape;
	mainShape = _shape;
}