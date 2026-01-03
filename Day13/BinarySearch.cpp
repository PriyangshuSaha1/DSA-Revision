#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int n = nums.size();

    int start = 0, end = n - 1;

    while (start <= end) {

        // Correct way to calculate mid to avoid overflow
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            // Search in right half
            start = mid + 1;
        }
        else {
            // Search in left half
            end = mid - 1;
        }
    }

    return -1;  // Target not found
}

int main() {
    int n;
    
    // Enter number of elements in array
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> nums(n);

    // Enter array elements (sorted array required)
    cout << "Enter array elements (sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;

    // Enter target element to search
    cout << "Enter target element: ";
    cin >> target;

    int result = search(nums, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
