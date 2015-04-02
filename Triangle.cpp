// File: Triangle.cpp

#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(int length, int height)
  :m_length(length), m_height(height)
{

}
Triangle::~Triangle()
{

}
int Triangle::GetArea() const
{
  int area = m_length * m_height / 2;
  return area;
}
void Triangle::Draw() const
{
  Shape::Draw();
  cout << "Drawing a Triangle..." << endl;
}
