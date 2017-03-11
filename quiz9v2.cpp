#include <iostream>//Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

#include <cmath>//Library to call all the
//fuctions of MATH of data in languague
//C++ #MasteryTopic01

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

struct Point { //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a STRUCT function with the name "Point".

  float x;  //Declarate decimal variable x
  float y;  //Declarate decimal variable y


};


float distance (Point& p1) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a FLOAT function with the name "distance" and with struct parameter Point& p1
//where I am using the parameters in order to have float results inside this function.

{
Point p2={3,4}; //This definition indicates that there are two elements in this structure, named
//x and y. These elements are called instance variables and with this math operation sends the value of 3 and 4 to variable x and y inside
// the variable p2

cout<<"Point P1=("<<p1.x; //command of out data in form of text
//In this text we show the authentic output of the value entered of p1.x in the terminal interface #MasteryTopic04
cout<<","<<p1.y<<")"<<endl;//command of out data in form of text
//In this text we show the authentic output of the value entered of p1.y in the terminal interface #MasteryTopic04

cout<<"Point P2=("<<p2.x; //command of out data in form of text
//In this text we show the authentic output of the value entered of p2.x in the terminal interface #MasteryTopic04
cout<<","<<p2.y<<")"<<endl;//command of out data in form of text
//In this text we show the authentic output of the value entered of p2.y in the terminal interface #MasteryTopic04

float dx; //Declarate decimal float variable dx
float dy; //Declarate decimal float variable dy

dx = p2.x - p1.x; //This is a math operation between 'p2.x' and 'p1.x' and stands for take
//the difference between those values and saved it in float variable 'dx'
dy= p2.y - p1.y; //This is a math operation between 'p2.y' and 'p1.y' and stands for take
//the difference between those values and saved it in float variable 'dy'



return sqrt(dx*dx + dy*dy); // returns the value of the square root of the sum of squares of dx, dy in order to be called in the main
//function




}

int main() {


float result; //Declarate decimal float variable result
Point p1={0,0}; //Declarate Point varible p1 from the struct function. This definition indicates that there are two elements
//in this structure, named x and y. These elements are called instance variables and with this math operation sends the value of 0 and 0
//to variable x and y inside the variable p1

result=distance(p1); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "distance" TO MAKE THE TASK OF DISTANCE VALUE OF
//THE TWO POINTS WITH THE HELP OF VARIABLE struct 'p1' #Mastery06 and #Mastery07

cout<<"distance between p1 and p2="<<result<<endl; //command of out data in form of text
//In this text we show the authentic output of the value entered of result in the terminal interface #MasteryTopic04
//This is to tell the user that the distance between p1 and p2 is the float result returned from the float function


return 0; // This command allows label the final of the function main ()

}
