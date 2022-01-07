//swap() function of valarray swaps the two array.
#include<iostream>
#include<valarray>
using namespace std;

int main() {
    int x = 90;
    int y = 89;
    cout <<"x: "<<x<<" y: "<<y<<endl;
    swap(x,y);
    cout<<"x: "<<x << " y: "<<y <<endl;
    int arr[5]={12,90,78,67,87};
    int arr1[5]={2,0,8,7,7};
    cout << endl;
    cout<<"Array before swap: ";
    for(int i=0 ;i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    cout<<"Array2 before swap: ";
    for(int i=0 ;i < 5; i++){
        cout<<arr1[i]<<" ";
    }
    cout << endl;
    swap(arr,arr1);
    cout<<"Array after swap: ";
    for(int i=0 ;i < 5; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    cout<<"Array2 after swap: ";
    for(int i=0 ;i < 5; i++){
        cout<<arr1[i]<<" ";
    }
    
    return 0;
}