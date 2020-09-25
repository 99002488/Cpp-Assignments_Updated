#include <iostream>
#include "employee.h"
#include "engineer.h"
#include "manager.h"
#include "trainee.h"



#define PERDAYSAL 300;
using namespace std;



void Employee::payroll(){}
void Employee::appraisal(){}
void Employee::setBalance(double var){m_salary=var;}
double Employee::getBalance(){ return m_salary; }
int Employee::getExp(){return m_exp;}
void Employee::display(){cout<<"Name: "<<m_name<<"  Emp ID: "<<m_empid<<" Salary: "<<m_salary<<" Exp: "<<m_exp<<endl;}



Employee::Employee(std::string id, std::string name, double salary,int exp):
    m_empid(id),m_name(name),m_salary(salary),m_exp(exp){}



Employee::Employee(std::string id, std::string name, double salary): m_empid(id),m_name(name),m_salary(salary){}



Engineer::Engineer(std::string id, std::string name, double salary,int exp,int code):Employee(id,name,salary,exp),m_projCode(code){}



void Engineer::payroll()
{
    cout<<"Payroll : ";
    double sal=Employee::getExp()*PERDAYSAL;
    cout<<sal<<endl;
    Employee::setBalance(sal);
}
void Engineer::appraisal()
{
    cout<<"Appraisal by 10% : ";
    double var2=Employee::getBalance();
    var2=var2+var2*10/100;
    cout<<var2<<endl;
    Employee::setBalance(var2);



}
void Engineer::display(){
    Employee::display();
    cout<<"\nProject code: "<<m_projCode<<endl;



}



Manager::Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees):Employee(id,name,salary,exp),m_projCode(code),m_reportees(reprtees){}



void Manager::payroll()
{
    cout<<"Payroll: ";
    int pi=m_reportees*PERDAYSAL;
    cout<<pi<<endl;
    Employee::setBalance(pi);
}
void Manager::appraisal()
{
    cout<<"Appraisal by 10%: ";
    int temp =Employee::getBalance();
    temp=temp+temp*10/100;
    cout<<temp<<endl;
    Employee::setBalance(temp);
}
void Manager::display(){
    Employee::display();
    cout<<"\nProject code: "<<m_projCode<<endl;
    cout<<"\nReporting days :"<<m_reportees<<endl;
}
Trainee ::Trainee(std::string id, std::string name, double salary,std::string track_code,double score): Employee( id,name,salary),m_track(track_code),score(score){}



void Trainee::payroll()
{
    cout<<"Payroll: ";
    int rr=1000*(score/100);
    cout<<rr<<endl;
    Employee::setBalance(rr);
}
void Trainee::appraisal()
{
    cout<<"Appraisal by 10%: ";
    int tr=Employee::getBalance();
    tr=tr+tr*10/100;
    cout<<tr<<endl;
    Employee::setBalance(tr);
}
void Trainee::display(){
    Employee::display();
    cout<<"Track: "<<m_track;
    cout<<"\nScore: "<<score<<endl;
}
