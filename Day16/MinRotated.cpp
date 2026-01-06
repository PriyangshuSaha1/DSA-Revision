#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        // array already sorted
        if (nums[0] <= nums[n - 1]) {
            return nums[0];
        }

        int left = 0, right = n - 1;
        int minElement ;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // left sorted part
            if (nums[mid] >= nums[0]) {
                left = mid + 1;
            }
            // right sorted part
            else {
                minElement = nums[mid];
                right = mid - 1;
            }
        }

        return minElement;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.findMin(nums);

    cout << "Minimum element is: " << result << endl;

    return 0;
}
