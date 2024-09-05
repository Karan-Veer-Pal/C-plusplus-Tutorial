// Day : 47 WAP to calculate the interest return on investment?(like a constructor overloading)

#include<iostream>
using namespace std;

class bankdeposit
{
    int principle;
    int years;
    float returnvalue;
    float interestrate;

    public:
        bankdeposit(){}; /*This constructor is write here because when the object make the compiler
        not decide the which constuctor are run defaultly.
        If we do not declare the default constructor then we have to declare the object like this 
        int main()
        {
            bankdeposit bd1=bankdeposit(p,y,r);
            bankdeposit bd2=bankdeposit(p,y,r);
        }*/
        bankdeposit(int p, int y, float r); //r can be a value like 0.04
        bankdeposit(int p, int y, int r); //r can be a value like 4

        void show(void);
};

bankdeposit::bankdeposit(int p, int y, float r)
{
    principle=p;
    years=y;
    interestrate=r;
    returnvalue = principle;
    
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interestrate);
    }
}

bankdeposit::bankdeposit(int p, int y, int r)
{
    principle=p;
    years=y;
    interestrate=float(r)/100;
    returnvalue =principle;
    
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interestrate);
    }   
}

void bankdeposit::show()
{
    cout<<endl<<"Principle amount was: "<<principle<<". Return value after "<<years<<" is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout<<"Enter the value of p, y and r: "<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p, y and R: "<<endl;
    cin>>p>>y>>R;
    bd2=bankdeposit(p,y,R);
    bd2.show();
 
    return 0;
}
