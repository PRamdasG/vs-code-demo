#include <iostream>
#include <iomanip>
#include <ctime>
#include <cctype>
#include <string>

using namespace std;

long timediff(void);
static string secret="ASUS";
static long maxcount=3, maxtime=60;

const string Header="*************** PASSWORD HANDLING***************";
static string menu ="\n\n B = Booking ""\n\n E = End of program""\n\n Your choice: ";

bool getPasswword(){
    bool ok_flag=false;
    int count=0,time=0;
    string word;
    timediff();
    while(ok_flag != true && ++count <= maxcount){
        cout<<"ENTER THE PASSWORD: "<<endl;
        cin.sync();
        cin>>setw(20)>>word;
        time += timediff();
        if(time>maxtime)
        break;
        if(word != secret)
            cout<<"invalid password"<<endl;
        else
            return ok_flag=true;
    }
    return ok_flag;
}

long timediff() // Returns the number of
{ // seconds after the last call.
static long sec = 0; // Time of last call.
long oldsec = sec; // Saves previous time.
time( &sec); // Reads new time.
return (sec - oldsec); // Returns the difference.
}

bool changePassword(){
    string word1, word2;
    cout<<"ENTER A NEW PASSWORD BETWEEN 2-20 CHARACTERS: ";
    cin.sync();
    cin >> setw(20) >> word1;
    if(word1.size() > 1){
        cout<<"ENTER THE NEW PASSWORD ONCE AGAIN: ";
        cin >> setw(20) >> word2;
        if( word1 == word2 ){
            secret = word1;
            return true;
        }
    }
    return false;
}               

inline void go_on() {
    cout << "\n\ngo on with return" <<endl;
    cin.sync();
    cin.clear();
    while (cin.get() != '\n');
}

inline char getYesOrNO(){
    char c = 0;
    cin.clear();cin.sync();    
    do {
        cin.get(c);
        c = toupper(c);
    } while (c!= 'Y' && c != 'N');
    return c;
}

int main(){
    char choice=0;
    while(choice != 'E'){
    cout<<setw(20)<<Header<<endl;
    cout<<setw(20)<<menu<<endl;
    cin.get(choice);
    choice=toupper(choice);
    switch (choice)
    {
    case 'B':
        if(!getPasswword()){
            cout<<"access denied!"<<endl;
            go_on();
        }
        else
        {
            cout<<"Welcome\n\n"<<"do you want to change the password(y/n)  "<<endl;
            if(getYesOrNO() =='Y'){
                if(changePassword())
                    cout<<"Password changed"<<endl;
                else
                    cout<<"Password unchanged"<<endl;
                    go_on();
                
                
            }
        }
        break;
    
    case 'E':
        cout<<"Bye Bye!"<<endl;
        break;
    }
    }
    return 0;
}