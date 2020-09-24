#include<iostream>
#include "image.h"
Image::Image() :
    m_x(0), m_y(0), m_width(0), m_height(0) {

}
Image::Image(int X, int Y, int W, int H) :
  m_x(X), m_y(Y), m_width(W), m_height(H) {

}
Image::Image(const Image& Ref) :
        m_x(Ref.m_x), m_y(Ref.m_y),m_width(Ref.m_width), m_height(Ref.m_height) {

}
void Image::move(int Quad, int pos1, int pos2) {
  if(Quad==1){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to first quadrant and now the position is " << m_x <<","<< m_y ;
    }
    else if(Quad==2){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to second quadrant and now the position is " << m_x<<"," << m_y ;
    }
    if(Quad==3){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to third quadrant and now the position is " << m_x <<"," << m_y ;
    }
    if(Quad==4){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to forth quadrant and now the position is " << m_x<< "," << m_y ;
    }

}
void Image::scale(int w, int h) {
  m_width=w;
  m_height=h;
  std::cout <<m_width<<","<<m_height;
}
int Image::resize(int num1, int num2) {
  m_x=m_x+num1;
  m_y=m_y+num2;
  std::cout<< m_x <<"," << m_y;
}

void Image::display() {
    std::cout << m_x << "," << m_y << "," << m_width << ","<< m_height<<"\n";
}


