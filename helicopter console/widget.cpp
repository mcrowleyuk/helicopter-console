#include "widget.h"
#include <iostream>



widget::widget()
{
	std::cout << "In widget constructor\n";
	widgetarray = new char[100];
}


widget::~widget()
{
	std::cout << "In the widget destructor\n";
	//delete widgetarray;
}

bool widget::operator==(widget& ref)
{
	if (ref == *this)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}