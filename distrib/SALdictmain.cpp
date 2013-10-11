// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// Test program for the dictionary class implemented using an
// unsorted array-based list

#include "book.h"

// Use an array-based list implementation
#include "alist.h"

#include "SALdict.h"

#include "DictTest.h"
	
// Driver for testing unsorted array-based dictionary
int main(int argc, char** argv) {
  SALdict<int, Int*> dict;

  dicttest(dict);

  return 0;
}
