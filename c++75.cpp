//WAP to demonstrate the concept of reading and writing in a file and closing a file?
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Connecting our file with hout stream
    ofstream hout("file75.txt");

    //Creating a name string and filling it with the string entered by the user:
    string name;
    cout<<"Enter your name:"<<endl;
    cin>>name;

    //Writing a string to the file
    // hout<<"My name is " + name;
    hout<<name + " is my name"<<endl;

    //To closing a file after a work done with file 
    hout.close();  

    //Now i want to read the file that what i can write in the file
    ifstream hin("file75.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<< content << endl;

    return 0;
}