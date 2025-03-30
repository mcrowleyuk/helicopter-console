#pragma once
class widget
{
public:
	widget();
	~widget();
	bool operator==(widget& ref);
private:
	const char* widgetarray;
};

