#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    float arr[5];
    float *ptr;
    cout << "the location of the array elements: "<<endl;
    for(int i = 1; i <= 5; i++){
           cout << &arr[i] << endl;
    }
    ptr = arr ;
    for(int i = 1; i <= 5; i++){
           cout << (ptr + i) << endl;
    }
    return 0;
}
