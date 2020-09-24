#include <iostream>
#include "box.h"

using namespace std;

Box::Box() :
    m_length(0), m_breadth(0), m_height(0) {

}
Box::Box(int len, int bre, int hei) :
  m_length(len),m_breadth(bre), m_height(hei) {

}
Box::Box(int l) :
    m_length(l){
}
Box::Box(const Box& ref) :
        m_length(ref.m_length),m_breadth(ref.m_breadth), m_height(ref.m_height) {

}

int Box::length(){
return (m_length);
}

int Box::breadth(){
return (m_breadth);
}

int Box::height(){
return (m_height);
}

int Box::volume(){

int vol=m_length*m_breadth*m_height;
return(vol);
}

void Box::display() {
    std::cout << m_length << "," << m_breadth << ","<< m_height<<"\n";
}




