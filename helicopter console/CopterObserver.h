#pragma once
#include "iObserver.h"
class CopterObserver :
	public iObserver
{
public:
	CopterObserver(int id) {
		iObserverID = id;
	}

	CopterObserver()
	{
		iObserverID = 999; // Temp Default
	}


	~CopterObserver();

	bool operator==(const CopterObserver& other) const {
		return iObserverID == other.iObserverID;
	}

	bool update() { return true; };

private:

	int iObserverID;

};

