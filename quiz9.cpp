#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

#include <cmath> //Library to call all the
//fuctions of MATH of data in languague
//C++ #MasteryTopic01

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them


float distance (float x1, float y1,float x2, float y2) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a float function with the name "distance" and with float parameters a,b,c in order to
//have float results inside this function.
{

float dx=x2-x1; //Declarate decimal float variable dx. This is a math operation between 'x2' and 'x1' and stands for take
//the difference between those values and saved it in float variable 'dx'

float dy=y2-y1; //Declarate decimal float variable dy. This is a math operation between 'y2' and 'y1' and stands for take
//the difference between those values and saved it in float variable 'dy'

float dsquare=dx*dx+dy*dy; //Declarate decimal float variable dsquare. This is a math operation between 'dx' and 'dx' and stands for take
//the summa between those square values and saved it in float variable 'dsquare'

float result=sqrt(dsquare); //Declarate decimal float variable result. This is a math operation between 'dsquare' and 'result' and
//stands for take the square root of dsquare and saved it in float variable 'result'

return result; //With this command you return the value of the previus operations of "distance" function inside of the
//variable float total in order to call it in THE MAIN FUNCTION.


}
int main() {



float x1,y1,x2,y2; //Declarate decimal float variables x1, y1, x2, y2 in order to send the values in the distance function


cout<<distance(0,0,4,3)<<endl;//This operation stands for an output of the values 0 0 4 3 to each parameter of the distance function


return 0; // This command allows label the final of the function main ()

}
