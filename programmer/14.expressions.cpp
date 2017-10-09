#include<iostream>
using namespace std;

/*
연속하는 자연수는 홀수 (..., n-1, n, n+1, ...) 짝수 (..., n-1, n, n+1, n+2, ...)
일단 여기까지
*/
int expressions(int testCase)
{
	int answer = 0, n=1, value;

	 while(n*n < testCase){
		if (testCase % (2 * n + 1) == 0) {
			value = testCase / (2 * n + 1);
			if (value - n <= 0) break;
		}
		if (testCase % n == 0) {
			if ((testCase / n - 1) % 2 == 0) {
				value = (testCase / n - 1) / 2;
				if (value - n <= 0) break;
			}
		}
		n++;
	}

	return answer+1;
}

int main()
{
	int testNo = 250;
	int testAnswer = expressions(testNo);

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << testAnswer;
}
