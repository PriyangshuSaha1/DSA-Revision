// Link: https://www.geeksforgeeks.org/problems/rotate-array-clockwise/1

#include <iostream>
#include <vector>
using namespace std;

// //1st solution(Easiest Approach)
// void rotateclockwise(vector<int>& arr, int k) {
//     // code here
//     while(k){ //while(k!=0)

//     int n = arr.size();
    
//     // store the last number in temp variable
//     int temp = arr[n-1];
    
//     // n-2 to 0, shift them one position to right
    
//     for(int i=n-2;i>=0;i--){
//         arr[i+1] = arr[i];
//     }
    
//     // oindex wale pe temp wale ko daal do
    
//     arr[0] = temp;
//     k--;
//     }

// }
// int main() {
//     //user input array
//     int n,k;
//     cout << "Enter number of elements in array: ";
//     cin >> n;
//     vector<int> arr(n);
//     cout << "Enter elements of array: ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     cout << "Enter number of positions to rotate: ";
//     cin >> k;
//     rotateclockwise(arr,k);
//     cout << "Array after rotation: ";
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// };


// // next solution

// class Solution {
//   public:
//     void rotateclockwise(vector<int>& arr, int k) {
//         // code here
//         int n = arr.size();
//         vector<int>nums(n);
//         // created new array
        
        
//         // now iterate over the arr (array)
//         for(int i=0;i<n;i++){
//             nums[(i+k)%n] = arr[i];
//         }
        
        
//         // copy new array into older array
        
//         for(int i=0;i<n;i++){
//             arr[i] = nums[i];
//         }
        
        
        
//     }
// };


//optimal solution using reverse 
void reverse(vector<int>& arr, int start, int end) {
    while (start <= end) {
        int temp = arr[start];
        arr[start]=arr[end-1];
        arr[end-1]=temp;
        start++;
        end--;
    }
}
void rotateclockwise(vector<int>& arr, int k) {
    // code here
    int n = arr.size();
    k = k % n; // in case k is greater than n
    // reverse the whole array

    if(k==0) return; // if k is 0 no need to rotate

    reverse(arr,0, n);
    // reverse first k elements
    reverse(arr,0, k);
    // reverse the remaining n-k elements
    reverse(arr,k, n);
}
int main() {
    //user input array
    int n,k;
    cout << "Enter number of elements in array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter number of positions to rotate: ";
    cin >> k;
    rotateclockwise(arr,k);
    cout << "Array after rotation: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
};


