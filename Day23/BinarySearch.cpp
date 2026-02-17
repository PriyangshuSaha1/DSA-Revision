#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
    int rowSize = matrix.size(), colSize = matrix[0].size(); 
    int start = 0, end = rowSize * colSize - 1;

    while(start <= end){
        
        int mid = start + (end - start) / 2;

        int rowIndex = mid / colSize;
        int colIndex = mid % colSize;

        if(matrix[rowIndex][colIndex] == target){
            return true;
        }
        else if(matrix[rowIndex][colIndex] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    return false;
}

int main() {

    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
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
