#include <iostream>//Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01
#include <cmath>//Library to call all the
//fuctions of MATH of data in languague
//C++ #MasteryTopic01

using namespace std;//In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them


 float numbertotal(int n, float *list) //This is the structure of a function where you have subrutines in order to make
 //different tasks, in this case we have a FLOAT function with the name "numbertotal" and with int parameter n,and float parameter
 //*list where I am using the #Mastery18 Creation and use of Arrays/Vectors in C++ in order to have float results inside this function.
 //Therefore, I am using the array in order to save each number entered by the user with combining it with a loop.
 {
    float total=0; //Declarate decimal variable total initialized in 0.

    for(int i=1; i<=n; i++) //With this command for is utilized as a loop FOR execute all the
    //instruccions that has this loop until that does not complete that the variable i
    // will be less or equal than n while it is increasing one in one in this variable i
    //inicialized from the value 0
    {
      cout<<"Give me "<< i <<" float number:"; //command of out data in form of text
      //In this text we show the authentic output of the value entered of i in the terminal interface #MasteryTopic04
      cin>>list[i]; // This command allows enter data for inputs. In this case this enters the
      //value of variable list[i where this i is the space of each value entered by the user from 1 to n I am using the #Mastery18
      //Creation and use of Arrays/Vectors in C++ ]

      total=total+list[i];//In this instruction of the for loop, it tells we have an accumulator that tells the value of
      //the variable total plus the variable list[i where this i is the space of each value entered by the user from 1 to n I am
      //using the #Mastery18 Creation and use of Arrays/Vectors in C++ ] is given to the variable total. In this case we
      //have a variable whose function is save the value of the operation list until the loop
      //for finishes with all the total of integers in the range you provide saved in variable total
    }

      return total; //With this command you return the value of the previus operations of "numbertotal" function inside of the
      //variable float total in order to call it in THE MAIN FUNCTION.

      }


  float averageofnumbers(float summa, int n)//This is the structure of a function where you have subrutines in order to make
  //different tasks, in this case we have a FLOAT function with the name "averageofnumbers" and with float parameter summa and int parameter
  //n in order to have float results inside this function.

  {
    float average; //Declarate decimal variable average
    average=(summa)/n; //This is a math operation between 'summa' and 'n' and stands for do the division between
    //those values and saved it in float variable 'average'

    return average; //With this command you return the value of the previus operations of "numbertotal" function inside of the
    //variable float total in order to call it in THE MAIN FUNCTION.


      }

  float standardop(float *list,float averagefinal, int n) //This is the structure of a function where you have subrutines in order to make
  //different tasks, in this case we have a FLOAT function with the name "standardop" and with int parameter n,and float parameter
  //*list where I am using the #Mastery18 Creation and use of Arrays/Vectors in C++ in order to have float results inside this function.
  //Therefore, I am using the array in order to save each number entered by the user with combining it with a loop.
  {
   float prevariance=0; //Declarate decimal variable prevariance initialized in 0.
   float variance; //Declarate decimal variable variance
   float standard; //Declarate decimal variable standard

   for(int i=1; i<=n; i++) //With this command for is utilized as a loop FOR execute all the
   //instruccions that has this loop until that does not complete that the variable i
   // will be less or equal than n while it is increasing one in one in this variable i
   //inicialized from the value 0
   {
   prevariance =prevariance + ((list[i]-averagefinal))*((list[i]-averagefinal)); //This is a math operation between 'prevariance' and
   //'list[i where this i is the space of each value entered by the user from 1 to n I am
   //using the #Mastery18 Creation and use of Arrays/Vectors in C++]' and stands for do the summa between
   //those values and saved it in float variable 'prevariance'

    }
    variance=(prevariance)/n; //This is a math operation between 'prevariance' and 'n' and stands for do the division between
    //those values and saved it in float variable 'variance'

    standard=sqrt(variance); //This is a math operation between 'standard' and 'variance' and stands for do the square root between
    //those values and saved it in float variable 'standard'


    return standard; //With this command you return the value of the previus operations of "standardop" function inside of the
    //variable float standard in order to call it in THE MAIN FUNCTION.

  }


int main() //Begin of the program
{

  int n; //Declarate int variable n
  int tam; //Declarate int variable n
  float summa; //Declarate decimal float variable summa
  float averagefinal; //Declarate decimal float variable averagefinal
  float standardfinal; //Declarate decimal float variable standardfinal
  float list[tam]; //Declarate decimal float variable list[tam]. This is where I am using the #Mastery18 Creation and use of Arrays/Vectors
  //where I am declarating a float variable list as an array with a size of the variable tam because in an array you need to have a size in
  //the variable. Futhermore, where you have to pass the array as a parameter, you have to write in this case float *list .


  cout<<"Give me the number of the elements in the array:"; //#WSQ5 command of out data in form of text. This is to ask the user to give
  //for the number of the elements in the array.
  cin>>n; // This command allows enter data for inputs. In this case this enters the
  //value of variable 'n'

 summa=numbertotal(n,list);//THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "numbertotal" TO MAKE THE TASK OF
 //THE total VALUE OF THE NUMBER WITH THE HELP OF THE VARIABLE float 'summa' with the parameters n and list (array) #Mastery06 and
 //#Mastery07
 cout<<"The total of the numbers is: "<<summa<<endl; //command of out data in form of text
 //In this text we show the authentic output of the value entered of summa in the terminal interface #MasteryTopic04


 averagefinal=averageofnumbers(summa,n);//THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "averageofnumbers" TO MAKE THE TASK OF
 //THE average VALUE OF THE NUMBER WITH THE HELP OF THE VARIABLE float 'averagefinal' with the parameters n and summa #Mastery06 and
 //#Mastery07
 cout<<"The average of the numbers is: "<<averagefinal<<endl; //command of out data in form of text
 //In this text we show the authentic output of the value entered of averagefinal in the terminal interface #MasteryTopic04

 standardfinal=standardop(list,averagefinal,n); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "standarddop" TO MAKE THE TASK OF
 //THE standard deviation VALUE OF THE NUMBER WITH THE HELP OF THE VARIABLE float 'standardfinal' with the parameters list (array)
 // averagefinal and n #Mastery06 and #Mastery07
 cout<<"The standard deviation of those numbers is: "<<standardfinal<<endl; //command of out data in form of text
 //In this text we show the authentic output of the value entered of standardfinal in the terminal interface #MasteryTopic04




}
