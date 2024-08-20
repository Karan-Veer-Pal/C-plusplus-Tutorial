// WAP to demonstrate the concept of array in class?
#include <iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initialcounter()
    {
        counter = 0;
    }
    void getdata();
    void putdata();
};

void shop::getdata()
{
    cout << "Enter ID of your item: " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item:" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::putdata()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with ID " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initialcounter();
    dukaan.getdata();
    dukaan.getdata();
    dukaan.getdata();
    dukaan.putdata();
    return 0;
}