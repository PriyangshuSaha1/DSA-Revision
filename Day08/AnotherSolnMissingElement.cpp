//another solution
   

#include<iostream>
#include<vector>
using namespace std;

int missingNum(vector<int>& arr) {
    int size = arr.size();
        
    int sum = 0;
    long long n = size+1;
        
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
        
    //  sum = 11
        
    //  sum of first n natural number
    n = n*(n+1)/2;
    // n = 15
        
    return n-sum;
        
        
}

int main(){
    vector<int>arr={1,2,4,5,6,7};
    cout<<missingNum(arr);
}