#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canSplit(vector<int>& nums) {

        int totalSum = 0;
        int n = nums.size();

        // Calculate total sum of array
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
        }

        // If total sum is odd, cannot split
        if (totalSum % 2 != 0) {
            return false;
        }

        int target = totalSum / 2;
        int prefixSum = 0;

        // Check if any prefix has sum equal to half of total sum
        for (int i = 0; i < n - 1; i++) {
            prefixSum += nums[i];
            if (prefixSum == target) {
                return true;
            }
        }

        return false;
    }
};

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    // Enter array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;

    // Check if array can be split
    if (obj.canSplit(nums)) {
        cout << "Array can be split into two equal sum parts" << endl;
    } else {
        cout << "Array cannot be split into two equal sum parts" << endl;
    }

    return 0;
}
