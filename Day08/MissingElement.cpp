#include<iostream>
#include<vector>
using namespace std;


int missingNum(vector<int>& arr) {
        // code here
        int size = arr.size();
        
        for(int i=1;i<=(size+1);i++){
        
            bool found = false;
            // array ko traverse karna, for particular value i
            for(int j=0;j<size;j++){
                if(arr[j]==i){
                found = true;
                break;
                }
            }
            
        
            if(found==false){
                return i;
            }
        }
    }


// // another solution
    
// int missingNum(vector<int>& arr) {
//         // code here
//         int size = arr.size();
        
//         int sum = 0;
//         long long n = size+1;
        
//         for(int i=0;i<size;i++){
//             sum+=arr[i];
//         }
        
//         //  sum = 11
        
//         //  sum of first n natural number
//         n = n*(n+1)/2;
//         // n = 15
        
//         return n-sum;
        
        
//     }


int main(){
    vector<int>arr={1,2,4,5,6,};
    cout<<missingNum(arr);
}


    // Another solution

//  class Solution {
//   public:
//     int missingNum(vector<int>& arr) {
//         // code here
//         int size = arr.size();
//         int ans = 0;
        
//         //  xor of whole array
//         for(int i=0;i<size;i++){
//             ans = ans^arr[i];
//         }
        
//         // ans = xor of array
        
//         // xor karunga to size+1
//         int x = 0;
//         for(int i=1;i<=size+1;i++){
//            x = x^1;
//         }
        
//         return ans^x;
//     }
// };   