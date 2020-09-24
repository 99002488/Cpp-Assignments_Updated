#include <iostream>
#include "Distance.h"
using namespace std;

//Distance
Distance::Distance():
    m_feets(0), m_inches(0){
}
Distance::Distance(int foot, int inch):
    m_feets(foot), m_inches(inch){

}
Distance Distance::operator+(const Distance &ref){
        int temp=0,temp1=0;
        int tfeet= m_feets+ref.m_feets;
        int tinch= m_inches+ref.m_inches;
        if(tinch>12)
        {
           temp = tinch/12;
           temp1= tinch%12;
        }
        tinch=temp1;
        tfeet+=temp;
        cout<<tfeet<<","<<tinch;
}
Distance Distance::operator-(const Distance &ref){
    int temp=0,temp1=0;
        int tfeet= abs(m_feets-ref.m_feets);
        int tinch= abs(m_inches-ref.m_inches);
        if(tinch>12)
        {
           temp = tinch/12;
           temp1= tinch%12;
        }
        tinch=temp1;
        tfeet+=temp;
        cout<<tfeet<<","<<tinch;
}
Distance Distance::operator+(int inch){
    int temp=0,temp1=0;
        int tinch = m_inches+inch;
        if(tinch>12)
        {
           temp = tinch/12;
           temp1= tinch%12;
        }
        tinch=temp1;
        m_feets+=temp;
        cout<<m_feets<<","<<tinch;
}
Distance Distance::operator-(int inch){
    int temp=0,temp1=0;
        int tinch = (m_inches-inch);
        if(tinch<0)
        {
            m_feets-=1;
            m_inches=12-m_inches;
        }
        if(tinch>12)
        {
           temp = tinch/12;
           tinch= tinch%12;
           m_feets+=temp;
        }
        cout<<m_feets<<","<<tinch;
}
Distance& Distance::operator++(){
    int temp=0;
        ++m_inches;
        if(m_inches>12)
        {
           temp = m_inches/12;
           m_inches= m_inches%12;
           m_feets+=temp;
        }
        ++m_feets;
        cout<<m_feets<<","<<m_inches;
}
Distance& Distance::operator++(int times){
    int temp=0;
    for(int i=0;i<times;i++)
    {
        ++m_inches;
        if(m_inches>12)
        {
           temp = m_inches/12;
           m_inches= m_inches%12;
           m_feets+=temp;
        }
        ++m_feets;
    }

        cout<<m_feets<<","<<m_inches;
}
bool Distance:: operator==(const Distance &ref) {
        return m_feets == ref.m_feets && m_inches == ref.m_inches;
    }

bool Distance::operator< (const Distance &ref) {
        if(m_feets<ref.m_feets)
        {
            return true;
        }
        if(m_feets=ref.m_feets)
        {
            if(m_inches<ref.m_inches)
            {
                return true;
            }
        }
        return false;

    }
bool Distance::operator> (const Distance &ref) {
        if(m_feets>ref.m_feets)
        {
            return true;
        }
        if(m_feets=ref.m_feets)
        {
            if(m_inches>ref.m_inches)
            {
                return true;
            }
        }
        return false;
   }

void Distance::display (){
 std::cout << m_feets << "," << m_inches; }


