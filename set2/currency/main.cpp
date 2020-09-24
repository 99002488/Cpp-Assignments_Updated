#include<iostream>
#include "Currency.h"
using namespace std;

Currency::Currency():
    m_rupees(0),m_paise(0) {}
Currency::Currency(int r, int p) : m_rupees(r), m_paise(p) {}
    Currency::Currency(int r) : m_rupees(r),m_paise(0) {}
    Currency Currency::operator+(const Currency &ref) {
        m_paise = m_paise + ref.m_paise;
        if(m_paise>=100){
        m_rupees=m_rupees+(m_paise%100);}
        m_rupees = m_rupees + ref.m_rupees;
        cout<<m_rupees<<","<<m_paise;
    }
    Currency Currency::operator-(const Currency &ref) {
        m_paise = m_paise - ref.m_paise;
        if(m_paise<0){
        m_rupees=m_rupees-(m_paise%100);}
        m_rupees = m_rupees - ref.m_rupees;
        cout<<m_rupees<<","<<m_paise;
    }
    Currency Currency::operator+(int npaise) {
         m_paise = m_paise + npaise;
         if(m_paise>=100){
         m_rupees=m_rupees+(m_paise%100);}
         cout<<m_rupees<<","<<m_paise;
    }
    Currency Currency::operator-(int npaise) {
        m_paise = m_paise - npaise;
         if(m_paise<0){
         m_rupees=m_rupees-(m_paise%100);}
         cout<<m_rupees<<","<<m_paise;
    }
    Currency Currency:: operator++() {
        ++m_paise;
        if(m_paise>=100){
         m_rupees=m_rupees+(m_paise%100);}
        cout<<m_rupees<<","<<m_paise;
    }
    Currency Currency:: operator++(int dummy) {
        for(int i=0;i<dummy;i++)
        {
           ++m_paise;
        }
        if(m_paise>=100){
         m_rupees=m_rupees+(m_paise%100);}

        cout<<m_rupees<<","<<m_paise;
    }
    bool Currency:: operator==(const Currency &ref) {
        return m_rupees == ref.m_rupees && m_paise == ref.m_paise;
    }
    bool Currency::operator< (const Currency &ref) {
        if(m_rupees<ref.m_rupees)
        {
            cout<<"Rupees is less than referral Rupees.\n";
        }
        else if (m_paise<ref.m_paise)
        {
            cout<<"Paise is less than referral Paise.\n";
        }

    }
    bool Currency::operator> (const Currency &ref) {
        if(m_rupees>ref.m_rupees)
            {
            cout<<"Rupees is Greater than referral Rupees.\n";
        }
        else if (m_paise>ref.m_paise)
        {
            cout<<"Paise is Greater than referral Paise.\n";
        }
   }
    void Currency:: display() {
        std::cout << m_rupees << "," << m_paise;;
    }

