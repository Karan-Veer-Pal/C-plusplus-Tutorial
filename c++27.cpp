//WAP on the concept of inline function?
#include<iostream>
using namespace std;

inline float moneyaccount(int balance, float interest=1.04)
{
    return balance*interest;
}
int main()
{
    int money;

    cout<<"Enter the balance in your account:"<<endl;
    cin>>money;
    cout<<"If you have "<<money<<" Rs in your account, you will receive "<<moneyaccount(money)<<" Rs in your account"<<endl;
    cout<<"In case of VIP : If you have "<<money<<" Rs in your account, you will receive "<<moneyaccount(money,1.1)<<" Rs in your account"<<endl;
    return 0;
}