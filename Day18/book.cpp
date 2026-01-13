#include <bits/stdc++.h>
using namespace std;

/*
    This function checks whether it is possible
    to allocate books such that no student gets
    more than maxPages pages.
*/
bool allocateBook(int maxPages, vector<int> &arr, int k) {

    // count = number of students used
    // pages = pages allocated to current student
    int count = 1;
    int pages = arr[0];

    // Traverse through all books
    for (int i = 1; i < arr.size(); i++) {

        pages += arr[i];

        // If pages exceed maxPages,
        // allocate book to next student
        if (pages > maxPages) {
            count++;
            pages = arr[i];
        }
    }

    // If students used are less than or equal to k
    return count <= k;
}

/*
    This function finds the minimum possible
    maximum number of pages that can be allocated
    to any student.
*/
int findPages(vector<int> &arr, int k) {

    int n = arr.size();

    // If students are more than books, allocation not possible
    if (k > n) {
        return -1;
    }

    int start = 0;   // minimum possible answer
    int end = 0;     // maximum possible answer
    int ans = -1;

    // Find the range for binary search
    for (int i = 0; i < n; i++) {
        start = max(start, arr[i]); // maximum pages in a single book
        end += arr[i];              // total pages of all books
    }

    // Binary search on answer
    while (start <= end) {

        int mid = start + (end - start) / 2;

        // Check if allocation is possible with mid as maxPages
        if (allocateBook(mid, arr, k)) {
            ans = mid;        // store possible answer
            end = mid - 1;    // try for better (smaller) answer
        } else {
            start = mid + 1;  // increase pages limit
        }
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter number of books: ";
    cin >> n;

    vector<int> arr(n);

    // Enter pages in each book
    cout << "Enter pages in each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter number of students: ";
    cin >> k;

    // Find and print the minimum maximum pages
    int result = findPages(arr, k);
    cout << "Minimum maximum pages allocated: " << result << endl;

    return 0;
}
