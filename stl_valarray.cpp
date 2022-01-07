#include<iostream>
#include<valarray>
using namespace std;

//we are using valarray.
//now we have used apply() function of that library.

//we have a function sum() in valarray.
//we have a function min() in valarray.
//we have a function max() in valarray.


int main() {
    valarray<int> arr = {12,34,445,32,56,32,6};
    valarray<int> arr1;

    arr1 = arr.apply([](int x){return x+=5;});
    cout<< "The new array is :";
    for(int x : arr1)
    cout<< x <<" ";
    cout << endl;
    cout <<"sum of orignal array: " << arr.sum()<<endl;
    cout <<"sum of new array: " << arr1.sum();
    return 0;
}