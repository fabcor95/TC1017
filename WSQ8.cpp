#include <iostream>//Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

#include <string>//Library to call all the
//fuctions of strings of data in languague
//C++ #MasteryTopic19

using namespace std;//In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

#include "BigIntegerLibrary.hh" //Library to call all the
//fuctions big numbers of data and convert numbers to strings and viceversa in languague
//C++ #MasteryTopic01

bool ispalindrome(BigInteger n) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a bool function with the name "ispalindrome" and with Biginteger parameter n in order to
//have bool results inside this function that are false (0) or true (1).
{

  string x = bigIntegerToString (n); //Declarate string variable x. Then we have an assignation operation between 'n' and 'x' and stands for
  //convert the numeric value of the parameter n to string and save this new value of string to string variable 'x'

  x= string (x.rbegin(),x.rend()); //This assignation helps to make the operation of reverse the string value from the beginning
  //(x.rbegin()) to the end (x.rend()). Therefore all that string will be reverse and that reverse value wil have it the string variable x

  BigInteger y = stringToBigInteger(x); //Declarate BigInteger variable y. Then we have an assignation operation between 'y' and 'x' and
  //stands for convert the reverse string value of x to reverse and numeric BigInteger value and save this new value of BigInteger to
  //BigInteger variable 'y'

  if (n == y) //#Mastery10 use of the if statement. This command allows the condition if the value of
  //the BigInteger is equal to the BigInteger reversed y and when this condition will be true, the tasks
  //inside of the statement will execute.
  // In this case if the value is true this will occur:
  {
    return true; //The bool function ispalindrome sends to the main program the value true
  }


  else //#Mastery11 Use of else with a conditional if: // if the condition does not achieve on the other hand you will do this:
  {
      return false; //The bool function ispalindrome sends to the main program the value false
         }

} //end of bool function

BigInteger becomepalindrom(BigInteger n) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a Biginteger function with the name "becomepalindrom" and with Biginteger parameter n in order to
//have BigInteger results inside this function that are big.
{
  BigInteger pizzacandidate; //Declarate BigInteger variable pizzacandidate.

  string x = bigIntegerToString (n); //Declarate string variable x. Then we have an assignation operation between 'n' and 'x' and stands for
  //convert the numeric value of the parameter n to string and save this new value of string to string variable 'x'


  x=string(x.rbegin(),x.rend()); //This assignation helps to make the operation of reverse the string value from the beginning
  //(x.rbegin()) to the end (x.rend()). Therefore all that string will be reverse and that reverse value wil have it the string variable x

  BigInteger y = stringToBigInteger(x); //Declarate BigInteger variable y. Then we have an assignation operation between 'y' and 'x' and
  //stands for convert the reverse string value of x to reverse and numeric BigInteger value and save this new value of BigInteger to
  //BigInteger variable 'y'

  pizzacandidate = y + n; //This is a math operation between 'y' and 'n' and stands for adding
  //those values and saved it in BigInteger variable 'pizzacandidate'
  return pizzacandidate; //The BigInteger function becomepalindrom sends to the main program the BigInteger value of pizzacandidate

}

