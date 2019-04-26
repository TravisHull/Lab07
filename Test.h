/* -----------------------------------------------------------------------------
 *
 * File Name:  Test.h
 * Author: Travis Hull  KUID: 2553248
 * Assignment:   EECS-448 Lab 07
 * Description:
 * Date: 4/26/19
 *
 ---------------------------------------------------------------------------- */
#include <string>
#include <stdexcept>
#include <fstream>
#include <vector>

#include "LinkedListOfInts.h"

#ifndef TEST_H
#define TEST_H

class Test
{
public:
  /**
  * @pre None.
  * @post creates a Test object.
  */
  Test();

  /**
  * @pre a Test object exists
  * @post Deletes Test object
  */
  ~Test();

  /**
  * @pre a Test object exists
  * @post runs Testing Suite
  */
  static void runTests();

  /**
  *
  */
  static void printVect(LinkedListOfInts currList);

  /**
  * @pre a LinkedListOfInts exists
  * @post tests functionality of LLOI method isEmpty()
  */
  static void testIsEmpty1();

  /**
  * @pre a LinkedListOfInts exists
  * @post tests functionality of LLOI method isEmpty()
  */
  static void testIsEmpty2();

  /**
  * @pre a LinkedListOfInts exists
  * @post tests functionality of LLOI method isEmpty()
  */
  static void testIsEmpty3();

  /**
  * @pre
  * @post
  */
  static void testSize1();

  /**
  * @pre
  * @post
  */
  static void testSize2();

  /**
  * @pre
  * @post
  */
  static void testSize3();

  /**
  * @pre
  * @post
  */
  static void testSize4();

  /**
  * @pre
  * @post
  */
  static void testSize5();

  /**
  * @pre
  * @post
  */
  static void testSize6();

  /**
  * @pre
  * @post
  */
  static void testSearch1();

  /**
  * @pre
  * @post
  */
  static void testSearch2();

  /**
  * @pre
  * @post
  */
  static void testSearch3();

  /**
  * @pre
  * @post
  */
  static void testaddBack1();

  /**
  * @pre
  * @post
  */
  static void testaddBack2();

  /**
  * @pre
  * @post
  */
  static void testaddFront1();

  /**
  * @pre
  * @post
  */
  static void testaddFront2();

  /**
  * @pre
  * @post
  */
  static void testRemoveBack1();

  /**
  * @pre
  * @post
  */
  static void testRemoveBack2();

  /**
  * @pre
  * @post
  */
  static void testRemoveBack3();

  /**
  * @pre
  * @post
  */
  static void testRemoveFront1();

  /**
  * @pre
  * @post
  */
  static void testRemoveFront2();

  /**
  * @pre
  * @post
  */
  static void testRemoveFront3();
};
#endif
