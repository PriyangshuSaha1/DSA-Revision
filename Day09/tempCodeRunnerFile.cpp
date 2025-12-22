// second:

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