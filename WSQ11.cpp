#include <iostream> //Library to call all the
//fuctions of inputs and outputs of data in languague
//C++ #MasteryTopic01

#include <fstream> //Library to call all the
//fuctions of reading AND writing files in languague
//C++ #MasteryTopic21

using namespace std; //In C++ we need a command
// that everytime goes with the instructions of input and outputs
//of data that is call std but with this command helps writing
//these std out of the main because the machine factorizes them

int linebanana (string lines)  //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have an int function with the name "linebanana" and with string parameter lines
// that has just the value of all the words bananas in string of the file in order to have int results inside this function.
{

   int i=0; //Declarate int variable i initialized in 0.
   int counterbananaeachline=0; //Declarate int variable counterbananaeachline initialized in 0.

   for(int j=0; j<lines.length(); j++) //With this command for is utilized as a loop FOR execute all the
   //instruccions that has this loop until that does not complete that the variable j
   // will be less than the numerical value of the lines variable while it is increasing one in one in this variable i
   //inicialized from the value 0
   {

     lines[j]=tolower(lines[j]); //This is a string operation between 'lines' and
   //'lines[j where this j is the space of each string value per each line bananas from line 1 to the last line, I am
   //using the #Mastery18 Creation and use of Arrays/Vectors in C++]' and stands for transform all the character of the banana.txt file
   //to lower case between those values and saved it in string variable 'lines'. Hence, by doing this all the characters from the file
   //banana.txt will be in lower cases in order to count next just the condition of "banana" all in lower cases.


   }
   cout<<lines<<endl; //In
   //this text we show the authentic output of the value entered of counteralllines in the terminal interface #Mastery20 Validated user
   //input (ensure correct / expected data entry) I used it to tell me all the words banana appeared

   while (1) //With this command while is utilized as a loop WHILE execute all the
  //instruccions that has this loop until that INSIDE of this loop has a break statement to break this infinite loop
   {
     int foundtop = lines.find("banana", i); //Declarate int variable foundtop. Then we have an assignation operation between
     //'foundtop' and 'the string value lines' and stands for find the numeric position everytime when the word "banana" appears
     //inside the variable lines and save this new value of the int position to int variable 'foundtop' (position 0 is the begining
   // of the file .txt)

     i=foundtop+1; //This is a math operation between 'i' and 'foundtop' and stands for adding
  //those values and saved it in int variable 'i'

     if(foundtop!=-1) //#Mastery10 use of the if statement //This command allows the condition if the value of foundtop
  //NOOT BE equal to -1 and when this condition will be true, the tasks inside of the statement will execute.
  //In this case the if executes because the variable foundtop is not finishing in counting all the characters of each line
  //and has the value different of -1
  // In this case if the value is higher or equal than -1 this will occur:
     {

     counterbananaeachline++; //This is a math operation between 'counterbananaeachline' and '1' and stands for adding
  //those values and saved it in int variable 'counterbananaeachline'

     }

     else //#Mastery11 Use of else with a conditional if: // if the condition does not achieve on the other hand you will do this:
     {

      cout<<"COUNTER= "<<counterbananaeachline<<endl; //In
      //this text we show the authentic output of the value entered of counteralllines in the terminal interface #Mastery20 Validated user
      //input (ensure correct / expected data entry) I used it to tell me all the words banana appeared in each line

      break; //This command helps to end the infinite while (1) and allow the program to go back to the next function


     }


   } //END OF WHILE

   return counterbananaeachline; //With this command you return the value of the previus operations of "find_bananas" function inside of the
   //variable int counterbananaeachline in order to call it in THE MAIN FUNCTION



}






int find_bananas (const char *filename) //This is the structure of a function where you have subrutines in order to make
//different tasks, in this case we have an int function with the name "find_bananas" and with const char parameter filename
// that has the value of "banana.txt" in order to
//have int results inside this function.
{
cout<<filename<<endl; //text name of the file .txt "banana.txt"

ifstream file(filename); ///Declarate a ifstream variable called "file" in order to write or read #Mastery21 Reading and writing of text files
//Therefore, this is a variable called file where you also make the function of giving the value of filename to file that in this case
//is banana.txt

cout<<endl; //command of data in form of text space

int counteralllines=0; //Declarate int variable counteralllines initialized in 0 in order to count all the words of banana in banana.txt

string lines; //Declarate string variable lines in order to save all the characters of the banana.txt file

if(file.is_open()) //#Mastery10 use of the if statement //This command allows the condition if the file is open and when this
  //condition will be true, the tasks inside of the statement will execute. In this case if the value file is open
  //this will occur:
{
    while(getline(file,lines)) //With this command while is utilized as a loop WHILE execute all the
    //instruccions that has this loop until that does not complete that we get all the characters of lines in the file
    {

      counteralllines = counteralllines + linebanana(lines); //This is a math operation between 'counteralllines' and
      // the value of the int function linebanana with the string parameter 'lines' and stands for
       //do the sum between those values and saved it in the int variable 'counteralllines'

      cout<<"COUNTER THIS LINE= "<<counteralllines<<endl; //In
      //this text we show the authentic output of the value entered of counteralllines in the terminal interface #Mastery20 Validated user
      //input (ensure correct / expected data entry) I used it to tell me all the words banana appeared

            }


} //END OF IF


return counteralllines; //With this command you return the value of the previus operations of "find_bananas" function inside of the
//variable int counteralllines in order to call it in THE MAIN FUNCTION


}




int main ()
{

string filename = "banana.txt"; //Declarate string varible filename and initialized it to "banana.txt" #Mastery19 and #Mastery20

int cfinal; //Declarate int variable cfinal

cfinal=find_bananas(filename.c_str()); //THIS ASSIGNATION HELPS TO CALL THE FUNCTION OF "find_bananas" TO MAKE THE TASK OF
  //COUNT THE NUMBER OF TIMES THAT THE WORD banana is found WITH THE HELP OF THE VARIABLE int 'cfinal' with the parameter filename.c_str()
  //IN ORDER to convert string to char as a parameter #Mastery06 and #Mastery07

cout<<"TIMES THE WORD banana FOUND="<<cfinal<<endl; //In
//this text we show the authentic output of the value entered of cfinal in the terminal interface #Mastery20 Validated user
//input (ensure correct / expected data entry)

return 0; // This command allows label the final of the function main ()


       }
