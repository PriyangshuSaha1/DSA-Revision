#include <bits/stdc++.h>
using namespace std;

/*
    This function checks whether there exists
    any triplet in the array whose sum is equal
    to the given target value.
*/
bool hasTripletSum(vector<int> &arr, int target) {

    // Sort the array to apply two-pointer technique
    sort(arr.begin(), arr.end());

    int n = arr.size();

    // Fix one element and find remaining two
    for (int i = 0; i < n - 2; i++) {

        int start = i + 1;
        int end = n - 1;
        int newTarget = target - arr[i];

        // Two-pointer approach for remaining two numbers
        while (start < end) {

            if (arr[start] + arr[end] == newTarget) {
                return true;   // Triplet found
            }
            else if (arr[start] + arr[end] < newTarget) {
                start++;
            }
            else {
                end--;
            }
        }
    }

    return false;   // No triplet found
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

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    // Check for triplet sum
    if (hasTripletSum(arr, target)) {
        cout << "Triplet with given sum exists" << endl;
    } else {
        cout << "Triplet with given sum does not exist" << endl;
    }

    return 0;
}
