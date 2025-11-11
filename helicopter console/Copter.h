#pragma once

#include <list>

#include "widget.h"
#include "HeliPart.h"
#include "iObserver.h"
#include "iSubscribe.h"

//class widget;

class Copter : public iSubscribe
{
public:
	Copter();

	// Copy Constructor

	Copter(const Copter& myCopter);

	// Assignment Operator

	Copter& operator=(const Copter& myCopter);

	// Destructor

	virtual ~Copter();

	
	Copter(Copter&&) = default; // Move Constructor allow default && = R Value Reference

	Copter& operator=(Copter&& myCopter) = default; // Move assignment operator - allow default


	// Subscribe, Notify overrides

	void Attach(const CopterObserver&) override;

	void Detach(const CopterObserver&) override;
	
	// Main Methods

	virtual const bool Start() const;

	void AddWidget();
	
	void AddPart(int& riPart, std::string& strPartName);
	
private:

	std::unique_ptr<widget> uptrWidget; 
	std::list<widget> listWidgets;

	std::unique_ptr<HeliPart> uptrHelipart;
	std::map<int, std::string> mapHeliParts;
	
};

