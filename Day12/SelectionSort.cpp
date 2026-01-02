#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int index = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[index]) {
                index = j;
            }
        }

        swap(arr[index], arr[i]);
    }

    return arr;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr);

    cout << "Sorted array: ";
    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
