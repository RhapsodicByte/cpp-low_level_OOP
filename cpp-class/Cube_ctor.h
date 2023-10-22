/**
 * Simple c++ for representing a cube (with constructors).
 *
 * @author
 *      B. Bwashi <bbwashi@outlook.com>
 */

#pragma once

namespace discovery {
  class Cube {
    public:
      Cube();   // Custom default constructor
      Cube(const Cube & obj);   // Custom copy constructor

      Cube & operator=(const Cube & obj);  // Custom assigment operator

      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };
}
