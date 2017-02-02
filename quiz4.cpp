#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01 and #Mastery08 (Importing and using libraries)

using namespace std;

int result,result2;

int minimumThree(int x, int y, int z){

if(x<=y && x<=z)
{

result=x;

}


else if(y<=x && y<=z)
{

result=y;

}

else
{

result=z;

}

}  // returns the value that is smallest of x, y and z

int sumSquares(int x, int y, int z) {

  return (x*x + y*y + z*z);



}  // returns the value of the sum of squares of x, y, z


int main()
{
   int x, y, z;

   cout<<"GIVE A FIRST NUMBER:";
   cin>>x;

   cout<<"Give A SECOND NUMBER:";

   cin>>y;

   cout<<"GIVE A THIRD NUMBER:";
   cin>>z;

  x= minimumThree (x,y,z); //CALL THE FUNCTION OF THE MINIUM VALUE OF THE NUMBERS


  cout<<"THE MINIUM VALUE OF THE NUMBERS:"<<result<<endl; //CALL THE FUNCTION OF THE MINIUM VALUE OF THE NUMBERS

  y = sumSquares(x,y,z); //CALL THE FUNCTION OF THE SUM OF THE NUMBERS

  cout<<"THE SUM OF THE NUMBERS:"<<y<<endl; //CALL THE FUNCTION OF THE SUM OF THE NUMBERS




  return 0;



}
