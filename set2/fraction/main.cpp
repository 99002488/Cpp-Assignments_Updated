#include <iostream>
#include<math.h>
#include<algorithm>
#include "fraction.h"
using namespace std;
Fraction::Fraction() :
    m_numerator(0), m_denominator(0) {

}

Fraction::Fraction(int x, int y) :
  m_numerator(x), m_denominator(y) {

}

Fraction::Fraction(int x) :
    m_numerator(x), m_denominator(1){

}

Fraction Fraction::operator+(const Fraction &ref)
{
    int num,den;
    if(m_denominator==ref.m_denominator){
         num=m_numerator + ref.m_numerator;
         den=ref.m_denominator;}
    else {
         num=(m_numerator*ref.m_denominator)+(m_denominator*ref.m_numerator);
         den=(m_denominator*ref.m_denominator);
    }
    cout <<num<<"/"<<den;
}

Fraction Fraction::operator-(const Fraction &ref)
{int num,den;
    if(m_denominator==ref.m_denominator){
         num=m_numerator - ref.m_numerator;
         den=ref.m_denominator;}
    else {
         num=(m_numerator*ref.m_denominator)-(m_denominator*ref.m_numerator);
         den=(m_denominator*ref.m_denominator);
    }
    cout <<num<<"/"<<den;
}

Fraction Fraction::operator*(const Fraction &ref)
{
    int num=m_numerator * ref.m_numerator;
    int den=m_denominator * ref.m_denominator;
    cout<<num<<"/"<<den;
}

Fraction Fraction::operator+(int x){
    int num,den;
    den=m_denominator;
    num=(x*m_denominator)+m_numerator;
    cout <<num<<"/"<<den;
}

Fraction Fraction::operator-(int x){
    int num,den;
    den=m_denominator;
    num=m_numerator-(x*m_denominator);
    cout <<num<<"/"<<den;
}

bool Fraction::operator==(const Fraction &ref){
        return m_numerator==ref.m_numerator && m_denominator==ref.m_denominator;
}
bool Fraction::operator<(const Fraction &ref){
       float num1=float(m_numerator/m_denominator);
        float num2=float(ref.m_numerator/ref.m_denominator);
      if(num1<num2)
        return true;
      else
        return false;
}
   bool Fraction::operator>(const Fraction &ref){
       float num1=float(m_numerator/m_denominator);
        float num2=float(ref.m_numerator/ref.m_denominator);
      if(num1>num2)
        return true;
      else
        return false;
}
void Fraction::simplify(){
    int g;
    if (m_numerator == 0)
       cout<<"Simplified form is :"<<m_numerator;
    if (m_denominator == 0)
       cout<<"Invalid Denominator";

    // base case
    if (m_numerator == m_denominator)
        cout<<"Simplified form is :1";

    // a is greater
    if (m_numerator > m_denominator)
        g=__gcd(m_numerator-m_denominator, m_denominator);
    g=__gcd(m_numerator, m_denominator-m_numerator);

    if(g==1)
    {
        cout<<"Simplified form is : "<<m_numerator<<"/"<<m_denominator;
    }
    else
    {
        cout<<"Simplified form is : "<<m_numerator<<"/"<<m_denominator;
    }
    }
void Fraction::isSimplest(){
    int g;
    if (m_numerator == 0)
       cout<<"Fraction is Simplest";
    if (m_denominator == 0)
       cout<<"Invalid Denominator";

    // base case
    if (m_numerator == m_denominator)
       cout<<"Fraction is Simplest";

    // a is greater
    if (m_numerator > m_denominator)
        g=__gcd(m_numerator-m_denominator, m_denominator);
    g=__gcd(m_numerator, m_denominator-m_numerator);

    if(g==1){
        cout<<"Fraction Is Simplest";
    }
    else{
        cout<<"Fraction Is  Not Simplest";
    }
    }
void Fraction::display(){
    cout <<m_numerator<<"/"<<m_denominator;
    }


