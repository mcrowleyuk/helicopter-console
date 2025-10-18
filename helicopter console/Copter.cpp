#include "Copter.h"

class Copter;

#include <iostream>

Copter::Copter()
{
	ptrWidget = NULL;
	std::cout << "In the base constructor\n";
};


Copter::~Copter()
{
	
	std::cout << "\nIn the base destructor\n";
	
	std::cout << "About to clear list of widgets";
	// This clears the list AND calls the destructor for each widget 
	listWidgets.clear(); // removes all elements and calls destructor on each

};


Copter::Copter(const Copter& myCopter)
{
	// To do
	//return *this;
	std::cout << "\nIn the base class copy constructor\n";
	this->listWidgets = myCopter.listWidgets;

};

Copter& Copter::operator=(const Copter& myCopter)
{

	// To do

	if (this != &myCopter)
	{

		std::list<widget>::iterator myiter = listWidgets.begin();


		/*while (listWidgets.begin() != listWidgets.end())
		{
			// calls destructor on each object in list
			listWidgets.pop_back();
		}*/  // THIS IS NOT NECCESARY AS list.clear() does this anyway

		listWidgets.clear();

		// REASSIGN LIST OF WIDGETS FROM R to L
		listWidgets = myCopter.listWidgets;

		
	};
	return *this;
};

void Copter::AddWidget()
{
	std::cout << "Creating a widget";
	ptrWidget = new widget();
	std::cout << "Adding a widget to end of list";
	listWidgets.push_back(*ptrWidget);   //or could insert with an iter (but less efficient)
}

void Copter::Attach(const CopterObserver& CoptObservr) 
{
	// Subscribe a copter observer for later notiication

	vObservers.push_back(CoptObservr);
	
}

void Copter::Detach(const CopterObserver& CoptObservr)
{
	vObservers.erase(
	std::remove(vObservers.begin(), vObservers.end(), CoptObservr),
		vObservers.end()
		);

}


const bool Copter::Start() const
{

	std::cout << "This is the base startup routine\n";
	return true;
}

