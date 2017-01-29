#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01 and #Mastery08 (Importing and using libraries)

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

int main () //Begin of the program
{
  int x,x2,n,op1=0,sum=0,i; //Declarate int variables x,x2,n,op1 initialized in 0, sum initialized in 0 and i

  cout<<"We will calculate the sum of integers in the range you provide."<<endl; //#Mastery04 command of out data in form of text
  cout<<"Please give us the lower bound:"; //#Mastery04 command of out data in form of text
  cin>>x;//#Mastery05 This command allows enter data for inputs. In this case the user enters the
  //value of variable 'x'
  x2=x; //In this instruction of the for loop, it tells that the value of the variable x is given
  //to the variable x2
  cout<<"Please give us the upper bound:"; //#Mastery04 command of out data in form of text
  cin>>n; //#Mastery05 This command allows enter data for inputs. In this case the user enters the
  //value of variable 'n'

//#Mastery14 use of loops with for
if (x<=n)
{
  for(i=x; i<=n ; i++) //With this command for is utilized as a loop FOR execute all the
  //instruccions that has this loop until that does not complete that the variable i
  // will be less or equal than n while it is increasing one in one in this variable i
  //inicialized from the value x that was an input value given by the user.
  {
    x=i; //In this instruction of the for loop, it tells that the value of the variable i is given
    //to the variable x

    op1=(1*x); //In this instruction of the for loop, it tells that the value of the variable x times 1 is given
    //to the variable op1

    sum=sum+op1; //In this instruction of the for loop, it tells we have an accumulator that tells the value of
    //the variable sum plus the variable op1 is given to the variable op1. In this case we
    //have a variable whose function is save the value of the operation sum until the loop
    //for finishes with all the sum of integers in the range you provide saved in variable sum


  } //end of FOR

  cout<<"The sum from "<<x2<<" to "<<n<<" is="<<sum<<endl;//command of out data in form of text
  //In this text we show the authentic output of the value entered of x and n in the terminal interface #MasteryTopic04
}

else
{
  cout<<endl;//comand of out data in form of text space
  cout<<"Error, Wrong other of limits, Run the program again and put the correct limits!!!"<<endl; //command of out data in form of text
}



} //END OF THE PROGRAM
