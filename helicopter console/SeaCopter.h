#pragma once
#include "Copter.h"
#include "CPart.h"
class SeaCopter :
	public Copter
{
public:
	SeaCopter();
	~SeaCopter();

	SeaCopter(SeaCopter& refSeaCopter);

	const virtual bool Start() const;

private:

	CPart<SeaCopter> myPart;
	

};

