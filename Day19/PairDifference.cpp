#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    This function checks whether there exists
    a pair in the array whose difference is equal
    to the given value diff.
*/
int pairWithGivenDifference(vector<int>& arr, int diff) {

    // Sort the array
    sort(arr.begin(), arr.end());

    int start = 0;
    int end = 0;
    int n = arr.size();

    // Two-pointer approach
    while (start <= end && end < n) {

        int currentDiff = arr[end] - arr[start];

        if (currentDiff == diff) {
            return 1;   // Pair found
        }
        else if (currentDiff < diff) {
            end++;      // Increase difference
        }
        else {
            start++;    // Decrease difference
        }
    }

    return 0;   // No such pair found
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    // Enter array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int diff;
    cout << "Enter the required difference: ";
    cin >> diff;

    // Check for pair with given difference
    int result = pairWithGivenDifference(arr, diff);

    if (result == 1) {
        cout << "Pair with given difference exists" << endl;
    } else {
        cout << "Pair with given difference does not exist" << endl;
    }

    return 0;
}
