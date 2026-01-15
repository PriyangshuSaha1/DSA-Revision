#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;

        int start = 0;
        int end = nums.size() - 1;

        // Two pointer approach
        while (start < end) {

            if (nums[start] + nums[end] == target) {
                // Answer found
                ans.push_back(start + 1); // 1-based index
                ans.push_back(end + 1);
                return ans;
            }
            else if (nums[start] + nums[end] < target) {
                start++;
            }
            else {
                end--;
            }
        }

        return ans;
    }
};

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    // Enter sorted array elements
    cout << "Enter array elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices are: ";
        for (int idx : result) {
            cout << idx << " ";
        }
        cout << endl;
    } else {
        cout << "No two elements found" << endl;
    }

    return 0;
}
