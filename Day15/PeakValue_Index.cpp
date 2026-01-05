#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 1;                 // avoid out-of-bound
    int end = arr.size() - 2;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        // peak condition
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        // increasing part
        else if (arr[mid] > arr[mid - 1]) {
            start = mid + 1;
        }
        // decreasing part
        else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // Mountain array must have at least 3 elements
    if (n < 3) {
        cout << "Mountain array must have at least 3 elements." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int peakIndex = peakIndexInMountainArray(arr);

    if (peakIndex != -1) {
        cout << "Peak index is: " << peakIndex << endl;
        cout << "Peak value is: " << arr[peakIndex] << endl;
    } else {
        cout << "No peak found." << endl;
    }

    return 0;
}
