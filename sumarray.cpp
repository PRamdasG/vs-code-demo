#include <iostream>
using namespace std;

int main() {
    int exe[5];
    // initialize an array without specifying size
    for(int i = 0; i < 5; i++){
        cout << "enter the number for array " << i <<" :" ;
        cin >> exe[i];
    }
    double sum = 0;
    double count = 0;
    double average;

    cout << "The numbers are: ";

    //  print array elements
    // use of range-based for loop
    for (int n : exe) {
        cout << n << "  ";

        //  calculate the sum
        sum += n;

        // count the no. of array elements
        ++count;
    }

    // print the sum
    cout << "\nTheir Sum = " << sum << endl;

    // find the average
    average = sum / count;
    cout << "Their Average = " << average << endl;

    return 0;
}