#include <iostream>
#include <string>
using namespace std;

int firstUniqChar(string& s) {
    
    int n = s.size();
    int count[26] = {0};

    // Count frequency of each character
    for(int i = 0; i < n; i++){
        count[s[i] - 'a']++;
    }

    // Find first character with frequency 1
    for(int i = 0; i < n; i++){
        if(count[s[i] - 'a'] == 1){
            return i;
        }
    }

    return -1;
}

int main() {
    string s;

    cout << "Enter a lowercase string: ";
    cin >> s;

    int index = firstUniqChar(s);

    if(index != -1)
        cout << "First unique character index: " << index << endl;
    else
        cout << "No unique character found." << endl;

    return 0;
}
