// helicopter console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SeaCopter.h"
#include <thread>
#include <mutex>

void Go()
{

	//dynammic bind base to derived
	Copter myCopter;

	myCopter.Start();

	myCopter.AddWidget(); // each widget added to std::list

	myCopter.AddWidget();

	myCopter.AddWidget();

	std::cout << "Before second copy constructor";
	Copter MyCopter2(myCopter);


	MyCopter2.Start();

	//delete myCopter;
	std::cout << "after the first destructor and before second";

	//Question - does MyCopter2 destructor get called?
//	delete MyCopter2;

	std::cout << "Finished!\n";


}


int main()
{
	std::cout << "Hello World!\n";

	std::mutex myMutex;

	myMutex.lock();

	std::thread myThread(Go);

	myThread.join();
	
	myMutex.unlock();
	


	//myThread(Go);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
