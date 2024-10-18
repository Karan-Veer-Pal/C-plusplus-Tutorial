// Day : 87 WAP to demonstratr the concept of STL Map?

//Map used to store the key value pairs
#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Karan"] = 98;
    marksMap["Prashant"] = 88;
    marksMap["Abhishek"] = 5;

    marksMap.insert({{"Avinash", 77}, {"Lokendra", 76}});

    map<string, int> :: iterator iter;
    for (iter=marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    
    return 0;
}
