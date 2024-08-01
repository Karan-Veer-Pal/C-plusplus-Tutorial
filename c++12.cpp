//WAP on operator precedence?
/*Operator precedence are 
i) ()[]
ii) *,/,%
iii) +,-
*/
#include<iostream>
using namespace std;

int main()
{
    int a=3, b=4;
    int c=((((a*5)+b)-45)+87);

    cout<<"The value of ((((a*5)+b)-45)+87) is: "<<c;

    return 0;
}