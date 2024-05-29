#include "SeaCopter.h"
#include <iostream>


SeaCopter::SeaCopter()
{
	//Nothing for now
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

	std::cout << "Starting pre checks.....\n";

	std::cout << "..........\n";


	return true;
}
