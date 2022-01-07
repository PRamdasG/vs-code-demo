#include <iostream>
#include <ctime>

#ifndef _DATE_
#define _DATE_
using namespace std;

class date{
    private:
        short month, day, year;
    public:
        void init(void);
        void init( int month,int day,int year);
        void print(void);
        void tim(void);
};
#endif

void date::init(void){
    struct tm *ptr;
    time_t sec;
    time(&sec);
    ptr=localtime(&sec);
    month=(short) ptr->tm_mon+1;
    day=(short) ptr->tm_mday;
    year=(short) ptr->tm_year+1900;

    int Hour=ptr->tm_hour;
    int Min=ptr->tm_min;
    int Sec=ptr->tm_sec;
    std::cout << "Execute at: " << Hour << ":" << Min << ":" << Sec << std::endl;
    

}

void date::init( int m,int d,int y){
    month=(short) m;
    day=(short) d;
    year=(short) y;
    
}

void date::print(void){
    cout<<month<<"-"<<day<<"-"<<year<<endl;
}

int main(int argc, char const *argv[])
{
    date today, birthday;
    today.init();
    birthday.init(12,9,2000);
    cout<<"todays date: ";
    today.print();
    cout<<"prad's birthday: ";
    birthday.print();
    return 0;
}
