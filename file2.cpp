#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
    ofstream st;
    st.open("sample.txt");
    st<< "this is me: "<<endl;
    st<< "this is also me: "<<endl;
    st<< "this is triending me: "<<endl;
    st<< "this is fab me: "<<endl;
    st.close();

    ifstream in;
    string st2;
    in.open("sample.txt");
    while (in.eof() == 0)
    {
        getline(in ,st2);
        cout << st2;
    }
    
        
    return 0;
}