#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

int factorial(int n) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have aN INT function with the name "factorialfunction" and with int parameters n,factorial in order to
//have int results inside this function.
{

  if (n==0) //#Mastery10 use of the if statement //This command allows the condition if the value of i
  //is equal to 0 and when this condition will be true, the tasks inside of the statement will execute.
  // In this case if the value of i is equal than 0 this will occur:
  {
    return 1; //In this instruction of the for loop, it tells that the value 1 is given
    //to the variable factorial because this is an accumulator to start the operation of factorial in 0!=1
  }
  return n*factorial(n-1);



}



int main () //Begin of the program

{
  int n,factorialfinal; //Declarate integer variables
  char res='Y'; //Declarate char variable in form of letter

//#Mastery14 use of loops with for
  while(res=='Y') //With this command for is utilized as a loop FOR execute all the
  //instruccions that has this loop until that does not complete that the variable res
  // will be equal to 'Y'
  {
    cout<<"Give me a non-negative integer in order to tell you n!:"; //#WSQ5 command of out data in form of text
    cin>>n; // This command allows enter data for inputs. In this case this enters the
    //value of variable 'n'
    if(n>=0) //#Mastery10 use of the if statement //This command allows the condition if the value of n
    //is higher or equal to 0 and when this condition will be true, the tasks inside of the statement will execute.
    // In this case if the value of n is higher or equal than 0 this will occur:
    {



    factorialfinal=factorial(n); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "factorialfunction" TO MAKE THE TASK OF
    //THE factorial VALUE OF THE NUMBER WITH THE HELP OF THE VARIABLE int 'factorial' #Mastery06 and #Mastery07

    cout<<endl; //comand of out data in form of text space
    cout<<"The n! of your number is "<<n<<"!="<<factorialfinal<<endl; //command of out data in form of text
    //In this text we show the authentic output of the value entered of n and factorial in the terminal interface #MasteryTopic04
    cout<<endl; //comand of out data in form of text space

      }

    cout<<"Would you like to try another number for n! (Y=YES/ N=NO)?:"; //command of out data in form of text, in this case it tells
    //the user to give an input in form of text Y or N
    cin>>res; // This command allows enter data for inputs. In this case this enters the
    //value of variable 'res'


  } //END OF FOR

    cout<<endl; //comand of out data in form of text space
    cout<<"We wish you a nice day!!!!!!"<<endl; //command of out data in form of text, in this case it tells
    //the user to tell the user to have a nice day





}//END OF THE PROGRAM
