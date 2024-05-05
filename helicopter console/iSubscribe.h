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
	void Detach() {;}
	virtual ~iSubscribe();

	// temp make public
	std::vector<CopterObserver> vObservers;

private:

	//std::vector<CopterObserver> vObservers;
};

