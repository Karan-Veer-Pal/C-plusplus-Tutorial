//WAP to demonstrate the concept of Vector in C++ STL?
#include<iostream>
#include<vector>
using namespace std;

template<class t>
void display(vector <t> &v)
{
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
        // cout<<v.at(i)<< " ";
    }
    cout<<endl;
}

int main()
{
    //Ways to create a vector:
    vector <int>vec1; //zero length vector
    // display(vec1); not have any content to displaying
    
    int element, size = 5;
    // cout<<"Enter the size of the vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: "<<endl;
    //     cin>>element;
    //     vec1.push_back(element);  // to add the element in the vector.
    // }
    // vec1.pop_back(); // to extract the last element of the vector.

    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1, 5, 566);  //firstly it will take a itrator, it will use for adding the element in random space od array, default adding in the first indexing of the array vec1.insert(iter, 566);
    //vec1.insert(iter+1, 566); to adding in the second indexing of the array
    // vec1.insert(iter+1, 5, 566); to adding 5 copy of the element in the array
    // display(vec1);

    //Ways to create a vector:
    vector<char> vec2(4); //4 element character vector
    // vec2.push_back('5');
    // display(vec2);

    //vector<char> vec3(vec2); //4 element character vector from vec2
    //display(vec3); //not have any content to displaying

    vector<int> vec4(6, 3); //6 element vector os 3's
    display(vec4);
    cout<<vec4.size(); //it will return the size of the vector

    return 0;
}