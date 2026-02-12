#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// First Solution (Prefix + Suffix arrays)
int trapWaterPrefixSuffix(vector<int>& arr) {

    int n = arr.size();
    if(n < 3) return 0;

    vector<int> LeftMax(n, 0);
    vector<int> RightMax(n, 0);

    LeftMax[0] = arr[0];
    RightMax[n - 1] = arr[n - 1];

    // Prefix Max
    for(int i = 1; i < n; i++) {
        LeftMax[i] = max(LeftMax[i - 1], arr[i]);
    }

    // Suffix Max
    for(int i = n - 2; i >= 0; i--) {
        RightMax[i] = max(RightMax[i + 1], arr[i]);
    }

    int totalWater = 0;

    for(int i = 1; i < n - 1; i++) {
        int minLeftRight = min(LeftMax[i - 1], RightMax[i + 1]);
        if(minLeftRight > arr[i]) {
            totalWater += minLeftRight - arr[i];
        }
    }

    return totalWater;
}


// Second Solution (Optimized - One extra array)
int trapWaterOptimized(vector<int>& arr) {

    int n = arr.size();
    if(n < 3) return 0;

    vector<int> RightMax(n, 0);
    RightMax[n - 1] = arr[n - 1];

    // Build Suffix Max
    for(int i = n - 2; i >= 0; i--) {
        RightMax[i] = max(RightMax[i + 1], arr[i]);
    }

    int totalWater = 0;
    int LeftMax = arr[0];

    for(int i = 1; i < n - 1; i++) {
        int minLeftRight = min(LeftMax, RightMax[i + 1]);
        if(minLeftRight > arr[i]) {
            totalWater += minLeftRight - arr[i];
        }

        LeftMax = max(LeftMax, arr[i]);
    }

    return totalWater;
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elevation heights: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result1 = trapWaterPrefixSuffix(arr);
    int result2 = trapWaterOptimized(arr);

    cout << "Total Trapped Water (Prefix-Suffix Method): " << result1 << endl;
    cout << "Total Trapped Water (Optimized Method): " << result2 << endl;

    return 0;
}
