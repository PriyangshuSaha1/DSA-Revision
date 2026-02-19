#include <iostream>
#include <string>
using namespace std;

void reverseString(string &s) {

    int start = 0;
    int end = s.size() - 1;

    while(start < end) {
        swap(s[start], s[end]);   // built-in swap
        start++;
        end--;
    }
}

int main() {

    string s;
    cout << "Enter a string: ";
    cin >> s;

    reverseString(s);

    cout << "Reversed string: " << s << endl;

    return 0;
}
