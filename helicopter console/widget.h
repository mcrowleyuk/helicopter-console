#pragma once
class widget
{
public:
	widget();
	~widget();
	widget& operator==(widget& ref);
private:
	const char* widgetarray;
};

