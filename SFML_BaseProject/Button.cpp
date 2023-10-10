#include "Button.h"
#include "Database.h"

bool Button::Contains(const Vector2i& _input) const
{
	bool _isValid = (_input.x > rect->getPosition().x &&
		_input.x < rect->getPosition().x + rect->getSize().x &&
		_input.y > rect->getPosition().y &&
		_input.y < rect->getPosition().y + rect->getSize().y);
	return _isValid;
}

Button::Button(const FVector& _position, const FVector& _size, const string& _label, RenderWindow* _render, const int& _fontSize)
{
	render = _render;
	rect = new RectangleShape(_size);
	rect->setPosition(_position);
	label = Text(_label, Database::font);
	label.setOrigin(FVector(-_size.x / 4, _size.y / 4));
	label.setPosition(_position + FVector(0, _size.y / 2));
	label.setCharacterSize(_fontSize);
	label.setFillColor(Color::Red);
	rect->setSize(FVector(label.getGlobalBounds().width + _size.x / 2, _size.y));
}

Button::~Button()
{
	delete rect;
}

bool Button::IsClicked()
{
	bool _canClick = Contains(Mouse::getPosition(*render)),
		_hit = Mouse::isButtonPressed(Mouse::Left);
	if (_canClick && _hit && !isClick) //permet de click une fois 
	{
		onClick.Invoke();
		isClick = true;
		return true;
	}
	else if (!_hit && isClick) //permet de pouvoir reclick 
		isClick = false;
	return false;
}

void Button::Draw(RenderWindow& _window)
{
	_window.draw(*rect);
	_window.draw(label);
}