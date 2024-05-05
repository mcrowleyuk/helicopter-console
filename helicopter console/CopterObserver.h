#pragma once
#include "iObserver.h"
class CopterObserver :
	public iObserver
{
public:
	CopterObserver();
	~CopterObserver();

	bool update() { return true; };
};

