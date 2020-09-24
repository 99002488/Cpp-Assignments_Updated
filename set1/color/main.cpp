#include<iostream>
#include "color.h"
Color::Color() :
    m_r(0), m_g(0), m_b(0) {

}
Color::Color(int Red, int Green, int Blue) :
  m_r(Red), m_g(Green), m_b(Blue) {

}
Color::Color(string Color){

cout<<Color<<endl;
}
Color::Color(color_t X){
    switch(X)
    {
        case red:
            //cout<<"Red";
            m_r=255;
            m_g=0;
            m_b=0;
            break;
        case blue:
            //cout<<"Blue";
            m_r=0;
            m_g=0;
            m_b=255;
            break;
        case green:
            //cout<<"Green";
            m_r=0;
            m_g=255;
            m_b=0;
            break;
        case yellow:
            //cout<<"Yellow";
            m_r=255;
            m_g=255;
            m_b=0;
            break;
        case black:
            //cout<<"Black";
            m_r=255;
            m_g=255;
            m_b=255;
            break;
        default:
            cout<<"Undefined Color";
            break;
    }
}
int Color::invert() {
    m_r=255-m_r;
    m_g=255-m_g;
    m_b=255-m_b;
    return(m_r,m_g,m_b);
}
void Color::display() {
    cout<<"The Color composition is as follows: "<<endl;
    std::cout << "Red: "<<m_r << ", Green: " << m_g << ",Blue: " << m_b <<"\n";
}


