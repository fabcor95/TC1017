#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

int main() //Begin of the program
{
  float a,b,c; //Declarate decimal variables
  int d,e,f,g; //Declarate whole variables


  cout << "Give me one first number:"; //#WSQ1 command of out data in form of text
  cin >> a; // This command allows enter data for inputs. In this case this enters the
  //value of variable 'a'


  g=a; // This command allows giving the value of the declared decimal variable 'a' to
  //the declared whole variable 'g'. It converts one kind of decimal numeric value to
  //a whole variable



  cout << "Give me one second number:"; //#WSQ1 command of out data in form of text
  cin >> b;// This command allows enter data for inputs. In this case this enters the
  //value of variable 'b'

  e=b;// This command allows giving the value of the declared decimal variable 'b' to
  //the declared whole variable 'e'. It converts one kind of decimal numeric value to
  //a whole variable



  c = a + b; //This is a math operation between 'a' and 'b' and stands for adding
  //those values and saved it in float variable 'c'
  cout<<"The sum of the 2 numbers you put="<<a<<"+"<<b<<"="<<c<<endl; //#WSQ1 command of out data in form of text
  //In this text we show the authentic output of the value entered of a,b and c in the terminal interface #MasteryTopic04

  c = a-b;//This is a math operation between 'a' and 'b' and stands for take
  //the difference between those values and saved it in float variable 'c'


  cout<<"The difference of the 2 numbers you put="<<a<<"-"<<b<<"="<<c<<endl; //#WSQ1 command of out data in form of text
//In this text we show the authentic output of the value entered of a,b and c in the terminal interface #MasteryTopic04



  c = (a*b); //This is a math operation between 'a' and 'b' and stands for take
  //the product between those values and saved it in float variable 'c'
  cout<<"The product of the 2 numbers you put="<<a<<"*"<<b<<"="<<c<<endl; //#WSQ1 command of out data in form of text
//In this text we show the authentic output of the value entered of a,b and c in the terminal interface #MasteryTopic04

  d = a/b; //This is a math operation between 'a' and 'b' and stands for take
  //the division between those values and saved it in whole variable 'd'
  cout<<"The integer based division of the two numbers (so no decimal point)="<<d<<endl; //#WSQ1 command of out data in form of text
//In this text we show the authentic output of the value entered d in the terminal interface #MasteryTopic04
  f = g%e; //This is a math operation between 'g' and 'e' and stands for take
  //the remainder of integer division of the two numbers between those values and saved it in whole variable 'f'
  cout<<"Remainder="<<f<<endl; //#WSQ1 command of out data in form of text
//In this text we show the authentic output of the value entered of f in the terminal interface #MasteryTopic04

  return 0; // This command allows label the final of the function main ()


} //End of the program
