// File: Triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape
{
 public:
  Triangle(int length, int height);
  virtual ~Triangle();
  virtual int GetArea() const;
  virtual void Draw() const;
 private:
  int m_length;
  int m_height;


// Write the public and private members here
};

#endif
