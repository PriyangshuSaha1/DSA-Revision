#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& mat) {
    
    int rowSize = mat.size(), colSize = mat[0].size();

    for(int i = 0; i < rowSize - 1; i++){
        for(int j = i + 1; j < colSize; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    return mat;
}

int main() {
    // Example: 3x3 matrix (Square matrix required for this logic)
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    for (auto row : mat) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    transpose(mat);

    cout << "\nTransposed Matrix:\n";
    for (auto row : mat) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
