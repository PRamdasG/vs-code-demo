#include <iostream>
#include <string.h>
using namespace std;
void reverse(char a[], char b[]){
    int j=0;
    for (int i = strlen(a) - 1; i >= 0; i--,j++)
    {
        b[j] = a[i];
    }
    b[j] ='\0';
}
int main(int argc, char const *argv[])
{
    char word[10], reword[10];
    cout << " enter a word: "<<" ";
    cin >> word;
    reverse(word,reword);
    std :: cout << " reverse of the word is: " << reword;
    return 0;
}
