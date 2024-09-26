//WAP to demonstrate the concept of array of object using pointer?
#include<iostream>
using namespace std;

class shop_item 
{
    int id;
    float price;
    public:
    void setdata(int a, float b)
    {
        id=a;
        price=b;
    }
    void getdata(void)
    {
        cout<<"Code of this item is; "<<id<<endl;
        cout<<"Price of this item is: "<<price<<endl;
    }
};
int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    shop_item *ptr = new shop_item[size];
    shop_item *ptrtemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item: "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Id and Price of item is :"<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    // iss program me humne ptrtemp isliye banaye hai kiyoki jab phle wale for loop me hum ptr ko increment karege toh ptr increment ho kar apne size jitne value per pahuch jayega then hum dosre for loop me increment karege toh wahi se ptr increment hona start ho jayega jaha se phle for loop ne ptr ko choda hai isliye hum ptrtemp ko banayege dosre wale for loop ko run karne ke liye or phle wale for loop se data access karne ke liye.  
    return 0;
}