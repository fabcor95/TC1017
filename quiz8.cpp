#include <iostream>//Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

int fibonacciLoop(int n){ //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have an INT function with the name "fibonacciLoop" and with int parameter n in order to
//have int results inside this function.
  n=0; // This command allows giving the value of the parameter 'n' to 0

  int fibolop=1;
  int nbackup;
// 0,1,1,2,3,5,8,13,21
  for(int i=0; i<=10; i++) //With this command for is utilized as a loop FOR execute all the
  //instruccions that has this loop until that does not complete that the variable i
  // will be less or equal than 10 while it is increasing one in one in this variable i
  //inicialized from the value 0
  {
    cout<<" "; //comand of out data in form of text space
    cout<<n; // This command allows enter data for inputs. In this case this enters the
    //value of variable 'n'

    nbackup=fibolop; //before this operation, the value of fibolop won't increase until this next operation, RIGHT NOW IT stays fibolop=1

    fibolop=fibolop+n;

   n=nbackup;

  }


}

int fibonacci(int n){  //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have an INT function with the name "fibonacci" and with int parameter n in order to
//have int results inside this function.
  if(n==0||n==1){ //#Mastery10 use of the if statement //This command allows the condition if the value of n
  //is equal to 0 or 1 when this condition will be true, the tasks inside of the statement will execute.
  // In this case if the value of n is equal than 0 or 1 this will occur:
    return n; //With this command you return the value of the int variable n in order to show it in THE MAIN FUNCTION

  } else { //#Mastery11 Use of else with a conditional if: // if the condition does not achieve on the other hand you will do this:
    return fibonacci(n-2) + fibonacci(n-1); //With this command you return the value of the previus operations of "fibonacci" function
    //inside the function where is decreasing the value of n by 2, plus the function where is jumping the value of n by 1
    // each time that its called in order to callthe fibonacci in THE MAIN FUNCTION .This to fulfiled the #Mastery12 Use of recursion
    //for repetitive algorithms
  }
}



int main()
{

  int n;
  int fibolop;

fibolop=fibonacciLoop(n); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "fibonacciLoop" TO MAKE THE TASK OF
//THE fibonacci SERIE OF THE NUMBER WITH THE HELP OF THE VARIABLE int 'fibolop' #Mastery06 and #Mastery07


  cout<<endl;

  for(int i=0; i<=10;i++)
  {
     cout<<fibonacci(i); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "fibonacci" TO MAKE THE CALL IN THE TASK OF
     //THE fibonacci SERIE OF THE NUMBER WITH THE HELP OF THE COMAND I' #Mastery06 and #Mastery07
     cout <<" "<< n;


            }

cout<<endl;


return 0;
}
