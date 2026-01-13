#include <bits/stdc++.h>
using namespace std;

/*
    This function checks whether it is possible
    to place k cows in stalls such that the minimum
    distance between any two cows is at least minDist.
*/
bool allocationPossible(int minDist, vector<int> &stalls, int k) {

    int count = 1;                  // number of cows placed
    int cowPosition = stalls[0];    // position of first cow
    int n = stalls.size();

    // Place remaining cows
    for (int i = 1; i < n; i++) {

        // If the distance from last placed cow
        // is at least minDist, place a cow
        if (stalls[i] - cowPosition >= minDist) {
            count++;
            cowPosition = stalls[i];
        }
    }

    // Check if at least k cows can be placed
    return count >= k;
}

/*
    This function finds the maximum possible
    minimum distance between any two cows.
*/
int maxSafeDistance(vector<int> &stalls, int k) {

    int n = stalls.size();

    // Sort stall positions
    sort(stalls.begin(), stalls.end());

    int start = 1;                          // minimum possible distance
    int end = stalls[n - 1] - stalls[0];   // maximum possible distance
    int ans = -1;

    // Binary search on answer
    while (start <= end) {

        int mid = start + (end - start) / 2;

        // Check if cows can be placed with mid distance
        if (allocationPossible(mid, stalls, k)) {
            ans = mid;        // store possible answer
            start = mid + 1;  // try for larger distance
        } else {
            end = mid - 1;    // reduce distance
        }
    }

    return ans;
}

int main() {

    int n;
    cout << "Enter number of stalls: ";
    cin >> n;

    vector<int> stalls(n);

    // Enter stall positions
    cout << "Enter stall positions: ";
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    int k;
    cout << "Enter number of cows: ";
    cin >> k;

    // Find maximum minimum distance
    int result = maxSafeDistance(stalls, k);
    cout << "Maximum minimum distance between cows: " << result << endl;

    return 0;
}
