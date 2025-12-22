// Link: https://www.geeksforgeeks.org/problems/second-largest3735/1

#include <iostream>
#include <vector>
using namespace std;
int getSecondLargest(vector<int> &arr) {
    // code here
    int n = arr.size();
    //  find the largest element
    
    int largest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    
    int second_largest = -1;
    
    for(int i=0;i<n;i++){
        if(arr[i]==largest){
            continue;
        }
        else if(arr[i]>second_largest){
            second_largest = arr[i];
        }
    }
    
    return second_largest;
    
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
    int result = getSecondLargest(arr);
    cout << "The second largest element is: " << result << endl;
    return 0;
};