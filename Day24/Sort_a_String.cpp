#include <iostream>
#include <string>
using namespace std;

string sort(string &s) {
    
    int count[26] = {0};
    int n = s.size();

    // Count frequency
    for(int i = 0; i < n; i++){
        count[s[i] - 'a']++;
    }

    // Build sorted string
    string ans;

    for(int i = 0; i < 26; i++){
        char c = 'a' + i;
        while(count[i]){
            ans.push_back(c);
            count[i]--;
        }
    }

    return ans;
}

int main() {

    string s;
    cout << "Enter lowercase string: ";
    cin >> s;

    string result = sort(s);

    cout << "Sorted string: " << result << endl;

    return 0;
}

