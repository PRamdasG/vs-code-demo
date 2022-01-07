// Non-Manipulating Algorithms

// sort(first_iterator, last_iterator) – To sort the given vector.
// reverse(first_iterator, last_iterator) – To reverse a vector.
// *max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
// *min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
// accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements
#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;
void show(int arr[]){

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    // Initializing vector with array values 
    int arr[]= {12,43,676,323,565,23,34,32,31,90};
    cout<<"The array is : ";
    show(arr);
    cout<< "\nLets sort the array\n" 
        <<"array after sorting is: ";
    sort(arr , arr+10);
    show(arr);
    cout<<endl;
    cout<<"Now,lets reverse the array\n"
        <<"array after reverseing: ";
    reverse(arr, arr+10);
    show(arr);
    cout <<endl;
    cout<<"The max element of the array is: "<<*max_element(arr ,arr+10);
    cout <<endl;
    cout<<"The min element of the array is: "<<*min_element(arr ,arr+10);
    cout <<endl;
    cout<<"Lets sum all the elements: "<<accumulate(arr, arr+10, 0);
    cout <<endl;
    cout<<"The occurance of  565 in array is: "<< count(arr ,arr+10 , 565);
    cout << endl;
    cout<<"The distace between first and min element is: "<<distance(arr,min_element(arr , arr+10));
    return 0;
}