// Find First and Last Position of Element in Sorted Array

// You are given a sorted array of integers nums and an integer target.
// Your task is to find the first (starting) index and last (ending) index of target in the array.

// If the target does not exist, return [-1, -1].

// nums = [1, 2, 3, 3, 3, 3, 4, 5]
// target = 3



#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0, end = n - 1;

    // ---------- Find first index ----------
    int index1 = -1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            index1 = mid;
            end = mid - 1;   // move left
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    // ---------- Find last index ----------
    start = 0;
    end = n - 1;
    int index2 = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            index2 = mid;
            start = mid + 1;  // move right
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return {index1, index2};
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    vector<int> result = searchRange(nums, target);

    cout << "First Index: " << result[0] << endl;
    cout << "Last Index: " << result[1] << endl;

    return 0;
}
