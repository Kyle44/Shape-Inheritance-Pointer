// File: Rectangle.cpp

// Rectangle.h includes Shape.h
#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int length, int width)
  :m_length(length), m_width(width)
{

}
Rectangle::~Rectangle()
{

}
int Rectangle::GetArea() const
{
  int area = m_length * m_width;
  return area;
}
void Rectangle::Draw() const
{
  Shape::Draw();
  cout << "Drawing a Rectangle..." << endl;
}
