#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setRollNumber(int);
    void getRollNumber(void);
};
void Student ::setRollNumber(int r)
{
    roll_number = r;
}
void Student ::getRollNumber(void)
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};
void Exam ::setMarks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::getMarks(void)
{
    cout << "The marks obtained in maths: " << maths << endl;
    cout << "The marks obtained in physics: " << physics << endl;
}

class result : public Exam
{
    float percentage;

public:
    void display()
    {
        getRollNumber();
        getMarks();
        cout << "Your percentage is : " << (maths + physics) / 2 <<"%"<<endl;
    }
};
int main(int argc, char const *argv[])
{
    result pradumnya;
    pradumnya.setRollNumber(11);
    pradumnya.setMarks(90,83);
    pradumnya.display();
    return 0;
}
