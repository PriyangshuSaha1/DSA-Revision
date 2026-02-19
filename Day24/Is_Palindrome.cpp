#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string& s) {

    int start = 0, end = s.size() - 1;

    while(start < end){
        if(s[start] != s[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {

    string s;
    cout << "Enter a string: ";
    cin >> s;

    if(isPalindrome(s))
        cout << "It is a Palindrome." << endl;
    else
        cout << "It is NOT a Palindrome." << endl;

    return 0;
}
