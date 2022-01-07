#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[5];
    int *ptr;
    cout << "enter only 5 number terminating with alphabet "<< endl;
    for (int i = 0; i <= 5; i++)
    {
        cin >> a[i];
    }
    ptr = a;
    cout << "the loction of array is "<< endl;
    for (int b = 1; b <= 5; b++)
    {
        cout << (ptr + b) << endl;
    }
    
    
    return 0;
}
