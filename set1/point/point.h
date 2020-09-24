#include <iostream>
using namespace std;
enum Quadrant {q1,q2,q3,q4};

class Point {
  private:
    float m_x, m_y;
  public:
    Point();
    Point(int, int);
    Point(const Point &);
    void distanceFromOrigin();
    void quadrant(Quadrant);
    void isOrigin();
    void isOnXAxis();
    void isOnYAxis();
    void display();
};
