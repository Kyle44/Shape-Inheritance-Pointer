// Author: Kyle Fritz
// Date modified: 4/2/2015
// File: Lab11.cpp
// Description: A Shape class is inherited by Rectangle and Triangle classes.  Through the program, a Shape pointer is made that points to a Rectangle and another points to a Triangle.

#include<iostream>
// Don't have to #include "Shape.h" because it's included in both files included just below
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main()
{

  Shape *shapePtr;	       // Base class pointer 
  Rectangle aRectangle(5,4);  // creating a rectangle object
  Triangle aTriangle(4,4);    // creating a triangle object

  shapePtr = &aRectangle;
  cout << "Rectangle's Area is " << shapePtr->GetArea() << endl;
  shapePtr->Draw();
  shapePtr = &aTriangle;
  cout << "Triangle's Area is " << shapePtr->GetArea() << endl;
  shapePtr->Draw();

  // Write code to perform dynamic binding here
  
  return 0;
}

