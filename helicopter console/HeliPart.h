#pragma once

#include <map>
#include <string>
#include <iostream>

class HeliPart
{
public:
	HeliPart();
	HeliPart(int& riPartNUm, std::string& rstrPartName);
	~HeliPart();

private:

	int iPartNum;
	std::string& strPartName;
	std::string strDefault;

};

