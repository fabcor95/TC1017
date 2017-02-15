#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;


int main ()
{

  int year;
  cout<<"Give me a year with 4 integer digits:";
  cin>>year;
  if (year<1752)
  {cout<<"There were no leap years at this time"<<endl;}


  if(year>=1752 && (year%4)==0 && (year%400)==0 && (year%100)!=0)
  {
    cout<<"The year is a leap year"<<endl;

  }

  if(year>=1752 && (year%100)==0 || (year%4)!=0)
  {
    cout<<"The year is not a leap year"<<endl;

  }

  if((year%4)==0 && (year%100)!=0)
  {

     cout<<"The year is a leap year"<<endl;


  }





}
