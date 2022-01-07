#include<iostream>

 using namespace std;

 class Line{
    private:
        double length;
    public:
        double getLength(void);
        void setLength(double len);
        Line();
        ~Line();

 };

 double Line::getLength(void){
     return length;
 }

void Line::setLength( double len ) {
   length = len;
}

Line::Line(){
    cout<<"the object is created"<<endl;
}

Line::~Line(){
    cout<<"the object is deleted"<<endl;
}

int main(int argc, char const *argv[])
{
    Line obj, obj2,obj3;
    obj.setLength(200);
    cout<<"the length of the function is: "<<obj.getLength()<<endl;
    return 0;
}


