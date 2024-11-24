#include <iostream>
#include <sys/time.h>                   // Needed for timing

using namespace std;

#include "link.h"		// Would ya lookatalltheseincludes!!??
#include "llist.h"
#include "llist.cpp"
#include "stack.h"
#include "stack.cpp"

//************************************************************************
// This program does a simple demonstration of the "has-a" relationship
// in the sense that it declares a stack, which has been implemented
// with a linked list.  The stack has a linked list.
//************************************************************************
int main() {

  Stack<int> s;			// The stack
  int i, j;			// An iterator and a return value.

  for (i = 0; i < 50000; i++)		// Do 50k pushes then 50k pops,
    s.push(i);				// just to take some time.
  for (i = 0; i < 50000; i++)
    s.pop(j);

  return 0;
}
