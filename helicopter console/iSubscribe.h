#pragma once
#include "iObserver.h"
#include "CopterObserver.h"
#include <vector>

class iSubscribe
{
public:
	iSubscribe();

	virtual void Attach(const CopterObserver&) = 0;
	void Notify(); // will call update on each observer
	void NotifyGo();
	virtual void Detach(const CopterObserver&) = 0; //this needs to remove the passed Copter from the Vector list
	virtual ~iSubscribe();


protected:

	std::vector<CopterObserver> vObservers;

private:

	//

};

