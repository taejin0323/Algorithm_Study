#include<iostream>
using namespace std;

long long fibonacci(int n)
{
	long long *arr = new long long[100];
	long long i = 1;
	arr[0] = 0;
	arr[1] = 1;
	//�ݺ����� ���
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	/*
	//�Ϲ��� ��� ���				�ð� ���⵵ - O(2^n)
	int Fibo(int n){
		if(n<=1)
			return n;
		else
			return Fibo(n-1)+Fibo(n-2);
	}
	
	//���� ��� ���				�ð� ���⵵ - O(n)
	int FiboTail(int n){
		return FiboTailRec(n, 0, 1);
	}

	int FiboTailRec(int n, int before, int next){
		if(n==0) return before;
		else
			return FiboTailRec(n-1, next, before+next);
	}

	//�޸������̼��� �߰��� ��� ���	�ð� ���⵵ - O(n)
	int memo[size];
	int Fibo(int n){
		if(n<=1)
			return n;
		else if(memo[n] != 0)
			return memo[n];
		else
			return memo[n] = Fibo[n-1] + Fibo[n-2];
	}
	*/


	return arr[n];
}

int main()
{
	int testCase = 10;
	long long testAnswer = fibonacci(testCase);

	cout << testAnswer;
}