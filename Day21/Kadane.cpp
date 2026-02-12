#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int n = arr.size();
    int maxSum = INT_MIN, subSum = 0;

    for(int i = 0; i < n; i++) {
        // If previous sum is negative, start new subarray
        if(subSum < 0) {
            subSum = arr[i];
        } else {
            subSum += arr[i];
        }

        maxSum = max(maxSum, subSum);
    }

    return maxSum;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxSubarraySum(arr);
    cout << "Maximum Subarray Sum is: " << result << endl;

    return 0;
}
