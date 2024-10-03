// Day : 73 WAP to demonstrate the concept of Abstract Base Class And Pure Virtual Functions?
// Day : 73 WAP to demonstrate the concept of Virtual Function Examples?
// Example 3 --> if we make a pure virtual display function in base class then we must to make a display function in derived class.

#include<iostream>
#include<cstring>
using namespace std;

/*Properties:
1.) Pure Virtual Function is made for making a Abstract Base Class and Abstract Base Class aims to make a new derived class then it will work can progress.
2.) Abstract Base Class and Pure Virtual Function is related to each other.
3.) Abstract Base Class means we making a class but we cannot make a object of this class. We can only inherited by other classes.
4.) Abstract Base Class must be have minimun one Pure Virtual Function.
*/

class CWH //It is called Abstract Base Class -->> which means this class is made for only to act as a base class for derived class then it will works..
{
    protected:
        string title;
        float rating;
    public:
        CWH(string str, float r)
        {
            title = str;
            rating = r;
        }
        virtual void display() = 0; //do nothing -->> Pure virtual function
};

class CWHvideo : public CWH
{
    float videolenght;
    public:
        CWHvideo(string str, float r, float vl) : CWH(str, r)
        {
            videolenght = vl;
        }
        void display()
        {
            cout<<"This is an amazing video with title "<< title << endl;
            cout<<"Ratings: "<< rating <<" Out of 5 stars"<< endl;
            cout<<"Length of this video is: "<< videolenght <<" minutes"<< endl;
        }
};

class CWHtext : public CWH
{
    int words;
    public:
        CWHtext(string str, float r, int word_count) : CWH(str, r)
        {
            words = word_count;
        }
        void display()
        {
            cout<<"This is an amazing text tutorial with title "<< title << endl;
            cout<<"Ratings of this text tutorial: "<< rating <<" Out of 5 stars"<< endl;
            cout<<"Number of words in this text tutorial is: "<< words <<" words"<< endl;
        }
};

int main()
{
    string title;
    float rating, video_len;
    int words;

    // for code with harry video
    title = "Django tutorial";
    video_len = 4.56;
    rating = 4.89;

    CWHvideo djVideo(title, rating, video_len);
    djVideo.display();   

    // for code with harry text
    title = "Django tutorial textual";
    words = 433;
    rating = 4.19;

    CWHtext djtext(title, rating, words);
    djtext.display();

    // Making two pointers 
    CWH *ptr[2];
    ptr[0] = &djVideo;
    ptr[1] = &djtext;

    ptr[0] -> display();
    ptr[1] -> display();
    
    return 0;
}

/*
Rules to define a virtual functions
1.) They cannot be static.
2.) They are accessed by object pointers.
3.) Virtual function can be a friend of another class.
4.) A virtual function in base class can might not be used.
5.) If a virtual function is defined in the base class, there is no necessity of redefining it in the derived class.  -->> yadi derived class ka display() function nahi define kiya in derived class, toh woh base class ke display() function ko run karega in case of virtual function.
*/
