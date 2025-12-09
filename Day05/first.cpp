#include<iostream>
using namespace std;

int main(){

    // for loop
    // while loop

    
    // int i = 1;
    
    // while(i<10){
    //     cout<<i<<" ";
    //     i++;
    // }
     
    // do{
    //  cout<<i<<" ";
    //  i++;
    // }while(i<10);

    // // i=4
   
//     int num = 100000;
//     int ans = 0;

//     // 1

//     while(num!=0){
//         // fetch last digit
//         int lastDigit = num%10;
//         num = num/10;

//         ans = ans*10+lastDigit;
//     }

//    cout<<ans<<endl;


//    int num = 17, ans = 0, mul = 1;

//    while(num!=0){
//     // reminder
//     // int rem = num%2;
//     int rem = num&1;
//     // divide kar do

//     //  num = num/2
//     // Right shift operatrion; num = num>>1
//     num = num>>1;
//     ans = ans+rem*mul;
//     mul= mul*10;
//    }


//    XOR & |









// ans = 110+1*1000
//   num = 0 , ans = 1110, mul = 10000 
//  rem = 1
   
//    cout<<ans<<endl;




// //    reverse
     
//      num = ans;
//      ans = 0;
   

//        while(num!=0){
//         // fetch last digit
//         int lastDigit = num%10;
//         num = num/10;

//         ans = ans*10+lastDigit;
//     }

//    cout<<ans<<endl;


   int num = 11011;

   int ans = 0, mul =1;

   while(num!=0){
    
    int rem = num%10;
    num/=10;
    ans = ans+rem*mul;
    mul*=2;
   }

   cout<<ans<<endl;


    return 0;
}