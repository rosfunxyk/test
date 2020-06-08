#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
	vector<int>::iterator it = nums.begin();
	int maxSum = *it;
	int theSum = *it;
	for (it = it + 1; it != nums.end(); it++) {
		theSum = max(theSum + *it, *it);
		if (theSum > maxSum)
			maxSum = theSum;
	}
		return maxSum;
}

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr.push_back(-tmp);
	
	}	
	cout << maxSubArray(arr);
	return 0;
}
