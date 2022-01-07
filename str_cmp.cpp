#include <iostream>
using namespace std;
#define MAXLEN 100
int str_cmp(const char *str1 , const char *str2);
int main()
{
    char text1[MAXLEN], text2[MAXLEN];
    cout << "Testing the function str_cmp()"<<endl;
    while (true)
    {
        cout << "Enter the two line of text " << "\nEnding with an empty line."<<endl;
        cout << "Enter line 1: ";
        cin.clear();
        cin.sync();
        cin.get(text1 ,MAXLEN);
        cout << "Enter line 2: ";
        cin.clear();
        cin.sync();
        cin.get(text2 ,MAXLEN);
        if (text1[0] == 0 && text2[0] == 0)
            break;
        int diff = str_cmp(text1,text2);
        if(diff < 0)
            cout << "second text is greater." <<endl;
        if(diff == 0)
            cout << "both are equal length."<<endl;
        else
            cout << "second text  is greater"<<endl;
    }
    return 0;
}
int str_cmp(const char *str1 , const char *str2){
    for ( ; *str1 == *str2 && *str1 != '\0'; str1++,str2++);
    return(*str1 - *str2);
}