#include "SeaCopter.h"
#include <iostream>


SeaCopter::SeaCopter()
{
	//Nothing
}

SeaCopter::SeaCopter(SeaCopter& refSeaCopter)
{
	std::cout << "In the derived Copy Constructor\n";
//	return *this; // HACK HACK HACK!
}

SeaCopter::~SeaCopter()
{
	std::cout << "In the dervived destructor";
}

const bool SeaCopter::Start() const
{

	std::cout << "Starting pre checks.....\n";

	std::cout << "Starting rotas.....\n";

	std::cout << "..........\n";


	return true;
}
