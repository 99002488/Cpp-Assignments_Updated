#include<string>
class Account {
  int m_accNumber; // ideally to be of string type
  std::string m_accName;
  double m_balance;

public:
  Account();
  Account(int, std::string, double);
  Account(const Account &);
  Account(int, int);
  void credit(double);
  void debit(double);
  double getBalance();
  void display();
};

