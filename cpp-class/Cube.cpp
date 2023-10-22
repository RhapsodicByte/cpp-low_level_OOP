/**
 * Simple C++ for representing a Cube.
 *
 * @author
 *      B Bwashi <bbwashi@outlook.com>
 */
#include "Cube.h"

double Cube::getVolume() {
  return length_ * length_ * length_;
}

double Cube::getSurfaceArea() {
  return 6 * length_ * length_;
}

void Cube::setLength(double length) {
  length_ = length;
}
