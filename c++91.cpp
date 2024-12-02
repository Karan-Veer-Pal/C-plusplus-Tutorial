#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    int low = 0;
    int high = str.size() - 1;

    // Keep comparing characters while they are same
    while (low < high) {
        if (str[low] != str[high]) {
            return false; // not a palindrome.
        }
        low++; // move the low index forward
        high--; // move the high index backwards
    }
      return true; // is a palindrome     
}

int main()
{
    string str= "abbba";
    string str1 = "abcded";
    
    cout << str << " is palindrome " << isPalindrome(str) << endl;
    cout << str1 << " is palindrome " << isPalindrome(str1) <<endl;
    return 0;
}
