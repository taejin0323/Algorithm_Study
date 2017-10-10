#include<iostream>
using namespace std;

/*
연속하는 자연수는 홀수 (..., n-1, n, n+1, ...) 짝수 (..., n-1, n, n+1, n+2, ...)
일단 여기까지

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
==========================================================================================
*/

/*
-------------------------------------오  답------------------------------------------------
int expressions(int testCase)
{
	int answer = 0; // 무조건 자기 자신을 포함
	int k = 0, n; // 연속되는 수의 변수 /홀수 합 - kn, 짝수 합 - k(2n+1)/

	while (k < testCase) {
		k++;
		if (testCase % k == 0) {
			//짝수 개의 연속된 수의 합 (k(2n+1))
			n = ((testCase / k) - 1) / 2;
			if (n - k + 1 > 0) {
				answer++; cout << "짝" << n << endl;
			}
		}
		if(testCase % (2*(k-1)+1) == 0){
			//홀수 개의 연속된 수의 합 (kn)
			n = testCase / (2*(k-1)+1);
			if (n - k + 1 > 0) {
				answer++; cout << "홀" << n << endl;
			}
		}
	}

	return answer;
}
=========================================================================================
*/

/*
****************************************************************************************
수학적으로 쉽게 표현할 수 없을까 계속 고민했는데...
어떤 분이 이렇게 풀었다
int expressions(int testCase)
	{
	int answer = 0;
	for (int i = 1; i <= testCase; i++)
	{
		if ((testCase % i == 0) && (i % 2 == 1))
		{
		answer++;
		}
	}
	return answer;
}
정확히 이해는 안되지만
내 생각으로는 연속된 수의 합으로 표현 가능한 testCase는
1부터 n까지의 합에서 1부터 m까지의 합을 뺀 수로 표현이 가능하다
testCase     = n(n+1)/2 - m(m+1)/2 이고,
testCase * 2 = (n-m)(n+m+1)        일 때,
n-m < n+m+1 이고 (n-m)이 짝수이면 (n+m+1)은 홀수가 되고
                 (n-m)이 홀수이면 (n+m+1)은 짝수가 된다

즉, testCase는 홀수인 약수의 갯수 만큼 연속된 수의 합으로 표현 가능하다
****************************************************************************************
*/

//대부분이 2중 반복문을 사용하여 풀었다
int expressions(int testCase)
{
	int answer = 0;
	int sum = 0;

	for (int i = 0; i < testCase; i++) {
		sum = i;
		for (int j = i + 1; i < testCase; j++) {
			sum += j;
			if (testCase == sum) {
				answer++;
			}
			else if(sum > testCase) {
				break;
			}
		}
	}

	return answer;
}


int main()
{
	int testNo = 15;
	int testAnswer = expressions(testNo);

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << testAnswer;
}
