// Day : 71 WAP to demonstrate the concept of Virtual Function Examples?
// Example 1 --> in which we make a all display function to all then constructor call it's own class display function  in case of we made a virtual function in base class.

#include<iostream>
#include<cstring>
using namespace std;

class CWH 
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
        virtual void display()
        {
            cout<<"Bogus Code"<<endl;
        }
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
