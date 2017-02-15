#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;


int main ()

{

int a,b,c,greater,greater2,greater3;

cout<<"Give me a first integer number:";
cin>>a;

cout<<"Give me a second integer number:";
cin>>b;

cout<<"Give me a third integer number:";
cin>>c;

if(a>=b && a>=c)
{
greater=a;


}

if(b>=a && b>=c)
{

greater=b;
}

if(c>=a && c>=b)
{

greater=c;


}

cout<<endl;
cout<<greater<<endl;

if(a<=b && a<=c)
{
  greater2=a;


}

if(b<=a && b<=c)
{
greater2=b;


}

if(c<=a && c<=b)
{
  greater2=c;


}


if(a==greater && b==greater2)
{

  greater3=c;

}


if(b==greater && c==greater2)
{
 greater3=a;

}

if(c==greater && a==greater2)
{

greater3=b;

}
if(c==greater && b==greater2)
{

  greater3=a;
}





cout<<greater3<<endl;

cout<<greater2<<endl;







}
