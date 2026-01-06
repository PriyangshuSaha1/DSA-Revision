#include <iostream>
#include <vector>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
    int missingNumber = k;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > missingNumber) {
            return missingNumber;
        } else {
            missingNumber++;
        }
    }

    return missingNumber;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " positive integers (sorted):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    int result = findKthPositive(arr, k);

    cout << "The " << k << "th missing positive number is: " << result << endl;

    return 0;
}
