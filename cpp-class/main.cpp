/**
 * C++ code for creating a Cube of length 2.4 units
 * - See ../cpp-std/main.cpp for a similar program with print statements.
 *
 * @author
 *  B. Bwashi <bbwashi@outlook.com>
 */

#include <iostream>
#include "Cube.h"

int main() {
  Cube c;

  c.setLength(3.48);
  double volume = c.getVolume();
  std::cout << "Volume: " << volume << std::endl;

  return 0;
}
