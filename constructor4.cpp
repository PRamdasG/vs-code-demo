#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class CD{
    private:
        string interpret,title;
        long sec;
    public:
        CD(const string& i=" ",const string& t=" ", long s=0L){
            interpret=i;
            title=t;
            sec=s;  
        }
        const string& getInterpret(){
            return interpret;
        }
        const string& getTitle(){
            return title;
        }
        long getSec(){
            return sec;
        }
};
void printline(CD cd){
    cout<<left<<setw(30)<<cd.getInterpret()<<setw(20)<<cd.getTitle()<<right<<cd.getSec() / 60<<setw(2)<<':'<<setw(2)<<cd.getSec() % 60<<endl;
}
int main(){
    CD cd1("MISTER X","LETS DANCE",30*60+41), cd2("NEW GUITARS","FLAMENCO COLLECTION",46*60+12),cd3,cd4;
    cd3=cd1;
    cd4=cd2;
    string line(70,'-'); 
    cout<<line<<endl<<left<<setw(30)<<"Interpreter"<<setw(20)<<"Title"<<"Length(min:sec)"<<endl<<line<<endl;
    printline(cd3);
    printline(cd4);
}