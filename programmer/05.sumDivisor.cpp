#include<iostream>
using namespace std;

int sumDivisor(int n)
{
	int sum = 0;

	for (int i = 1; i < n / 2; i++) {
		if (n%i == 0) {
			//약수의 특징을 이용해 제곱근 수까지 약수를 구해서 시간을 단축한다
			if (n / i > i)
				sum = sum + i + n / i;
		}
	}

	/*
	중학교 때 배운 공식은 컴퓨터 연산으로는 비효율 적이라 사용하지 않음
	# A = a^x + b^y + c^z 일 때, A의 약수의 개수
		-> (x+1)(y+1)(z+1)

								 A의 약수의 합
		-> (1 + a^1 + a^2 + ... + a^x)(1 + b^1 + ... + b^y)(1 + z^1 + ... + c^z)
	*/

	return sum;
}

int main()
{
	int testCase = 10;
	int testAnswer = sumDivisor(testCase);

	cout << testAnswer;
}