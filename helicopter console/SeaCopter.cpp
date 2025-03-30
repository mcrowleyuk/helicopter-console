#include "SeaCopter.h"
#include <iostream>


SeaCopter::SeaCopter()
{
	//Nothing for now
	std::cout << "In the derived constructor\n";
}

SeaCopter::SeaCopter(SeaCopter& refSeaCopter)
{
	std::cout << "In the derived Copy Constructor\n";

}

SeaCopter::~SeaCopter()
{
	std::cout << "In the dervived destructor";
}

const bool SeaCopter::Start() const
{

	std::cout << "Starting pre checks in Sea Copter.....\n";

	std::cout << "..........\n";


	return true;
}
