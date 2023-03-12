#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream myfile;
    myfile.open("Sample.txt", ios::out); // writing into a text file
    if(myfile)
    {
        myfile<<"Hello\n";
        myfile<<"This is line2\n";
    }
    myfile.close();
    myfile.open("Sample.txt", ios::app); //Append mode
    if(myfile)
    {
        myfile<<"Hi\n";
    }
    myfile.close();
    myfile.open("Sample.txt", ios::in); //Reading from a myfile
    string line;
    if(myfile)
    {
        while(getline(myfile, line))
        {
            cout<<line<<"\n";
        }
    }
    myfile.close();
    
  return 0;
}