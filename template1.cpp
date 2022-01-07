#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
        T * arr;
        int size;
        vector(int m){
            size = m;
            arr = new T[size];
        }
        T dotProduct(vector &v){
            T d = 0;
            for (int i = 0; i < size; i++)
            {
                d = d + arr[i] * v.arr[i];
            }
            return d;
        }
};
int main() {
    vector<int> v1(3);
    v1.arr[0] = 5;
    v1.arr[1] = 2;
    v1.arr[2] = 4;

    vector<int> v2(3);
    v2.arr[0] = 3;
    v2.arr[1] = 2;
    v2.arr[2] = 5;
    int a = v1.dotProduct(v2);
    cout << a <<endl;

    vector <float> v3(3);
    v3.arr[0] = 5.2;
    v3.arr[1] = 2.1;
    v3.arr[2] = 4.3;

    vector <float> v4(3);
    v4.arr[0] = 3.7;
    v4.arr[1] = 2.8;
    v4.arr[2] = 5.3;
    float b = v3.dotProduct(v4);
    cout << b;

    return 0;
}