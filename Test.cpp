/* -----------------------------------------------------------------------------
 *
 * File Name:  Test.cpp
 * Author: Travis Hull  KUID: 2553248
 * Assignment:   EECS-448 Lab 07
 * Description:
 * Date: 4/26/19
 *
 ---------------------------------------------------------------------------- */
#include <iostream>
#include <string>
#include <fstream>
#include <limits>

#include "Test.h"
#include "LinkedListOfInts.h"

Test::Test(){}
Test::~Test(){}

void Test::runTests()
{
  testIsEmpty1();
  testIsEmpty2();
  testIsEmpty3();
  testSize1();
  testSize2();
  testSize3();
  testSize4();
  testSize5();
  testSize6();
  testSearch1();
  testSearch2();
  testSearch3();
  testaddBack1();
  testaddBack2();
  testaddFront1();
  testaddFront2();
  testRemoveBack1();
  testRemoveBack2();
  testRemoveBack3();
  testRemoveFront1();
  testRemoveFront2();
  testRemoveFront3();
}

///     isEmpty Test Suite      ///
void Test::testIsEmpty1()
{
  std::cout << "Test 1: isEmpty() returns True for empty list: ";
  LinkedListOfInts testingLLOI;

  if (testingLLOI.isEmpty() == true)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED\n";
    printVect(testingLLOI);
  }
}

void Test::testIsEmpty2()
{
  std::cout << "Test 2: isEmpty() returns False after 1 addFront(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addFront(5);

  if (testingLLOI.isEmpty() == false)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testIsEmpty3()
{
  std::cout << "Test 3: isEmpty() returns False after 1 addBack(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addBack(7);

  if (testingLLOI.isEmpty() == false)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

///     size Test Suite     ///
void Test::testSize1()
{
  std::cout << "Test 4: size() returns 0 for empty list: ";
  LinkedListOfInts testingLLOI;
  if (testingLLOI.size() == 0)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testSize2()
{
  std::cout << "Test 5: size() returns correct value after 1 addFront(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addFront(14);
  if (testingLLOI.size() == 1)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testSize3()
{
  std::cout << "Test 6: size() returns correct value after 1 addFront() and 1 removeFront(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addFront(14);
  testingLLOI.removeFront();
  if (testingLLOI.size() == 0)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testSize4()
{
  std::cout << "Test 7: size() returns correct value after 1 addBack(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addBack(18);
  if (testingLLOI.size() == 1)
    std::cout << "PASSED\n";
  else
  {
  std::cout << "FAILED  ";
  printVect(testingLLOI);
  }
}

void Test::testSize5()
{
  std::cout << "Test 8: size() returns correct value after 1 addBack() and 1 addFront(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addBack(19);
  testingLLOI.removeBack();
  if (testingLLOI.size() == 0)
    std::cout << "PASSED\n";
  else
  {
  std::cout << "FAILED  ";
  printVect(testingLLOI);
  }
}

void Test::testSize6()
{

  std::cout <<"Test 9: size() returns correct sizes for lists of size 1-1,000,000: ";
  int corrSize = 0;
  int wroSize = 0;
  LinkedListOfInts testingLLOI;
  for (int t4 = 0; t4 < 1000000; t4++)
  {
    testingLLOI.addFront(t4);
    if (testingLLOI.size() == (t4 + 1))
      corrSize++;
    else
      wroSize++;
  }
  if (wroSize > 0)
    std::cout << "FAILED"  << wroSize << " / " << wroSize + corrSize << "incorrect!\n";
  else
    std::cout << "PASSED\n";
}

///     search Test Suite     ///
void Test::testSearch1()
{
  std::cout << "Test 11: search() returns false on empty list: ";
  LinkedListOfInts testingLLOI;
  if (testingLLOI.search(5) == false)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testSearch2()
{
  std::cout << "Test 12: search() returns false on full list not containing target: ";
  LinkedListOfInts testingLLOI;
  for (int a = 0; a < 5; a++)
  {
    testingLLOI.addFront(a);
  }
  if (testingLLOI.search(100) == false)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testSearch3()
{
  std::cout << "Test 13: search() returns true on full list containing target: ";
  LinkedListOfInts testingLLOI;
  for (int a = 0; a < 5; a++)
  {
    testingLLOI.addFront(a);
  }
  if (testingLLOI.search(3) == true)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

///     addBack Test Suite      ///
void Test::testaddBack1()
{
  std::cout << "Test 14: toVector() returns correct value from end of vector after 1 addBack(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addBack(15);
  std::vector<int> testVect = testingLLOI.toVector();
  if (testVect[testingLLOI.size() - 1] == 15)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testaddBack2()
{
  std::cout << "Test 15: toVector() returns correct value from end of vector after 2 addBack(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addBack(15);
  testingLLOI.addBack(2);
  std::vector<int> testVect = testingLLOI.toVector();
  if (testVect[testingLLOI.size() - 1] == 2)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

///     addFront Test Suite     ///
void Test::testaddFront1()
{
  std::cout << "Test 14: toVector() returns correct value from front of vector after 1 addFront(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addFront(15);
  std::vector<int> testVect = testingLLOI.toVector();
  if (testVect[0] == 15)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testaddFront2()
{
  std::cout << "Test 15: toVector() returns correct value from front of vector after 2 addFront(): ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addFront(15);
  testingLLOI.addFront(2);
  std::vector<int> testVect = testingLLOI.toVector();
  if (testVect[0] == 2)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

///     removeBack Test Suite     ///
void Test::testRemoveBack1()
{
  std::cout << "Test 16: removeBack() returns false on an empty list: ";
  LinkedListOfInts testingLLOI;
  if (testingLLOI.removeBack() == false)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testRemoveBack2()
{
  std::cout << "Test 17: removeBack() returns true on a full list: ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addFront(1);
  testingLLOI.addFront(2);
  if (testingLLOI.removeBack() == true)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testRemoveBack3()
{
  std::cout << "Test 18: removeBack() returns true on a large list: ";
  LinkedListOfInts testingLLOI;
  for (int rb3 = 0; rb3 < 100; rb3++)
    testingLLOI.addFront(rb3);

  if (testingLLOI.removeBack() == true)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

/// removeFront Test Suite      ///
void Test::testRemoveFront1()
{
  std::cout << "Test 19: removeFront() returns false on an empty list: ";
  LinkedListOfInts testingLLOI;
  if (testingLLOI.removeFront() == false)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testRemoveFront2()
{
  std::cout << "Test 20: removeFront() returns true on a full list: ";
  LinkedListOfInts testingLLOI;
  testingLLOI.addFront(1);
  testingLLOI.addFront(2);
  if (testingLLOI.removeFront() == true)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::testRemoveFront3()
{
  std::cout << "Test 21: removeFront() returns true on a large list: ";
  LinkedListOfInts testingLLOI;
  for (int rb3 = 0; rb3 < 100; rb3++)
    testingLLOI.addFront(rb3);

  if (testingLLOI.removeFront() == true)
    std::cout << "PASSED\n";
  else
  {
    std::cout << "FAILED  ";
    printVect(testingLLOI);
  }
}

void Test::printVect(LinkedListOfInts currList)
{
  std::cout << "\n";
/*
  std::cout << "LLOI contains: [";
  std::vector<int> testVect;
  testVect = currList.toVector();

  for (int i = 0; i < testVect.size(); i++)
  {
    std::cout << testVect[i] << " ";
  }
  std::cout << "]\n";
*/}
