//WAP to demomstrate the concept of File I/O : Working With Files?
#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
1.) fstreambase
2.) ifstream --> derived from fstreambase
3.) ofstream --> derived from fstreambase
*/
/*
In order work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1.) Using a constructor
2.) Using a member function open() of the class
*/

int main()
{
    string str1 = "Karan Veer Pal";    
    // Opening file using constructor and writing it
    // ofstream out("file74_A.txt"); //to write operation
    // out<<str1;

    
    string str2;
    // // Opening file using constructor and reading it
    ifstream in("file74_B.txt"); //to read operation
    // in>>str2;  //-->> This will return only one word of the file. So, for solve the problem by using getline() function.
    getline(in, str2);
    // getline(in, str2); //-->>because we write getline(in, str2); second time -> To get the next line of the file
    cout<<str2;
    return 0;
}

