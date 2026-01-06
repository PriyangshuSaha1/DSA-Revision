#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int key) {
    int n = arr.size() - 1;
    int left = 0, right = n;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        // left portion is sorted
        else if (arr[mid] >= arr[0]) {
            if (key >= arr[left] && key < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        // right portion is sorted
        else {
            if (key > arr[mid] && key <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return -1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements (rotated sorted array):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int index = search(arr, key);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}
