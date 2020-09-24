#include <iostream>
#include <string>
using namespace std;
enum AccountType {prepaid,postpaid};

class Customer {
  private:
    int m_custId, m_phone;
    char m_type;
    std::string m_custName;
    double m_balance;
  public:
    Customer();
    Customer(int, int,std::string,double);
    Customer(int,int,std::string);
    Customer(const Customer &);
    int credit(double, AccountType);
    void makecall(int);
    int getBalance();
    void display();
};