int main() { //Begin of the program

  int lower, higher, counterpalindrome = 0, becomepalindrome = 0, Lychrelcounter = 0; //Declarate integers variables lower for the lower
  //bound,higher for the upper bound, counterpalindrome initialized in 0 for being the counter of how many natural palindromes are,
  //becomepalindrome initialized in 0 for being the counter of how many non-lychrels that could become palindrome with the reverse are,
  //Lychrelcounter initialized in 0 for being the counter of how many Lychrel candidates are.

  BigInteger candidate; //Declarate BigInteger variable 'candidate' with a huge value

  cout << "Give me the lower bound of numbers to consider:"; //command of out data in form of text
  cin >> lower;// This command allows enter data for inputs. In this case this enters the
  //value of variable 'lower'

  cout << "Give me the upper bound of numbers to consider:"; //command of out data in form of text
  cin >> higher;// This command allows enter data for inputs. In this case this enters the
  //value of variable 'higher'

  cout<<endl<<"Calculating whether each value is one of: palindrome, non-lychrel or Lychrel candidate"<<endl<<endl;
  //command of out data in form of text and text spaces

  for(int i=lower; i<=higher; i++) //With this command for is utilized as a loop FOR execute all the
  //instruccions that has this loop until that does not complete that the variable i
  // will be less or equal than the variable higher while it is increasing one in one in this variable i
  //inicialized from the value of the variable lower
  {


    if(ispalindrome(i) == true) //#Mastery10 use of the if statement. This command allows the condition if the value of
    //the bool function ispalindrome with the parameter the value of i is true and when this condition will be true, the tasks
    //inside of the statement will execute.
    // In this case if the value is true this will occur:
    {
      counterpalindrome = counterpalindrome + 1; //This is a math operation between 'counterpalindrome' and '1' and stands for
      //do the sum between those values and saved it in the integer variable 'counterpalindrome'


    }


    else //#Mastery11 Use of else with a conditional if: // if the condition does not achieve on the other hand you will do this:

    {

      candidate = i; // This command allows giving the value of the declared decimal variable 'i' to
      //the declared int variable 'candidate'.
      int counter = 1; //Declarate an int variable called counter to be the counter of the 30 iterations of applying the addition
      //to the inverse.

      while(ispalindrome(candidate)==false && counter <= 30) //With this command while is utilized as a loop WHILE execute all the
      //instruccions that has this loop until that does not complete that the value of the bool function ispalindrome with the parameter
      // of the value of variable candidate will be equal to false and the counter will be less or equal than 30.
      {
        candidate = becomepalindrom(candidate); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "becomepalindrom" TO MAKE THE TASK OF THE SUM
        //VALUE OF THE NUMBERS WITH THE HELP OF THE VARIABLE int'candidate' and with the parameter of the variable candidate
        // #Mastery06 and #Mastery07

        counter++; //This is a math operation between 'counter' and '1' and stands for
        //do the sum between those values and saved it in variable 'counter'

        if (ispalindrome(candidate) == true) //#Mastery10 use of the if statement. This command allows the condition if the value of
        //the bool function ispalindrome with the parameter the value of candidate is true and when this condition will be true, the tasks
        //inside of the statement will execute.
        // In this case if the value is true this will occur:
        {
          becomepalindrome++; //This is a math operation between 'becomepalindrome' and '1' and stands for
          //do the sum between those values and saved it in variable 'becomepalindrome'
        }

      }//end of while

    }//end of else

    // why out? palindrome or counter 30+
    if (ispalindrome(candidate) == false) //#Mastery10 use of the if statement. This command allows the condition if the value of
    //the bool function ispalindrome with the parameter the value of candidate is false and when this condition will be true, the tasks
    //inside of the statement will execute.
    {
      Lychrelcounter++; //This is a math operation between 'Lychrelcounter' and '1' and stands for
      //do the sum between those values and saved it in variable 'Lychrelcounter'
      cout << "Found Lychrel number: " << i << endl; //In
      //this text we show the authentic output of the value entered of i in the terminal interface #Mastery20 Validated user
      //input (ensure correct / expected data entry)
    }

  }// END OF FOR


  cout << "And the results are for the range "<<lower<<" to "<<higher<<endl; //In
  //this text we show the authentic output of the value entered of lower and higher in the terminal interface #Mastery20 Validated user
  //input (ensure correct / expected data entry)

  cout << "Natural Palindromes:" << counterpalindrome<<endl;//In
  //this text we show the authentic output of the value entered of counterpalindrome in the terminal interface #Mastery20 Validated user
  //input (ensure correct / expected data entry)
  cout << "Non Lychrels (become palindrome):" << becomepalindrome<<endl; //In
  //this text we show the authentic output of the value entered of becomepalindrome in the terminal interface #Mastery20 Validated user
  //input (ensure correct / expected data entry)

  cout << "Lychrel candidates:" << Lychrelcounter<<endl<<endl; //In
  //this text we show the authentic output of the value entered of Lychrelcounter in the terminal interface #Mastery20 Validated user
  //input (ensure correct / expected data entry)

  return 0; // This command allows label the final of the function main ()
}
