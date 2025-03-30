#include "iSubscribe.h"
//#include "algorithms.h"

#include <iostream>
#include <thread>
#include <mutex>

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

		
	//for (itr = vObservers.begin(); itr != vObservers.end(); ++itr)
	
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

void iSubscribe::Detach(const CopterObserver& myObserver)
{ 
	// search vector for a match

	std::vector<CopterObserver>::iterator itr;

	for (itr = vObservers.begin(); itr != vObservers.end(); ++itr)
	{
		/*if ((*itr) == myObserver) // will override the operator== to handle this efficiently
		{
			vObservers.erase(itr);
		}*/
	}

	

}