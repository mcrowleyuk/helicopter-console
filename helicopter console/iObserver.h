#pragma once
class iObserver
{
public:
	iObserver();
	~iObserver();

	virtual bool update() = 0;
};

