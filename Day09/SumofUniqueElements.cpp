// Link: https://strikes.in/practice/68aedbbf98d05a5eb2de2d4c

#include <iostream>
#include <vector>
using namespace std;

int sumOfUnique(vector<int>& nums) {

    // Your code here
    int n = nums.size();
	int sum = 0;

	for(int i=0;i<n;i++){
		bool found = false;

		for(int j=0;j<n;j++){
			if(i==j){
				continue;
			}
			else if(nums[i]==nums[j]){
				found = true;
				break;
			}
		}

		if(found==false){
             sum+=nums[i];
		}
	}


	return sum;
}



// // second:

// int sumOfUnique(vector<int>& nums) {
//     // Your code here

// 	int n = nums.size();

// 	vector<int>freq(101,0);

// 	// Iterate over the array, increase the frequency

// 	for(int i=0;i<n;i++){
// 		freq[nums[i]]++;
// 	}


// 	int sum = 0;

// 	for(int i=1;i<=100;i++){
// 		if(freq[i]==1){
// 			sum+=i;
// 		}
// 	}

// 	return sum;



// }

int main() {
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    vector<int> nums(n);

    cout << "Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    int result = sumOfUnique(nums);
    cout << "Sum of unique elements: " << result << endl;
    return 0;
}

