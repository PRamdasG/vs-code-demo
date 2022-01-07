#include<iostream>
#include<cstring>

using namespace std;
class CWP
{
protected:
    float rating;
    string title;
public:
    CWP(float r , string t){
        rating = r;
        title = t;
    }
    virtual void display(){}    
};

class CWPvideo : public CWP {
protected:
    float videoLength;
public:
    CWPvideo(float r , string t , float vl) : CWP(r,t){
        videoLength = vl;
    }
    void display(){
        cout << "This is amazing video tutorial of " << title <<endl;        
        cout << "The length of the video is " << videoLength <<endl;        
        cout << "The rating of the video is " << rating <<" out of 5 stars"<<endl;        
    } 
};

class CWPtext : public CWP {
protected:
    float textLength;
public:
    CWPtext(float r , string t , float tl) : CWP(r,t){
        textLength= tl;
    }
    void display(){
        cout << "This is amazing text tutorial of " << title <<endl;        
        cout << "The wordlength of the text is " << textLength <<endl;        
        cout << "The rating of the text is " << rating << " out of 5 star "<<endl;        
    }
};

int main() {
    float rating;
    string title;
    float vlen;
    float tlen;
    rating = 4.89;
    title = "GUITAR TUTORIAL";
    vlen = 6.56;
    tlen = 789;

    CWPtext obj(rating , title , vlen);
    CWPvideo obj1(rating , title, tlen);
    CWP *ptr[2];
    ptr[0] = &obj;
    ptr[1] = &obj1;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}