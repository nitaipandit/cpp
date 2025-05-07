#include "derived.h"
#include "derivedA.h"
#include "derivedC.h"

int main() {
  Base baseObj;       // Base class constructor
  Derived derivedObj; // Base class constructor and Derived Constructor
  DerivedA derivedAObj;

  baseObj.print();    // Printing from Base class
  derivedObj.print(); // Printing from Derived class
  derivedAObj.print();

  DerivedC derivedC;
  derivedC.print();
  derivedC.display();
}
