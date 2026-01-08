#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int start = 0, end = arr.size() - 1;
    int ans = arr.size();

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // If missing numbers till mid are less than k, move right
        if (arr[mid] - (mid + 1) < k) {
            start = mid + 1;
        }
        // Otherwise, move left
        else {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans + k;
}

int main() {
    int n;

    // Enter number of elements in array
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> arr(n);

    // Enter array elements (sorted positive integers)
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;

    // Enter value of k
    cout << "Enter value of k: ";
    cin >> k;

    int result = findKthPositive(arr, k);

    cout << "Kth missing positive number is: " << result << endl;

    return 0;
}
