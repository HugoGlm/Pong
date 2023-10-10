#pragma once
#include <iostream>
#include "SFMLCore.h"
#include "ShapeCore.h"
#include "Content.h"

using namespace std;
class ViewPort
{
	vector<EngineObject*> allObjects;
	RenderWindow* sfmlWindow = nullptr;
	Content* content = nullptr;
	static inline EngineObject* mainShape = nullptr;
public:
	ViewPort();
	ViewPort(const string& _title, const int& _width, const int& _height);
	~ViewPort();
	static inline int Width;
	static inline int Height;
	static void SetShape(EngineObject* _shape);
	inline RenderWindow* GetWindow() { return sfmlWindow; };
	void DrawAllObjects();
	void InitAllObjects(const vector<EngineObject*> _objects);
	void InitAllObjects(Content* _content);
	void AddObjectToViewport(EngineObject* _object);
	void ClearObjects();
	void Draw();
};

