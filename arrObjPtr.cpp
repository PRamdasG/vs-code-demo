#include <iostream>
using namespace std;

class Shop{
    int ID;
    float Price;
    public:
        void setData(int a, int b){
            ID = a;
            Price = b;
        }
        void getData() {
            cout << "The ID of your item is " << ID <<endl;
            cout <<"Price of your item is " << Price <<endl;
            cout << endl;
        }
};
int main(int argc, char const *argv[])
{
    int size = 3;
    int i, p;
    float q;
    Shop *ptr = new Shop[size];
    Shop *ptr1 = ptr;
    for ( i = 0; i < size; i++)
    {
        cout << "Enter the value of ID and price of item " << i + 1 <<endl;
        cin >> p >> q;
        cout << endl;
        ptr->setData(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout <<"Item number " << i + 1 << endl; 
        ptr1->getData();
        ptr1++;
    }
    
    
    return 0;
}
