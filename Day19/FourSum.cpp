#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    This function checks whether there exists
    any four numbers in the array whose sum
    is equal to X.
*/
bool find4Numbers(vector<int>& A, int X) {

    // Sort the array
    sort(A.begin(), A.end());

    int n = A.size();

    // Fix first two elements
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {

            int start = j + 1;
            int end = n - 1;
            int newTarget = X - A[i] - A[j];

            // Two-pointer approach for remaining two numbers
            while (start < end) {

                if (A[start] + A[end] == newTarget) {
                    return true;   // Quadruplet found
                }
                else if (A[start] + A[end] < newTarget) {
                    start++;
                }
                else {
                    end--;
                }
            }
        }
    }

    return false;   // No quadruplet found
}

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> A(n);

    // Enter array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int X;
    cout << "Enter target sum: ";
    cin >> X;

    // Check for quadruplet sum
    if (find4Numbers(A, X)) {
        cout << "Quadruplet with given sum exists" << endl;
    } else {
        cout << "Quadruplet with given sum does not exist" << endl;
    }

    return 0;
}
