#include<iostream>
#include<ctime>
using namespace std;


int main()
{

  time_t currentTime;
  struct tm *localTime;

  time( &currentTime );
  localTime = localtime( &currentTime );

  int Hour   = localTime->tm_hour;
  int Min    = localTime->tm_min;
  int Sec    = localTime->tm_sec;

  std::cout << "Execute at: " << Hour << ":" << Min << ":" << Sec << std::endl;

  return 0;

}