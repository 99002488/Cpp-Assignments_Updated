#include<iostream>
#include<string.h>

#include "ipaddress.h"


IPAddress::IPAddress() :
    ipval("125.0.0.0") {

}

IPAddress::IPAddress(int n1,int n2, int n3, int n4 ) :
 ipval(to_string(n1)+"."+to_string(n2)+"."+to_string(n3)+"."+to_string(n4)){

}

IPAddress::IPAddress(int i1) :
    ipval(to_string(i1)+"."+to_string(i1)+"."+to_string(i1)+"."+to_string(i1)) {
}



bool IPAddress::isLoopBack() {
    if (ipval=="125.0.0.1")
    {
        return true;
    }
    else{
        return false;
    }
}
void IPAddress::getIPClass(){
string temp;
int i=0;
while (ipval[i]!='.')
{
    temp[i]=temp[i]+ipval[i];
    i=i+1;
}
int icheck=stoi(temp);
if(icheck>0 && icheck<=125)
{
IPClass c1 = IPClass::a;
std::cout<<"IPClass:  "<<char(c1);
}
if(icheck>125 && icheck<=191)
{
IPClass c1 = IPClass::b;
std::cout<<"IPClass:  "<<char(c1);
}
if(icheck>191 && icheck<=223)
{
IPClass c1 = IPClass::c;
std::cout<<"IPClass: "<<char(c1);
}
if(icheck>223 && icheck<=240)
{
IPClass c1 = IPClass::d;
std::cout<<"IPClass:  "<<char(c1);
}

}
void IPAddress::display() {
    std::cout <<"Your IP Address is: "<<ipval;
}


