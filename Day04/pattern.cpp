#include<iostream>
using namespace std;

int main(){


// for(int j=1;j<=5;j++){
//     bool num = j%2;

//     for(int i=0;i<j;i++){
//         cout<<num;
//         num = !num;
//     }

//     cout<<endl;
// }    

// //    1
//    bool num = 1;

//    for(int i=0;i<1;i++){
//     cout<<num;
//    }

//    cout<<endl;

// // 0 1
  
//   num = 0;
//   for(int i=0;i<2;i++){
//     cout<<num;
//     num= !num;
//   }

//   cout<<endl;

//   num=1;
//   for(int i=0;i<3;i++){
//     cout<<num;
//     num= !num;
//   }

//   cout<<endl;

//   num=0;
//   for(int i=0;i<4;i++){
//     cout<<num;
//     num= !num;
//   }



// Level: A
// // Level: A B

// for(char j='B';j<'G';j++){

//   for(char i='A';i<j;i++){
//     cout<<i;
//  }

// cout<<endl;
// }

 
// for(char i='A';i<'B';i++){
//     cout<<i;
// }

// cout<<endl;

 
// for(char i='A';i<'C';i++){
//     cout<<i;
// }

// cout<<endl;

// for(char i='A';i<'D';i++){
//     cout<<i;
// }

// cout<<endl;
  
//  for(char i='B';i<'G';i++){

//   for(char j='A';j<i;j++){
//     cout<<j;
//   }

//     cout<<endl;
//  }


//   for(char j='A';j<'B';j++){
//     cout<<j;
//   }

//   cout<<endl;


//   for(char j='A';j<'C';j++){
//     cout<<j;
//   }

//   cout<<endl;

//   for(char j='A';j<'D';j++){
//     cout<<j;
//   }

//   cout<<endl;


//   A
//   BB
//   CCC
//   DDDD
//   EEEEE

// for(int j=1;j<6;j++){

// char name = 'A'+j-1;

// for(int i=0;i<j;i++){
//     cout<<name;
// }

// cout<<endl;
// }



// for(int i=0;i<1;i++){
//     cout<<"A";
// }

// cout<<endl;


// for(int i=0;i<2;i++){
//     cout<<"B";
// }

// cout<<endl;

// for(int i=0;i<3;i++){
//     cout<<"C";
// }

// cout<<endl;

// i=4 to 0

// 4 space ; print: 1
// 3 space ; print: 121
// 2 space: print: 12321
// 1 space: print: 1234321
// 0 space: print: 123454321



// spaces print karane
// number increaseing order
//  decreasing order

// for(int i=4;i>=0;i--){
   
//     // space print: i
//     for(int j=1;j<=i;j++){
//     cout<<" ";
//     }
    
//     // increasing number: 1 to 5-i
//     for(int j=1;j<=5-i;j++){
//     cout<<j;
//     }
   
//     // decreasing number: 5-i-1 to 1
//     for(int j=5-i-1;j>=1;j--){
//     cout<<j;
//     }

//     cout<<endl;

//     }
  
//  for(int j=1;j<=4;j++){
//     cout<<" ";
//  }

//  for(int j=1;j<=1;j++){
//     cout<<1;
//  }

// cout<<endl;

//  for(int j=1;j<=3;j++){
//     cout<<" ";
//  }

//  for(int j=1;j<=2;j++){
//     cout<<j;
//  }

//  for(int j=1;j>=1;j--){
//     cout<<j;
//  }

//  cout<<endl;


//  for(int j=1;j<=2;j++){
//     cout<<" ";
//  }

//  for(int j=1;j<=3;j++){
//     cout<<j;
//  }

//  for(int j=2;j>=1;j--){
//     cout<<j;
//  }

//  cout<<endl;



//   for(int j=1;j<=1;j++){
//     cout<<" ";
//  }

//  for(int j=1;j<=4;j++){
//     cout<<j;
//  }

//  for(int j=3;j>=1;j--){
//     cout<<j;
//  }

//  cout<<endl;

   
//   for(int i=4;i>=0;i--){

//     // space print
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
    
//     //  print karaunga in increasing order

//     for(int j=1;j<=5-i;j++){
//         cout<<j;
//     }

//     //  print in decreasing order 

//     for(int j=5-i-1;j>=1;j--){
//         cout<<j;
//     }

//     cout<<endl;


//   }


//   Prime Number

//   int num;
//   cin>>num;

//   if(num<2){
//     cout<<"Not a Prime Number";
//   }

//   for(int i=2;i<=num-1;i++){
//     if(num%i==0){
//         cout<<"Not a Prime Number";
//         return 0;
//     }
//   }


//   cout<<"Prime Number";


//   sum of digit

   int num = 345128;
   int sum = 0;

   while(num){
     
    int rem = num%10;
    sum = sum+rem;

    num=num/10;

   }

   cout<<sum;
    

//    int i = 0;

//    while(i<10){
//     cout<<i<<" ";
//     i++;
//    }


    return 0;
}