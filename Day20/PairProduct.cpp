#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    This function checks whether there exists
    a pair in the array whose product is equal
    to the given target value.
*/
bool isProduct(vector<int>& arr, long long target) {

    // Sort the array
    sort(arr.begin(), arr.end());

    int mid = -1;
    int n = arr.size();

    // Find last index of negative number
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            mid = i;
        } else {
            break;
        }
    }

    // Case 1: target is non-negative
    if (target >= 0) {

        // Case 1.1: both numbers are negative
        int start = 0;
        int end = mid;

        while (start < end) {
            long long product = 1LL * arr[start] * arr[end];

            if (product == target) {
                return true;
            } else if (product < target) {
                end--;
            } else {
                start++;
            }
        }

        // Case 1.2: both numbers are positive
        start = mid + 1;
        end = n - 1;

        while (start < end) {
            long long product = 1LL * arr[start] * arr[end];

            if (product == target) {
                return true;
            } else if (product < target) {
                start++;
            } else {
                end--;
            }
        }
    }
    // Case 2: target is negative
    else {

        // One number negative, one positive
        int start = 0;
        int end = mid + 1;

        while (start <= mid && end < n) {
            long long product = 1LL * arr[start] * arr[end];

            if (product == target) {
                return true;
            } else if (product > target) {
                end++;
            } else {
                start++;
            }
        }
    }

    return false;   // No such pair found
}

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

    long long target;
    cout << "Enter target product: ";
    cin >> target;

    // Check for pair with given product
    if (isProduct(arr, target)) {
        cout << "Pair with given product exists" << endl;
    } else {
        cout << "Pair with given product does not exist" << endl;
    }

    return 0;
}
