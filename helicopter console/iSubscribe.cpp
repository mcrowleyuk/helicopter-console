#include "iSubscribe.h"
//#include "algorithms.h"

#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;


iSubscribe::iSubscribe()
{
}


iSubscribe::~iSubscribe()
{
}


void iSubscribe::Notify()
{

	// this will call update on each subscribed object

	//create a seperate thread as this process could take time...

	thread myThread(&iSubscribe::NotifyGo,this);
	//mutex myMutex(myThread);

	//thread myThread(&iSubscribe::NotifyGo);

	myThread.join();  ///rejoins main thread
}

void iSubscribe::NotifyGo()
{

//	std::vector<CopterObserver>::iterator itr;

		
	
	for (CopterObserver& itr : vObservers)   // time to start working with 11,14,17.... range based loop
	{
		if (itr.update())
		{
			std::cout << "Update Completed" << endl;
		}
		else
		{
			std::cout << "Update Failed" << endl;
		}
	}

}

void iSubscribe::Detach(const CopterObserver& rObserver_to_detach)
{
	for (auto itr = vObservers.begin(); itr != vObservers.end(); ++itr) // need to use iterator rather than (for each :) - as needed to pass itr to ease.
	{
		if (*itr == rObserver_to_detach)
		{
			vObservers.erase(itr);
			break; // assumes only attached once
		}
	}
}