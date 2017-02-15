#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;


int main ()

{

  char h,j;
  int a,k;
  float b,w;

  cout<<"Input a single character, followed by :";
  cin>>h;

  cout<<"Input an integer, followed by :";
  cin>>a;
  k=a;

  cout<<"Input a float, followed by :";
  cin>>b;
  w=b;


  a=(int)h;
  cout<<"The character "<< h <<" when cast to an int gives value="<<a<<endl;

  b=(float)h;
  cout<<"The character "<< h <<" when cast to a float gives value="<<b<<endl;

  h=(char)a;

  cout<<"The integer "<< k <<" when cast to a char gives value ="<< h <<endl;
  b=(float)a;

  cout<<"The integer "<< k <<" when cast to a float gives value="<< b <<endl;
  h=(char)b;

  cout<<"The float "<< w <<" when cast to a char gives value="<< h << endl;

  a=(int)b;

  cout<<"The float "<< w <<" when cast to an int gives value="<< a <<endl;






}
