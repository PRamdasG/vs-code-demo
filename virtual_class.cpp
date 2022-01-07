#include <iostream>
using namespace std;
class Student{
    protected:
        int roll;
    public:
        void set_roll(int r){
            roll = r;
        }
        void print_roll(void){
            cout << "Your roll number is: " << roll <<  endl;
        }
};
class marks : virtual public Student{
    protected:    
        float maths , physics;
    public:
        void set_marks(float m1 , float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout << "Your marks in maths is: " << maths << " and in physics is : " << physics << endl;
        }       
};
class sport : virtual public Student{
    protected:    
        float score;
    public:
        void set_score(float c1){
            score = c1;
        }
        void print_score(void){
            cout << "Your score is sports  is: " << score << endl;
        }       
};
class Result : public marks , public sport{
    float total;
    public:
        void display(){
            total = maths + physics + score;
            print_roll();
            print_marks();
            print_score();
            cout << "Your total score is : " << total ; 
        }
        
};
int main(int argc, char const *argv[])
{
    Result prad;
    prad.set_roll(33);
    prad.set_marks(90.0 , 82.0);
    prad.set_score(9);
    prad.display();
    return 0;
}
