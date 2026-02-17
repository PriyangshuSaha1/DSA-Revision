#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> addTwoMatrix(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {

    // If addition is not possible
    if(mat1.size() != mat2.size() || mat1[0].size() != mat2[0].size()){
        vector<vector<int>> ans(1, vector<int>(1));
        ans[0][0] = -1;
        return ans;
    }

    int rowSize = mat1.size(), colSize = mat1[0].size();

    vector<vector<int>> ans(rowSize, vector<int>(colSize));

    for(int i = 0; i < rowSize; i++){
        for(int j = 0; j < colSize; j++){
            ans[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    return ans;
}

int main() {

    vector<vector<int>> mat1 = {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<vector<int>> mat2 = {
        {7, 8, 9},
        {10, 11, 12}
    };

    vector<vector<int>> result = addTwoMatrix(mat1, mat2);

    if(result.size() == 1 && result[0][0] == -1){
        cout << "Matrix addition not possible ❌ (Different dimensions)";
    } else {
        cout << "Resultant Matrix after Addition:\n";
        for(auto row : result){
            for(auto val : row){
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
