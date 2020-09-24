#include <iostream>
#include <mytime.h>

using namespace std;

MyTime::MyTime():m_hours(0),m_minutes(0), m_seconds(0) { }
MyTime::MyTime(int h, int m, int s) : m_hours(h), m_minutes(m), m_seconds(s) {
    std::cout << m_hours << ":" << m_minutes << ":" << m_seconds <<"\n";
}
MyTime::MyTime(int h, int m) : m_hours(h), m_minutes(m), m_seconds(0){}
MyTime MyTime::operator+(const MyTime &ref) {
    int tmins=0,thrs=0;
    int tsec = m_seconds + ref.m_seconds;
    if (tsec>60) {
        tmins+=(tsec/60);
        tsec = tsec%60;
    } else if(tsec==60)
        tmins+=1;
    tmins+=m_minutes + ref.m_minutes;
    if(tmins>60) {
        thrs+=(tmins/60);
        tmins = tmins%60;

    }
    thrs+=m_hours + ref.m_hours;
    cout<<thrs<<":"<<tmins<<":"<<tsec;
}
MyTime MyTime::operator-(const MyTime &ref) {
    int tmins=0,thrs=0;
    int tsec = m_seconds - ref.m_seconds;
    if(tsec<0) {
        tmins-=1;
        tsec=abs(tsec);
    }
    if (tsec>60) {
        tmins-=(tsec/60);
        tsec = tsec%60;
    } else if(tsec==60)
        tmins+=1;
    tmins-=m_minutes - ref.m_minutes;
    if(tmins>60) {
        thrs+=(tmins/60);
        tmins = tmins%60;

    }
    thrs+=m_hours - ref.m_hours;
    if(thrs<0)
        thrs=0;
    cout<<thrs<<":"<<tmins<<":"<<tsec;
}
MyTime MyTime::operator+(int nsec) {
    int thrs=0;
    int tsec=m_seconds+nsec;
    int tmins = m_minutes;
    if (tsec>60) {
        tmins-=(tsec/60);
        tsec = tsec%60;
    }

     if(tmins>60) {
        thrs+=(tmins/60);
        tmins = tmins%60;

    }
    thrs+=m_hours;
    cout<<thrs<<":"<<tmins<<":"<<tsec;

  }
MyTime MyTime::operator-(int nsec) {
    int thrs=0;
    int tsec=m_seconds-nsec;
    int tmins = m_minutes;
    if (tsec>60) {
        tmins-=(tsec/60);
        tsec = tsec%60;
    }
     if(tmins>60) {
        thrs+=(tmins/60);
        tmins = tmins%60;

    }
    else if(tmins<0)
    {
        thrs-=1;
        tmins=abs(tmins);

    }
    thrs+=m_hours;
    cout<<thrs<<":"<<tmins<<":"<<tsec;

  }
MyTime MyTime::operator++() {
     ++m_seconds;

    if(m_seconds>=60)
    {
       m_minutes+=(m_seconds/60);
        m_seconds = m_seconds%60;
    }
    if(m_minutes>=60)
    {
       m_hours+=(m_minutes/60);
        m_minutes = m_minutes%60;
    }

    cout<<m_hours<<":"<<m_minutes<<":"<<m_seconds;
  }
MyTime MyTime::operator++(int d) {
    for(int i=0;i<d;i++)
    {++m_seconds;
    }
    if(m_seconds>60)
    {
       m_minutes+=(m_seconds/60);
        m_seconds = m_seconds%60;
    }
    if(m_minutes>60)
    {
       m_hours+=(m_minutes/60);
        m_minutes = m_minutes%60;
    }
    cout<<m_hours<<":"<<m_minutes<<":"<<m_seconds;
  }

MyTime MyTime::operator+=(int d) {

    m_seconds+=d;
    if(m_seconds>60)
    {
       m_minutes+=(m_seconds/60);
        m_seconds = m_seconds%60;
    }
    if(m_minutes>60)
    {
       m_hours+=(m_minutes/60);
        m_minutes = m_minutes%60;
    }
    cout<<m_hours<<":"<<m_minutes<<":"<<m_seconds;
  }
 bool MyTime::operator==(const MyTime &ref) {
   return m_hours == ref.m_hours && m_minutes == ref.m_minutes && m_seconds == ref.m_seconds;
  }
  bool MyTime::operator<(const MyTime &ref) {
   if(m_hours<ref.m_hours)
    return true;
   if(m_hours==ref.m_hours)
   {
       if(m_minutes<ref.m_minutes)
        return true;
       if(m_minutes==ref.m_minutes)
       {
           if(m_seconds<ref.m_seconds)
            return true;
       }
       return false;
   }
   return false;
  }
  bool MyTime::operator>(const MyTime &ref) {
   if(m_hours>ref.m_hours)
    return true;
   if(m_hours==ref.m_hours)
   {
       if(m_minutes>ref.m_minutes)
        return true;
       if(m_minutes==ref.m_minutes)
       {
           if(m_seconds>ref.m_seconds)
            return true;
       }
       return false;
   }
   return false;
  }
void MyTime::display () {
    std::cout<< m_hours <<":" <<m_minutes << ":" <<m_seconds;
}


