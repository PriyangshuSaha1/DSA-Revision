#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& mat) {
    	 
    // Transpose (works for square matrix)
    int rowSize = mat.size(), colSize = mat[0].size();

    for(int i = 0; i < rowSize - 1; i++){
        for(int j = i + 1; j < colSize; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }

    // Vertical flip (reverse columns)
    int colStart = 0, colEnd = mat[0].size() - 1;

    while(colStart < colEnd){
        for(int i = 0; i < rowSize; i++){
            swap(mat[i][colStart], mat[i][colEnd]);
        }
        colStart++;
        colEnd--;
    }
}

int main() {

    // Example: 3x3 square matrix
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";
    for(auto row : mat){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    rotate(mat);

    cout << "\nMatrix After 90 Degree Clockwise Rotation:\n";
    for(auto row : mat){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

