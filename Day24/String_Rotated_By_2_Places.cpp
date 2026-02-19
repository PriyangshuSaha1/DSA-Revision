#include <iostream>
#include <string>
using namespace std;

bool isRotated(string word1, string word2) {

    if(word1.size() != word2.size())
        return false;

    int n = word1.size();

    // Check clockwise rotation
    bool clockwise = true;
    for(int i = 0; i < n; i++){
        if(word1[i] != word2[(i + 2) % n]){
            clockwise = false;
            break;
        }
    }

    if(clockwise)
        return true;

    // Check anticlockwise rotation
    bool anticlockwise = true;
    for(int i = 0; i < n; i++){
        if(word2[i] != word1[(i + 2) % n]){
            anticlockwise = false;
            break;
        }
    }

    return anticlockwise;
}

int main() {

    string word1, word2;

    cout << "Enter first word: ";
    cin >> word1;

    cout << "Enter second word: ";
    cin >> word2;

    if(isRotated(word1, word2))
        cout << "Yes, it is rotated by 2 places." << endl;
    else
        cout << "No, it is not rotated by 2 places." << endl;

    return 0;
}
