//WAP to demonstrate the concept of Virtual Function Examples?
// Example 2 --> in which we not make a display function in 2nd derived class then the 2nd derived class call the base class display function in case of virtual display function of the base class.
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