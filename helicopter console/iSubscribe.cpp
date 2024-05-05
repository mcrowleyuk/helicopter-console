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

	myThread.join();
}

void iSubscribe::NotifyGo()
{

	std::vector<CopterObserver>::iterator itr;

		
	for (itr = vObservers.begin(); itr != vObservers.end(); ++itr)
	{
		
		if ((*itr).update())
		{
			std::cout << "Update Completed" << endl;
		}
		else
		{
			std::cout << "Update Failed" << endl;
		}
	}

}