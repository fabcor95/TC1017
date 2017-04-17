#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

#include <iomanip> //Library to call all the
//fuctions of inputs and outputs of manipulate data in languague
//C++ #MasteryTopic01

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

float factorial(int n) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a float function with the name "factorial" and with int parameters n in order to
//have int results inside this function.
{
if(n==0) //#Mastery10 use of the if statement //This command allows the condition if the value of n
       //is equal to 0 and when this condition will be true, the tasks inside of the statement will execute.
       // In this case if the value of n is equal than 0 this will occur:
{

  return 1; //return the value 1 to the function calculuate_e

}

else //#Mastery11 Use of else with a conditional if: // if the condition does not achieve on the other hand you will do this:
{

return n*factorial(n-1); //return the recursion value n!=n (n-1)! to the function calculuate_e like we did in the last WSQ6

}


    }


float calculuate_e (float precision) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a FLOAT function with the name "calculuate_e" and with float parameter precision
//in order to have float results inside this function.

{

float e = 1; //Declarate float variable e initialized in 1

for (int i=1; i<=precision; i++) //With this command for is utilized as a loop FOR execute all the
//instruccions that has this loop until that does not complete that the variable i
// will be less or equal than the numerical value of precision variable while it is increasing one in one in this variable i
//inicialized from the value 1
{
   e = e + 1/(factorial(i)); //This is a math operation between 'e' and
   // the value of the float function factorial with the int parameter i and stands for
    //do the sum of e and the inverse operation of the factorial function with the i parameter and saved it in the float
    //variable 'e', this is the operation of the infinite series thanks to the recursion #Mastery16 Use of recursion for repetitive
    //algorithms

   }

cout<< fixed <<setprecision(precision)<<endl; //float notation for manipulator of significant figures or decimal points after
//the decimal point. Hence, for example of precision=5 then the value will be setprecision(5) and with fixed after the decimal point
//this shows for the number of decimal places that the user wants. In consequence the value of variable e wil suffer after this operation

return e; //With this command you return the value of the previus operations of "calculuate_e" function inside of the
//variable float e in order to call it in THE MAIN FUNCTION

}


int main()

{
float precision; //Declarate float variable precision

cout<<"Specify the number of decimal points of accuracy: "; //#Mastery04 command of out data in form of text
cin>>precision; //#Mastery05 This command allows enter data for inputs. In this case this enters the
//value of variable 'precision'

cout<<"The estimation of e with "<<precision<<" decimal points is e = "<<calculuate_e (precision)<<endl; //command of out data in form of text
//In this text we show the authentic output of the value entered of precision in the terminal interface #MasteryTopic04

return 0; // This command allows label the final of the function main ()
}
