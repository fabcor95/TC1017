#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01
#include <cmath> //Library to call all the
//fuctions of MATH of data in languague
//C++ #MasteryTopic01


using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

double result,result2; //Declarate decimal and global variables


double square_root (double x) //FIRST DOUBLE FUNCTION
{


if (x>=0) //Mastery11 condition of if-else:
{
  result = sqrt(x);
  cout<<"The square root of the number:"<<result<<endl; // command of out data in form of text
  //In this text we show the authentic output of the value entered of cbrt x in varible result2 in the terminal interface #MasteryTopic04



}
else //Mastery11 condition of if-else:
{

cout<<"FOR THE SQUARE ROOT, THE RESULT IS IMAGINARY!!!!"<<endl; //Mastery04 command of out data in form of text


}

}

double cube_root(double x) //SECOND DOUBLE FUNCTION

{


result2=cbrt(x); //THIS COMMAND IS FOR CUBE ROOT

cout<<"The cube root of the number:"<<result2<<endl; // command of out data in form of text
//In this text we show the authentic output of the value entered of cbrt x in varible result2 in the terminal interface #MasteryTopic04


}


int main() //Begin of the program
{

  double x; //Declarate decimal variable

  cout<<"GIVE ME A NUMBER:"; //Mastery04 command of out data in form of text
  cin>>x;

  square_root(x); //CALL THE FUNCTION OF SQUARE ROOT
  cube_root(x); //CALL THE FUNCTION OF CUBE ROOT

  cout<<"THANKS!!"<<endl; //Mastery04 command of out data in form of text

  return 0;// This command allows label the final of the function main ()


} //End of the program
