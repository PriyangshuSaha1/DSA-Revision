#include <iostream>
#include <string>
using namespace std;

string toLower(string &s) {

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            // Convert uppercase to lowercase
            s[i] = 'a' + (s[i] - 'A');
        }
    }

    return s;
}

int main() {

    string s;
    cout << "Enter a string: ";
    cin >> s;

    string result = toLower(s);

    cout << "Lowercase string: " << result << endl;

    return 0;
}
