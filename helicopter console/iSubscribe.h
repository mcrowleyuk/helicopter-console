#pragma once
#include "iObserver.h"
#include "CopterObserver.h"
#include <vector>

class iSubscribe
{
public:
	iSubscribe();

	void Attach(CopterObserver) {;}
	void Notify(); // will call update on each observer
	void NotifyGo();
	void Detach(const CopterObserver&); //this needs to remove the passed Copter from the Vector list
	virtual ~iSubscribe();

	bool operator==(const CopterObserver&) { return true; } // temp test just to allow compile for now

	// temp make public - would not normally ever do this!!!!!!!!
	std::vector<CopterObserver> vObservers;

private:

	//std::vector<CopterObserver> vObservers; // to put back
};

