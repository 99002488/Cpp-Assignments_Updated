#include <iostream>
#include <string>

#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"

using namespace std;

const double CALL_RATE=1.0;

CustomerBase::CustomerBase() :
    m_custId(NULL), m_custName(NULL),m_phone(NULL),m_balance(0.0),m_type()
{

}

CustomerBase::CustomerBase(string a,string b,string c,double d) :
    m_custId(a), m_custName(b),m_phone(c),m_balance(d)
{

}

PostpaidCustomer::PostpaidCustomer(string a, string b, string c, double d, int e):CustomerBase(a,b,c,d),m_billDate(e)
{
}

PrepaidCustomer::PrepaidCustomer(string a, string b, string c, double d):CustomerBase(a,b,c,d)
{
}

CustomerBase::CustomerBase(string a, string b, string c):
    m_custId(a),m_custName(b),m_phone(c)
{
}

PostpaidCustomer::PostpaidCustomer(string a, string b, string c):CustomerBase(a,b,c)
{
}

PrepaidCustomer::PrepaidCustomer(string a, string b, string c):CustomerBase(a,b,c)
{
}

CustomerBase::CustomerBase(const CustomerBase &ref) :
    m_custId(ref.m_custId), m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance),m_type(ref.m_type)
{

}

void PostpaidCustomer::credit(double amt)
{
    double m=CustomerBase::getBalance();
    cout<<" Your Postpaid phone has been recharged by: "<<amt<<endl;
    cout<<" Your current Postpaid balance is: "<<m+amt;
}

void PrepaidCustomer::credit(double amt)
{
    double m=CustomerBase::getBalance();
    cout<<" Your Prepaid phone has been recharged by: "<<amt<<endl;
    cout<<" Your current Prepaid balance is: "<<m+amt;
}

void PostpaidCustomer::makeCall(double nmins)
{
    double m=CustomerBase::getBalance();
    m -= nmins * CALL_RATE;
    cout<<"Call time: "<<nmins<<"mins"<<endl;
    cout<<"Remaining recharge balance: "<<m<<endl;
}

void PrepaidCustomer::makeCall(double nmins)
{
    double m=CustomerBase::getBalance();
    m -= nmins * CALL_RATE;
    cout<<"Call time: "<<nmins<<"mins"<<endl;
    cout<<"Remaining recharge balance: "<<m<<endl;
}

void PostpaidCustomer::display()
{
    cout<<"Type of Account : PostPaid"<<endl;
    cout<<"Due date: "<<m_billDate;
}

void PrepaidCustomer::display()
{
    cout<<"Type of Account : PrePaid"<<endl;
    cout<<"Recharge soon to avoid network connection breakage";
}
double PostpaidCustomer::getBalance()
{
    double m = CustomerBase::getBalance();
    return m;
}

double PrepaidCustomer::getBalance()
{
    double m = CustomerBase::getBalance();
    return m;
}

double CustomerBase::getBalance()
{
    return m_balance;
}
