#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    vector<int> spiral;

    int rowStart = 0, colStart = 0;
    int rowEnd = matrix.size() - 1;
    int colEnd = matrix[0].size() - 1;
    
    while(rowStart <= rowEnd && colStart <= colEnd){

        // First row
        for(int j = colStart; j <= colEnd; j++){
            spiral.push_back(matrix[rowStart][j]);
        }
        rowStart++;

        // Last column
        for(int i = rowStart; i <= rowEnd; i++){
            spiral.push_back(matrix[i][colEnd]);
        }
        colEnd--;

        // Last row (reverse)
        if(rowStart <= rowEnd){
            for(int j = colEnd; j >= colStart; j--){
                spiral.push_back(matrix[rowEnd][j]);
            }
            rowEnd--;
        }

        // First column (reverse)
        if(colStart <= colEnd){
            for(int i = rowEnd; i >= rowStart; i--){
                spiral.push_back(matrix[i][colStart]);
            }
            colStart++;
        }
    }

    return spiral;
}

int main() {

    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Original Matrix:\n";
    for(auto row : matrix){
        for(auto val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    vector<int> result = spiralOrder(matrix);

    cout << "\nSpiral Order:\n";
    for(auto val : result){
        cout << val << " ";
    }

    return 0;
}
