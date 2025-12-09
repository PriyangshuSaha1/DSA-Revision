#include<iostream>
using namespace std;

int main(){
    
//    edge case
    int num;
    cout<<"Give number: ";
    cin>>num;

    long long fact = 1;

    for(int i=1;i<=num;i++){
        fact = fact*i;
    }

     
    // fact = 0


    cout<<fact<<endl;
}