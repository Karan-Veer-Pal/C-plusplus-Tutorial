// Day : 86 WAP to demonstrate the concept of List in C++ STL?
// Day : 86 List used to delete a middle-middle element of the array.

#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}

int main()
{
    list<int> list1; //list of 0 length
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    display(list1);
    //For removing element from the list
    // list1.pop_back();
    // display(list1);
    // list1.pop_front();
    // display(list1);
    // list1.remove(9);
    // display(list1);

    //Sorting the list-->
    // list1.sort();
    // display(list1);

    //Reversing the list-->
    // list1.reverse();
    // display(list1);

    //make a iterator to get the list element-->
    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";

    list<int> list2(3); //empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 10;
    iter++;
    display(list2);

    //For merging+sorting the list1 and list2-->
    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"List 1 after merging";
    display(list1);
    
    return 0;
}
