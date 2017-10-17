#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int simpleArraySum(vector<int> arr) {
	int sum = 0;

	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
	}
	/*
	for (int &a : arr) {
		sum += a;
	}
	*/
	return sum;
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N; cin >> N;	//
	vector<int> arr(N);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int sum = simpleArraySum(arr);

	cout << sum << endl;

	return 0;
}
