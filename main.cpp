/* -----------------------------------------------------------------------------
 *
 * File Name:  main.cpp
 * Author: Travis Hull  KUID: 2553248
 * Assignment:   EECS-448 Lab 07
 * Description:
 * Date: 4/26/19
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"

int main(int argc, char** argv)
{
	std::cout << "Running...\n";
	Test myTest;
	myTest.runTests();
	std::cout << "And we're done.\nGoodbye.\n";

	return (0);
}
