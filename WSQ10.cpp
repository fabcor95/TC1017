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


float square_root(float x) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a FLOAT function with the name "square_root" and with float parameter x,and float parameter
//in order to have float results inside this function.

{

float resp; //Declarate decimal float variable resp
float a=0; //Declarate decimal float variable a initialized in 0

resp=x/2; //This is a math operation between 'resp' and 'x' and stands for do the division between
//those values and saved it in float variable 'resp'

//Next we use the #Mastery13 Use of loops with "while" and "do while"
// This command is the loop do-while that allows you in doing at least once of
//the instruccions in this loop and while this case of
//abs(a-resp) don´t be higher than 0.0001, it will execute forever every instructions of the loop
//label in this loop.
do
{
cout<<resp<<endl; //command of out data in form of text
//In this text we show the authentic output of the value of resp in the terminal interface #MasteryTopic04
a=resp; // This command allows giving the value of the declared decimal variable 'resp' to
//the declared decimal variable 'a'.
resp=(resp+x/resp)/2;//This is a math operation between 'resp' and 'x' and stands for do the babylonian method between
//those values and saved it in float variable 'resp'


}while( abs(a-resp) > 0.0001); // This command is the loop do-while that allows in doing
//at least 1 time of the instructions written in this loop and while in this case
//The value of iSecret don't be equal to the value of iGuess, it will execute forever
//all of the instrucccions lable in this loop.

return resp; //With this command you return the value of the previus operations of "square_root" function inside of the
//in order to call it in THE MAIN FUNCTION.

}



int main() //Begin of the program
{
cout<<square_root(16.23654); //#Mastery04 command of out data in form of numeric value. with this command we give the value 16.23654 to
//square_root function.

}
