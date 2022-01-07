/*using struct in place of class*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct representative{
    string name;
    double sales;
};

inline void print(const representative v) {
    cout<<fixed<<setprecision(2)<<left<<setw(20)<<v.name<<right<<setw(10)<<v.sales<<endl;
}

int main(){
    representative rita, john;
    rita.name="storm,rita";
    rita.sales=2019.3;
    john.name="quick,john";
    john.sales=2189.332;
    rita.sales+=37000;
    cout<<"Representative sales\n"<<"-------------------------"<<endl;
    print(rita);
    print(john);
    cout<<"Thw total sale is: "<<rita.sales+john.sales<<endl;
    representative *ptr=&john;
    if(rita.sales>john.sales)
        ptr=&rita;
    cout<<"salesman of the month"<<ptr->name<<endl;    
    return 0;
}