#include<iostream>
using namespace std;

int search(int arr[], int n, int x) {
    // Code here
    // linear search
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    
    return -1;
}
int main(){
    int arr[5]={2,4,3,8,7};
    int x;
    cout<<"Enter the Element to search:";
    cin>>x;
    cout<<search(arr,5,x);

    return 0;
}

// Practice : https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1