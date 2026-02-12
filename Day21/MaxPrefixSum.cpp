#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubarraySum(vector<int> &arr, int left, int right) {
    int maxSum = arr[left], prefixSum = arr[left];
    
    for(int i = left + 1; i <= right; i++) {
        prefixSum += arr[i];
        maxSum = max(prefixSum, maxSum);
    }

    return maxSum;
}

vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
    int querySize = leftIndex.size();
    vector<int> ans;

    for(int i = 0; i < querySize; i++) {
        int prefixSum = maxSubarraySum(arr, leftIndex[i], rightIndex[i]);
        ans.push_back(prefixSum);
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    vector<int> leftIndex(q), rightIndex(q);
    cout << "Enter left and right index for each query (0-based indexing):\n";
    for(int i = 0; i < q; i++) {
        cin >> leftIndex[i] >> rightIndex[i];
    }

    vector<int> result = maxPrefixes(arr, leftIndex, rightIndex);

    cout << "Maximum Prefix Sum for each query:\n";
    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}
