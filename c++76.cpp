//WAP to demonstrate the concept of open() and eof() function?
#include<iostream>
#include<fstream>
// #include<string>
using namespace std;

int main()
{
    ofstream  out;
    out.open("file76.txt");
    out<<"This is me"<<endl;
    out<<"This is you\n"<<endl;
    out<<"This is our"<<endl;
    out.close();

    ifstream in;
    string str1, str2;  
    in.open("file76.txt");
     in>>str1>>str2; //take str2 to get a second word of the file.
    cout<<str1<<str2;


    while (in.eof() == 0)  //Here eof use to get all the content of the file 
    {
        getline(in, str1);
        cout<<str1<<endl;
    }
    
    in.close();
    return 0;
}