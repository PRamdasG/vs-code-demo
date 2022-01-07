#include<iostream>
using namespace std;
class test{
    public:
    int roll_no;
    string name;
};
int main(){
    test obj;
    obj.roll_no=33;
    obj.name="pradumnya";
    cout<<obj.roll_no<<endl;
    cout<<obj.name<<endl;
    return 0;
}
