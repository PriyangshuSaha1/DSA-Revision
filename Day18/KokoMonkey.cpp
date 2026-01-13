#include <bits/stdc++.h>
using namespace std;

/*
    This function checks whether it is possible
    to eat all banana piles within h hours
    if Koko eats at maxSpeed bananas per hour.
*/
bool isEatingBananaPossible(int maxSpeed, vector<int>& piles, int h) {

    int totalTime = 0;
    int n = piles.size();

    // Calculate total hours needed
    for (int i = 0; i < n; i++) {

        // Time required for current pile
        totalTime += piles[i] / maxSpeed;

        // If some bananas are left, add one more hour
        if (piles[i] % maxSpeed != 0) {
            totalTime++;
        }
    }

    // Check if total time is within allowed hours
    return totalTime <= h;
}

/*
    This function finds the minimum eating speed
    required to eat all bananas within h hours.
*/
int minEatingSpeed(vector<int>& piles, int h) {

    int n = piles.size();

    int start = 1;     // minimum possible speed
    int end = 0;       // maximum possible speed
    int ans = -1;

    // Maximum speed can be sum of all bananas
    for (int i = 0; i < n; i++) {
        end += piles[i];
    }

    // Binary search on eating speed
    while (start <= end) {

        int mid = start + (end - start) / 2;

        // Check if Koko can eat at speed mid
        if (isEatingBananaPossible(mid, piles, h)) {
            ans = mid;        // store possible answer
            end = mid - 1;    // try smaller speed
        } else {
            start = mid + 1;  // increase speed
        }
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter number of piles: ";
    cin >> n;

    vector<int> piles(n);

    // Enter bananas in each pile
    cout << "Enter bananas in each pile: ";
    for (int i = 0; i < n; i++) {
        cin >> piles[i];
    }

    int h;
    cout << "Enter total hours available: ";
    cin >> h;

    // Find minimum eating speed
    int result = minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << result << endl;

    return 0;
}
