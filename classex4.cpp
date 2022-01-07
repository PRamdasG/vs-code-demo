#include<iostream>
using namespace std;

static string header="****Accounts****";

class account{
    public:
        string name;
        int accno;
        int amount;
    int input();
    int display();
};

int account::input(){
    cout<<"enter name  "<<endl;
    cin>>name;
    cout<<"enter account number  "<<endl;
    cin>>accno;
    cout<<"enter the amount  "<<endl;
    cin>>amount;
    return 0;
}

int account::display(){
    cout<<"account details  "<<endl;
    cout<<"account holder name  "<<name<<endl;
    cout<<"account holder number  "<<accno<<endl;
    cout<<"account balance amount  "<<amount<<endl;
    return 1;
}

int main()  {
    cout<<header<<endl;
    account obj;
    obj.input();
    obj.display();
    return 0;
}
