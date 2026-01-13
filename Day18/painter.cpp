#include <bits/stdc++.h>
using namespace std;

/*
    This function checks whether it is possible
    to paint all boards such that no painter
    paints more than maxPaint units.
*/
bool isPaintingPossible(int maxPaint, vector<int> &arr, int k) {

    // count = number of painters used
    // paint = total paint assigned to current painter
    int count = 1;
    int paint = arr[0];

    int n = arr.size();

    // Traverse all boards
    for (int i = 1; i < n; i++) {

        paint += arr[i];

        // If paint exceeds maxPaint,
        // assign board to next painter
        if (paint > maxPaint) {
            count++;
            paint = arr[i];
        }
    }

    // Check if painters used are within limit
    return count <= k;
}

/*
    This function finds the minimum time
    required to paint all boards using k painters.
*/
int minTime(vector<int> &arr, int k) {

    int n = arr.size();

    int start = 0;   // minimum possible time
    int end = 0;     // maximum possible time
    int ans = -1;

    // Define binary search range
    for (int i = 0; i < n; i++) {
        start = max(start, arr[i]); // largest board
        end += arr[i];              // sum of all boards
    }

    // Binary search on answer
    while (start <= end) {

        int mid = start + (end - start) / 2;

        // Check if painting is possible in mid time
        if (isPaintingPossible(mid, arr, k)) {
            ans = mid;        // store possible answer
            end = mid - 1;    // try smaller maximum time
        } else {
            start = mid + 1;  // increase time
        }
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter number of boards: ";
    cin >> n;

    vector<int> arr(n);

    // Enter length of each board
    cout << "Enter length of each board: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter number of painters: ";
    cin >> k;

    // Find minimum time required
    int result = minTime(arr, k);
    cout << "Minimum time to paint all boards: " << result << endl;

    return 0;
}
