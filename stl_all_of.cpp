// all_of()
// This function operates on whole range of array elements and can
// save time to run a loop to check each elements one by one. 
// It checks for a given property on every element and returns 
// true when each element in range satisfies specified property, else returns false.
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[6] = {12,23,-4,43,45,32};
    all_of(arr , arr + 6,[](int x){return x > 0;})?
    //here ?: operator is used in place of if else statement.
    cout << "All are +ve element. " :
    cout<<"all are not positive element."<<endl;

    //any_of()
    //This function checks for a given range if there’s even
    //one element satisfying a given property mentioned in function.
    //Returns true if at least one element satisfies the property else returns false.

    any_of(arr , arr + 6,[](int x){return x < 0;})?
    cout << "There exist a -ve  element. " :
    cout<<"all are not positive element.";

    //none_of()
    //This function returns true if none of elements
    //satisfies the given condition else returns false.

    none_of(arr , arr + 6,[](int x){return x < 0;})?
    cout << "There isn't a -ve  element. " :
    cout<<"There is -ve element.";
    
    return 0;
}