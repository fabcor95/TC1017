#include <iostream>//Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01 and #Mastery08 (Importing and using libraries)

#include <cstdlib> //Library to call all the
//fuctions of random numbers in languague
//C++ #MasteryTopic01 and #Mastery08 (Importing and using libraries)

#include <ctime> //Library to call all the
//fuctions of time in languague
//C++ #MasteryTopic01 and #Mastery08 (Importing and using libraries)

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

int main () //Begin of the program
{

  int iSecret, iGuess,guesses=0; //Declarate int variables iSecret, iGuess and guesses initialized in 0

  srand((int)time(0)); //Initialize random seed, the "seed" is a starting point for
  //the sequence and the guarantee is that if you start from the same seed you will
  //get the same sequence of numbers.


  iSecret = (rand() % 100) + 1; /* generate secret number between 1 and 100: */

//Next we use the #Mastery13 Use of loops with "while" and "do while"
// This command is the loop do-while that allows you in doing at least once of
//the instruccions in this loop and while this case of
//iSecret don´t be equal than iGuess, it will execute forever every instructions of the loop
//label in this loop.
  do{

    cout<<"I have a secret number chosen between 1 and 100."<<endl; //#Mastery04 command of out data in form of text
    cout<<"Guess the number (1 to 100): ";//#Mastery04 command of out data in form of text
    cin>>iGuess; //#Mastery05 This command allows enter data for inputs. In this case this enters the
    //value of variable 'iGuess'
    guesses++; //This command is the process of guesses=guesses+1 where in this i am using as a counter
    //of how many guesses the user has try in guess the number.

    if(iSecret<iGuess) //#Mastery10 use of the if statement //This command allows the condition if the value of iSecret
    //is lower of the value of iGuess and when this condition will be true, the tasks inside of the statement will execute.
    // In this case if the value iSecret is lower than iGuess this will occur:
    {
    cout<<"I'm sorry but "<<iGuess<<" is too high,try again"<<endl; //command of out data in form of text
    //In this text we show the authentic output of the value entered of iGuess in the terminal interface #MasteryTopic04

    }

    if(iSecret>iGuess) //#Mastery10 use of the if statement //This command allows the condition if the value of iSecret
    //is higher of iGuess and when this condition will be true, the tasks inside of the statement will execute.
    // In this case if the value iSecret is higher than iGuess this will occur:
    {
      cout<<"I'm sorry but "<<iGuess<<" is too low,try again"<<endl; //command of out data in form of text
      //In this text we show the authentic output of the value entered of iGuess in the terminal interface #MasteryTopic04
    }




  }while(iSecret!=iGuess); // This command is the loop do-while that allows in doing
  //at least 1 time of the instructions written in this loop and while in this case
  //The value of iSecret don't be equal to the value of iGuess, it will execute forever
  //all of the instrucccions lable in this loop.

  cout<<"You got it!!!!. The right answer is indeed "<<iGuess<<endl; //command of out data in form of text
  //In this text we show the authentic output of the value entered of iGuess in the terminal interface #MasteryTopic04
  cout<<"You made "<< guesses << " guesses to get the right number."<<endl; //command of out data in form of text
  //In this text we show the authentic output of the value of guesses in the terminal interface #MasteryTopic04





  return 0; // This command allows label the final of the function main ()



}
