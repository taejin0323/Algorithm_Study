#include<iostream>
using namespace std;

int collatz(long num)
{
	int answer = 0;
	while (num > 1) {
		if (num % 2 == 0) {
			num = num / 2;
		}
		else {
			num = (num * 3) + 1;
		}
		answer++;
		if (answer == 500) {
			answer = -1;
			break;
		}
	}
	return answer;
}

int main()
{
	int testCase = 6;
	int testAnswer = collatz(testCase);

	cout << testAnswer;
}