#include<iostream>
#include<algorithm>
using namespace std;
//this is algorithm for sorting.
int size = 10;
void show(int a[]){
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

int main() {
    int a[size] = {0,89,21,45,34,2,13,54,32,45};
    cout << "\narray before sorting: ";
    show(a);
    cout << endl;
    sort(a ,a+10);
    cout << "array after sorting: ";
    show(a);
    
    return 0;
}