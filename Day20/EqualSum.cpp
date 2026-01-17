#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> EqualSum(vector<int> arr) {

        int sum = 0;
        int n = arr.size();

        // Calculate sum of all elements in the array
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        int leftSum = 0;
        int rightSum;

        // ans[0] -> minimum absolute difference
        // ans[1] -> index (1-based) where split happens
        // ans[2] -> which side has larger sum
        //           1 = right subarray, 2 = left subarray
        vector<int> ans(3);
        ans[0] = INT_MAX;

        for (int i = 0; i < n - 1; i++) {

            leftSum += arr[i];
            rightSum = sum - leftSum;

            // If current difference is worse, skip
            if (abs(leftSum - rightSum) > ans[0]) {
                continue;
            }

            // Update answer based on which side is larger
            if (rightSum > leftSum) {
                ans[2] = 1;
                ans[0] = rightSum - leftSum;
                ans[1] = i + 2;   // 1-based index
            } else {
                ans[2] = 2;
                ans[0] = leftSum - rightSum;
                ans[1] = i + 2;   // 1-based index
            }
        }

        return ans;
    }
};

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

    Solution obj;
    vector<int> result = obj.EqualSum(arr);

    cout << "Minimum difference: " << result[0] << endl;
    cout << "Split index (1-based): " << result[1] << endl;

    if (result[2] == 1) {
        cout << "Right subarray has larger sum" << endl;
    } else {
        cout << "Left subarray has larger sum" << endl;
    }

    return 0;
}
