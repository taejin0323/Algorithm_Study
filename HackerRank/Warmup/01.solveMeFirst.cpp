#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//첫번째 문제라서 매우 쉬움
int solveMeFirst(int a, int b) {
	return a + b;
}
int main() {
	int num1, num2;
	int sum;
	cin >> num1 >> num2;
	sum = solveMeFirst(num1, num2);
	cout << sum;
	return 0;
}
