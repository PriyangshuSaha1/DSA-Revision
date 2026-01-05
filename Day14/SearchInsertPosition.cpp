#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0, end = n - 1;
    int index = n;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            start = mid + 1;
        else{
            index = mid;
            end = mid-1;
        }
    }
    return index;
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
    cout << "Enter target: ";
    cin >> target;

    cout << "Insert Position: " << searchInsert(nums, target) << endl;

    return 0;
}
