#include "HeliPart.h"



HeliPart::HeliPart():strPartName(strDefault)
{
	iPartNum = 0;
	strPartName = "";
}


HeliPart::HeliPart(int& riPartNum, std::string& rstrPartName):strPartName(strDefault)
{
	iPartNum = riPartNum;
	strPartName = rstrPartName;
}

HeliPart::~HeliPart()
{

}
