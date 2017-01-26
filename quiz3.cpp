#include <iostream>
#include <cmath>


using namespace std;
double result,result2;


double square_root (double x)
{


if (x>=0)
{
  result = sqrt(x);
  cout<<"The square root of the number:"<<result<<endl;


}
else
{

cout<<"FOR THE SQUARE ROOT, THE RESULT IS IMAGINARY!!!!"<<endl;


}

}

double cube_root(double x) {


result2=cbrt(x); //THIS COMMAND IS FOR CUBE ROOT

cout<<"The cube root of the number:"<<result2<<endl;

}


int main()
{

  double x;

  cout<<"GIVE ME A NUMBER:";
  cin>>x;

  square_root(x); //CALL THE FUNCTION OF SQUARE ROOT
  cube_root(x); //CALL THE FUNCTION OF CUBE ROOT
  
  cout<<"THANKS!!"<<endl;

  return 0;


}
