#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st;
    cout << "enter the txt "<<endl;
    
    //Opening files using constructor and writing it
    ofstream write("sample.txt"); // Write operation
    getline(cin ,st);
    write << st;
    write.close();

    //either above programm will run or the below one,
    //because sample.txt is passed in both the programms
    //or if you have'nt passed close() function;

    string st2;
    //reading a file in 
    ifstream in("sample.txt");
    getline(in , st2);
    cout << st2;
    in.close();
    return 0;
}