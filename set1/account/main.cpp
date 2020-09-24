#include<iostream>
#include "account.h"
Account::Account() :
    m_accNumber(0), m_accName(""), m_balance(0) {

}
Account::Account(int Id, std::string Name, double Bal) :
  m_accNumber(Id), m_accName(Name), m_balance(Bal) {

}
Account::Account(const Account& Ref) :
        m_accNumber(Ref.m_accNumber), m_accName(Ref.m_accName),
                                              m_balance(Ref.m_balance) {

}
void Account::credit(double Camount) {
  m_balance += Camount;
}
void Account::debit(double Damount) {
  //min balance check
  m_balance -= Damount;
}

double Account::getBalance() {
    return m_balance;
}
void Account::display() {
    std::cout << m_accNumber << "," << m_accName << ","
                                         << m_balance << "\n";
}


