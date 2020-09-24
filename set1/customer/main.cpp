#include<iostream>
#include<string.h>
#include "customer.h"
Customer::Customer() :
    m_custId(0), m_phone(0), m_type(0),m_custName("nothing"),m_balance(0) {

}
Customer::Customer(int Id,int Ph, std::string N, double Bal) :
  m_custId(Id), m_phone(Ph), m_custName(N),m_balance(Bal) {

}

Customer::Customer(int Id, int Ph, std::string Name) :
    m_custId(Id), m_phone(Ph), m_custName(Name) {
}


Customer::Customer(const Customer& Ref) :
        m_custId(Ref.m_custId), m_phone(Ref.m_phone), m_type(Ref.m_type),m_custName(Ref.m_custName),m_balance(Ref.m_balance) {

}
int Customer::credit(double Cred, AccountType tp) {

  switch(tp)
  {
  case prepaid:
    m_balance=m_balance+Cred;
    return(m_balance);
  case postpaid:
    m_balance=m_balance+Cred;
    return(m_balance);
  }
}
void Customer::makecall(int Call) {

  std::cout<<"Making call for: "<<Call<<" from "<<m_phone<<"\n";
}
int Customer::getBalance() {
  return m_balance;
}

void Customer::display() {
    std::cout << m_custId << "," << m_phone<<","<<m_custName<<","<< m_balance << "\n";
}


