#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01
#include <fstream> //Library to call all the
//fuctions of reading AND writing files in languague
//C++ #MasteryTopic21

#include <string>//Library to call all the
//fuctions of strings of data in languague
//C++ #MasteryTopic19

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

struct filetype {//This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a STRUCT function with the name "filetype".

    int counter;//Declarate decimal variable counter
    int lengthfinal;//Declarate decimal variable lengthfinal
    int backup;//Declarate decimal variable backup

  }; //end of struct

filetype input(const char *filename) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have a STRUCT function with the name "input" and with CHAR parameter
//*filename where I am using the #Mastery19 Creation and use of strings in C++ in order to have struct results inside this function.
//Therefore, I am using the char in order to reference the string parameter filename with combining it with a loop.
{
    filetype struckans; //Declarate filetype varible STRUCKANS from the struct function

    ifstream file(filename); ///Declarate a file variable in order to write or read #Mastery21 Reading and writing of text files
    //Therefore, this is a variable called file where you also make the function of giving the value of filename to file that in this case
    //is data.txt

    string line; //Declarate string variable line
    struckans.counter=0; //Initialize the value of the struct variable counter to 0 #Mastery19 and #Mastery21
    struckans.backup=0; //Initialize the value of the struct variable backup to 0 #Mastery19 and #Mastery21
    cout<<endl; //command of data in form of text space

  if(file.is_open()) //#Mastery10 use of the if statement //This command allows the condition if the file is open and when this
  //condition will be true, the tasks inside of the statement will execute. In this case if the value file is open
  //this will occur:
  {


    while(getline(file,line)) //With this command while is utilized as a loop WHILE execute all the
    //instruccions that has this loop until that does not complete that we get all the characters of lines in the file
    {

       // how many characters in this line?
       struckans.lengthfinal = line.length();//This is a string operation between 'line' and 'struckans' and stands for do the length of the
       //file and saved it in struct variable 'lengthfinal' #Mastery19 Creation and use of strings

       struckans.backup = struckans.backup + struckans.lengthfinal;//This is a math operation between 'backup' and 'lengthfinal' and stands
       //for do the sum between those values and saved it in struct variable 'BACKUP'

       struckans.counter = struckans.counter + 1;//This is a math operation between 'counter' and '1' and stands for
       //do the sum between those values and saved it in struct variable 'counter'


   }




    cout<<endl;//command of data in form of text space
    cout<<"The number of the lines of data.txt="<<struckans.counter<<endl; //In
    //this text we show the authentic output of the value entered of struckans.counter in the terminal interface #MasteryTopic04
    cout<<endl;//command of data in form of text space


    cout<<"The number of the characters of data.txt="<<struckans.backup<<endl;//In
    //this text we show the authentic output of the value entered of struckans.BACKUP in the terminal interface #MasteryTopic08
    cout<<endl;//command of data in form of text space


  file.close(); //command that make that the file is close

  }



}

int main() {

  filetype struckans; //Declarate filetype varible STRUCKANS from the struct function
  string filename="data.txt"; //Declarate string varible filename and initialized it to "data.txt" #Mastery19 and #Mastery20


  struckans = input(filename.c_str()); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "input" TO MAKE THE TASK OF
  //COUNT THE VALUE OF THE NUMBER WITH THE HELP OF THE VARIABLE filetype 'struckans' with the parameter filename.c_str()
  //IN ORDER to convert string to char as a parameter #Mastery06 and #Mastery07


  return 0; // This command allows label the final of the function main ()

 }
