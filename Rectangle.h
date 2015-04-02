// File: Rectangle.h

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape
{
 public:
  Rectangle(int length, int width);
  virtual ~Rectangle();
  virtual int GetArea() const;
  virtual void Draw() const;
 private:
  int m_length;
  int m_width;

// write the public and private members
};

#endif
