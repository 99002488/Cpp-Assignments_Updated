#include<iostream>
#include "complex.h"

Complex::Complex() :
    m_real(0), m_imag(0) {

}
Complex::Complex(int rl, int ig) :
  m_real(rl), m_imag(ig) {

}
Complex::Complex(int rl):
    m_real(rl),m_imag(0){

   }

Complex Complex::operator+(){
m_real=+m_real;
m_imag=+m_imag;
cout<<m_real<<"+"<<m_imag<<"i";
}

Complex Complex::operator-(){
m_real=-m_real;
m_imag=-m_imag;
cout<<m_real<<"+"<<m_imag<<"i";
}

Complex Complex::operator*(){
int real = (m_real*m_real)-(m_imag*m_imag);
int imag = (2*m_real*m_imag);
cout<<real<<"+"<<imag<<"i";
}

Complex Complex::operator++() {
    ++m_real;
   cout<<m_real<<"+"<<m_imag<<"i";
}
Complex Complex::operator++(int r1) {
    for (int i=0; i<r1; i++)
    {
      ++m_real;
    }
    cout<<m_real<<"+"<<m_imag<<"i";
}
bool Complex::operator==(const Complex &ref) {
    if((ref.m_real==m_real)&&(ref.m_imag==m_imag))
        {
           return true;
    }
    else
        {
            return false;
    }
}

void Complex::display() {
    cout<<m_real<<"+"<<m_imag<<"i";

}


