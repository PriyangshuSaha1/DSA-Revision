#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxDiff(vector<int> &arr) {
    int n = arr.size();
    
    if(n < 2) return -1;  // Not enough elements
    
    vector<int> SuffixMax(n, 0);

    // Build Suffix Maximum Array
    SuffixMax[n - 1] = arr[n - 1];

    for(int i = n - 2; i >= 0; i--) {
        SuffixMax[i] = max(arr[i], SuffixMax[i + 1]);
    }

    // Find maximum difference
    int ans = -1;

    for(int i = 0; i < n - 1; i++) {
        if(SuffixMax[i + 1] > arr[i]) {
            ans = max(ans, SuffixMax[i + 1] - arr[i]);
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    if(n <= 0) {
        cout << "Invalid size!" << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxDiff(arr);

    if(result == -1)
        cout << "No valid maximum difference found." << endl;
    else
        cout << "Maximum Difference is: " << result << endl;

    return 0;
}
