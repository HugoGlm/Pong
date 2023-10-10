#pragma once
#include "EngineObject.h"
#include "ActionEvent.h"

using namespace std;
class Button : public EngineObject
{
	RenderWindow* render;
	RectangleShape* rect = nullptr;
	Text label;
	bool isClick = false;
	Action onClick;
private:
	bool Contains(const Vector2i& _input) const;
public:
	Action& OnClick() { return onClick; }
	Button(const FVector& _position, const FVector& _size, const string& _label, RenderWindow* _render, const int& _fontSize = 12);
	~Button();
	bool IsClicked();
	virtual void Draw(RenderWindow& _window) override;
};

