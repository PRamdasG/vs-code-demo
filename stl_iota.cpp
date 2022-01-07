//iota()
//This function is used to assign continuous values to array. 
//This function accepts 3 arguments, the array name, size, and the starting number.
#include<iostream>
#include<numeric>
using namespace std;

int main() {
    int arr[10] = {0};
    iota(arr , arr + 10 , 13);
    cout << "The new array after assigning values is : "; 
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}