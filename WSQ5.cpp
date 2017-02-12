#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

float summa(float a, float b, float c) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a float function with the name "summa" and with float parameters a,b,c in order to
//have float results inside this function.
{
  c = a + b; //This is a math operation between 'a' and 'b' and stands for adding
  //those values and saved it in float variable 'c'

  return c; //With this command you return the value of the previus operations of "summa" function inside of the variable float c in
  //order to call it in THE MAIN FUNCTION

}

float substraction(float a, float b, float c) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a float function with the name "substraction" and with float parameters a,b,c in order to
//have float results inside this function.

{

  c = a - b; //This is a math operation between 'a' and 'b' and stands for take
  //the difference between those values and saved it in float variable 'c'

  return c; //With this command you return the value of the previus operations of "substraction" function inside of the variable float c
  //in order to call it in THE MAIN FUNCTION


}

float product(float a, float b, float c) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a float function with the name "product" and with float parameters a,b,c in order to
//have float results inside this function.
{

  c = (a*b); //This is a math operation between 'a' and 'b' and stands for take
  //the product between those values and saved it in float variable 'c'

  return c; //With this command you return the value of the previus operations of "product" function inside of the variable float c
  //in order to call it in THE MAIN FUNCTION



}

int division(int a, int b, int d) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a int function with the name "division" and with int parameters a,b,d in order to
//have int results inside this function.
{

  d = a/b; //This is a math operation between 'a' and 'b' and stands for take
  //the division between those values and saved it in whole variable 'd'

  return d; //With this command you return the value of the previus operations of "division" function inside of the variable int d
  //in order to call it in THE MAIN FUNCTION



}

int reminder(int e, int f, int g) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a int function with the name "reminder" and with int parameters a,b,d in order to
//have int results inside this function.
{

  g = (e % f); //This is a math operation between 'e' and 'f' and stands for take
  //the remainder of integer division of the two numbers between those values and saved it in whole variable 'g'

  return g; //With this command you return the value of the previus operations of "reminder" function inside of the variable int g
  //in order to call it in THE MAIN FUNCTION


}





int main () //Begin of the program


{

  float a,b,c; //Declarate decimal variables
  int d,e,f,g; //Declarate whole variables

  cout<<"Give me one first number:"; //#WSQ5 command of out data in form of text
  cin>>a; // This command allows enter data for inputs. In this case this enters the
  //value of variable 'a'

  e=a;// This command allows giving the value of the declared decimal variable 'a' to
  //the declared whole variable 'e'. It converts one kind of decimal numeric value to
  //a whole variable

  cout<<"Give me one second number:"; //#WSQ1 command of out data in form of text
  cin>>b; // This command allows enter data for inputs. In this case this enters the
  //value of variable 'b'

  f=b; // This command allows giving the value of the declared decimal variable 'b' to
  //the declared whole variable 'f'. It converts one kind of decimal numeric value to
  //a whole variable

  c = summa(a,b,c); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "summa" TO MAKE THE TASK OF THE SUM VALUE OF THE NUMBERS WITH
  //THE HELP OF THE VARIABLE float'c' #Mastery06 and #Mastery07

  cout<<"The sum of the 2 numbers you put="<<a<<"+"<<b<<"="<<c<<endl; //#WSQ5 command of out data in form of text
  //In this text we show the authentic output of the value entered of a,b and c in the terminal interface #MasteryTopic04

  c = substraction(a,b,c); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "substraction" TO MAKE THE TASK OF SUBSTRACT THE VALUE OF
  //THE NUMBERS WITH THE HELP OF VARIABLE float 'c' #Mastery06 and #Mastery07

  cout<<"The difference of the 2 numbers you put="<<a<<"-"<<b<<"="<<c<<endl; //#WSQ5 command of out data in form of text
//In this text we show the authentic output of the value entered of a,b and c in the terminal interface #MasteryTopic04

  c = product(a,b,c); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "product" TO MAKE THE TASK OF MULTIPLY THE VALUE OF
  //THE NUMBERS WITH THE HELP OF VARIABLE float 'c' #Mastery06 and #Mastery07

  cout<<"The product of the 2 numbers you put="<<a<<"*"<<b<<"="<<c<<endl; //#WSQ5 command of out data in form of text
//In this text we show the authentic output of the value entered of a,b and c in the terminal interface #MasteryTopic04

  d = division(a,b,d); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "division" TO MAKE THE TASK OF DIVISION THE VALUE OF
  //THE NUMBERS WITH THE HELP OF VARIABLE INT 'd' #Mastery06 and #Mastery07

  cout<<"The integer based division of the two numbers (so no decimal point)="<<d<<endl; //#WSQ5 command of out data in form of text
//In this text we show the authentic output of the value entered d in the terminal interface #MasteryTopic04

  g = reminder(e,f,g); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "reminder" TO MAKE THE TASK OF REMAINDER THE VALUE OF
  //THE NUMBERS WITH THE HELP OF VARIABLE INT 'g' #Mastery06 and #Mastery07

  cout<<"Remainder="<<g<<endl; //#WSQ5 command of out data in form of text
//In this text we show the authentic output of the value entered of g in the terminal interface #MasteryTopic04








  }
