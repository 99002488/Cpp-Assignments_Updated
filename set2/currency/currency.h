
#include <iostream>
using namespace std;
class Currency {
  private:
    int m_rupees;
    int m_paise;
  public:
     Currency();
     Currency(int , int) ;
     Currency(int );
     Currency operator+(const Currency &);
     Currency operator-(const Currency &);
     Currency operator+(int);
     Currency operator-(int);
     Currency operator++();
     Currency operator++(int);
     bool operator==(const Currency &);
     bool operator< (const Currency &);
     bool operator> (const Currency &);
     void display();



};
