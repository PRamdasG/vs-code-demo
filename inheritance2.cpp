#include <iostream>
using namespace std;
class parent{
    public:
        void display(){
            cout<< "this is parent class: " <<endl;
        }
};
class child : public parent{
  
};
int main(int argc, char const *argv[])
{
    parent obj1;
    child obj2;
    obj1.display();
    obj2.display();
    return 0;
}
