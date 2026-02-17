// #include <iostream>
// #include <vector>
// using namespace std;

// bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
//     int row = matrix.size();
//     int col = matrix[0].size();

//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//             if(matrix[i][j] == target){
//                 return true;
//             }
//         }
//     }

//     return false;
// }

// int main() {

//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int target;
//     cout << "Enter target to search: ";
//     cin >> target;

//     if(searchMatrix(matrix, target)) {
//         cout << "Target found in matrix";
//     } else {
//         cout << "Target not found in matrix";
//     }

//     return 0;
// }


//USING T.C as O(m+n).
// Start from top-right corner.

// Why?

// If current element > target → move left

// If current element < target → move down

// This eliminates one row or one column in each step.

#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    int row = matrix.size();
    int col = matrix[0].size();

    int i = 0;          // start from first row
    int j = col - 1;    // start from last column (top-right)

    while(i < row && j >= 0) {

        if(matrix[i][j] == target) {
            return true;
        }
        else if(matrix[i][j] > target) {
            j--;        // move left
        }
        else {
            i++;        // move down
        }
    }

    return false;
}

int main() {

    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}
    };

    int target;
    cout << "Enter target to search: ";
    cin >> target;

    if(searchMatrix(matrix, target)) {
        cout << "Target found in matrix";
    } else {
        cout << "Target not found in matrix";
    }

    return 0;
}
