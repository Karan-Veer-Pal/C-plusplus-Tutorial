// Day : 32 WAP to deomstrate the concept of static data-member and static function?

#include<iostream>
using namespace std;

class employee
{
    int id;
    //static int count; --> *Not permitted (see and compare line 9 and 24)
    static int count; //int count=0;

    public:
        void getdata()
        {
            cout<<"Enter id of the employee:"<<endl;
            cin>>id;
            count++;
        }
        void putdata()
        {
            cout<<"The id of this employee is: "<<id<<endl<<" and this is employee number: "<<count<<endl;
        }

        static void getcount()
        {
            // cout<<id;//throw an error
            cout<<"The value of count is:"<<count<<endl;
        }
};
//int employee::count=1000; --> *Permitted (see and compare line 8 and 23)
int employee::count; //Default value is 0  //NOT write this line in case of use int count=0;
int main()
{
    employee karan, abhishek, prashant; //All the object share the one count variable; in use of static data-member;
    karan.getdata();
    karan.putdata();
    employee::getcount(); //direct run the function

    abhishek.getdata();
    abhishek.putdata();
    employee::getcount(); //direct run the function

    prashant.getdata();
    prashant.putdata();
    employee::getcount(); //direct run the function

    return 0;
}
