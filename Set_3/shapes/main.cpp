#include <iostream>
#include "polygon.h"
#include "shape.h"
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include <math.h>
const static double PI = 22.0/7.0;
using namespace std;

Polygon::Polygon(int s) :IShape(){
}

Circle::Circle(int r) :IShape(), m_radius(r){
}
double Circle::area() {
    double ar = PI*m_radius*m_radius;
    cout << "Area of the Circle::" << ar << endl;
}
double Circle::circumference() {
    double crcm = PI*m_radius*2;
    cout << "Circumference of the Circle::" << crcm << endl;
}
Rectangle::Rectangle(int l, int b) : Polygon(2),m_length(l),m_breadth(b){
}
double Rectangle::area() {
    double ar = m_length*m_breadth;
    cout << "Area of the Rectangle::" << ar << endl;
}
double Rectangle::circumference() {
    double crcm = 2*(m_length+m_breadth);
    cout << "Circumference of the Rectangle::" << crcm << endl;
}
Triangle::Triangle(int x, int y, int z) : Polygon(3),m_a(x),m_b(y),m_c(z){
}
double Triangle::area() {
    double s = (m_a+m_b+m_c)/2;
    double ar = sqrt(s*(s-m_a)*(s-m_b)*(s-m_c));
    cout << "Area of the Triangle::" << ar << endl;
}
double Triangle::circumference() {
    double crcm = m_a+m_b+m_c;
    cout << "Circumference of the Triangle::" << crcm << endl;
}

