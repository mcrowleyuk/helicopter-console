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

	void Attach(const CopterObserver&) override;

	void Detach(const CopterObserver&) override;

	Copter(Copter&&) = default; // Move Constructor allow default && = R Value Reference

	Copter& operator=(Copter&& myCopter) = default; // Move assignment operator - allow default



	virtual const bool Start() const;

	void AddWidget();
	
	void AddPart(int& riPart, std::string& strPartName) {

		ptrHelipart = std::make_unique<HeliPart>(HeliPart(riPart, strPartName));


		std::pair<int, std::string> pairPart(riPart, strPartName);

		mapHeliParts.insert(pairPart);

	}
private:

	widget* ptrWidget;
	std::list<widget> listWidgets;

	std::unique_ptr<HeliPart> ptrHelipart;
	std::map<int, std::string> mapHeliParts;
	
};

