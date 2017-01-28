#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them


int main () //Begin of the program
{
  float temp,c; //Declarate decimal variables temp and c

  cout<<"What is the temperature in Fahrenheit?:"; //#Mastery04 command of out data in form of text
  cin>>temp; //#Mastery05 This command allows enter data for inputs. In this case this enters the
  //value of variable 'temp'

  c=5*(temp-32)/9; //This process makes the mathematical convertion from fahrenheit to celsius

  cout<<"A temperature of "<< temp <<"°degrees Fahrenheit is "<< c <<"° in Celsius"<<endl; //command of out data in form of text
  //In this text we show the authentic output of the value entered of temp and c in the terminal interface #MasteryTopic04


  if(temp>=212) //#Mastery10 use of the if statement //This command allows the condition if the value of temp
  //is higher or equal to 212 and when this condition will be true, the tasks inside of the statement will execute.
  // In this case if the value is higher or equal than temp this will occur:
  {
    cout<<"Water does boil at this temperature"<<endl; //#Mastery04 command of out data in form of text
    cout<<"Water in state liquid and gas"<<endl; //#Mastery04 command of out data in form of text
  }

  else if(temp<=0) //#Mastery12 Nesting of conditional statements (ifs inside ifs) This is for adding other if condition
  //if the last if isn´t true. In this new nesting statements asks the value of temp lower or equal than 0
  {
    cout<<"Water in state solid"<<endl; //#Mastery04 command of out data in form of text

  }

  else //#Mastery11 Use of else with a conditional if: // if the condition does not achieve on the other hand you will do this:
  {

    cout<<"Water does NOT!!! boil at this temperature"<<endl; //#Mastery04 command of out data in form of text

  }










}// End of the program
