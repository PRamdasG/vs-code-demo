// this is a cpp program to implement
// binary search algorithm using
// standard template library
#include<iostream>
#include<algorithm>

using namespace std;

int size = 10;
void show(int a[]){
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main() {
    int a[] = {12,34,2,32,87,21,9,10,43,78};
    int b;
    cout <<"The array is: " << " ";
    show(a);
    cout << endl;
    //for searching an element in an array we have to first sort the array
    cout<<"So we first sort the array: "<<endl;
    sort(a,a+10);
    cout<<"Array after sorting is : "<<" ";
    show(a);
    cout << endl;
    cout << "Which element you wanna search in for " <<endl;
    cin >> b;
    //syntax for binary search is 
    //binary_search(array_name , array + size , element);
    cout << "Now lets perform Binary search: " << endl;
    if(binary_search(a, a+10 , b)){
        cout << "The element found in the array." <<endl;
    }
    else
    {
        cout<<"The elements isn't found in array."<<endl;
    }
    return 0;
}