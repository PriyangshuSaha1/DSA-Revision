// Link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1


#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<int> &arr) {
    // code here
    int n = arr.size();
    
    // store the last number in temp variable
    int temp = arr[n-1];
    
    // n-2 to 0, shift them one position to right
    
    for(int i=n-2;i>=0;i--){
        arr[i+1] = arr[i];
    }
    
    // oindex wale pe temp wale ko daal do
    
    arr[0] = temp;
}

int main() {
    //user input array
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    rotate(arr);
    cout << "Array after rotation: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
};