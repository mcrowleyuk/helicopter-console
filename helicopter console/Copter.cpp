#include "Copter.h"

class Copter;

#include <iostream>

Copter::Copter()
{
	ptrWidget = NULL;
};


Copter::~Copter()
{
	// TO DO 

	//delete the std::list

	std::cout << "\nIn the base destructor\n";

	std::list<widget>::iterator myiter;

	myiter = listWidgets.begin();


	// DEALLOC ANY SPACE USED BY LIST

	while (listWidgets.begin()!=listWidgets.end())
	{
		// calls destructor on each object in list
		listWidgets.pop_back();
	}

	std::cout << "About to clear list of widgets";
	// This calls the destructor for each widget 
	// lisy should be empty by this point anyway.
	listWidgets.clear();
	std::cout << "Cleared list of widgets";

};


Copter::Copter(Copter& myCopter)
{
	// To do
	//return *this;
	std::cout << "\nIn the base class copy constructor\n";
	this->listWidgets = myCopter.listWidgets;

};

Copter& Copter::operator=(Copter& myCopter)
{

	// To do
	std::list<widget>::iterator myiter;
	
	myiter = listWidgets.begin();


	// DEALLOC ANY SPACE USED BY LIST

	listWidgets.clear();

	// REASSIGN LIST OF WIDGETS FROM R to L
	listWidgets = myCopter.listWidgets;

	return *this;

};

void Copter::AddWidget()
{
	std::list<widget>::iterator myiter;

	myiter = listWidgets.begin();
	std::cout << "Creating a widget";
	ptrWidget = new widget();
	std::cout << "Adding a widget";
	listWidgets.insert(myiter,*ptrWidget);
}


const bool Copter::Start() const
{

	std::cout << "This is the base startup routine\n";
	return true;
}

