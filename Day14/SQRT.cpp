#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
    if (x == 0 || x == 1)
        return x;

    int low = 1, high = x, ans = -1;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * mid == x)// to prevent stack overflow mid==x/mid
            return mid;
        else if (mid * mid < x) {//mid<x/mid
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Square Root (integer part): " << mySqrt(x) << endl;

    return 0;
}
