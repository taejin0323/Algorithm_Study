#include<iostream>
using namespace std;

/*
�����ϴ� �ڿ����� Ȧ�� (..., n-1, n, n+1, ...) ¦�� (..., n-1, n, n+1, n+2, ...)
�ϴ� �������

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
-------------------------------------��  ��------------------------------------------------
int expressions(int testCase)
{
	int answer = 0; // ������ �ڱ� �ڽ��� ����
	int k = 0, n; // ���ӵǴ� ���� ���� /Ȧ�� �� - kn, ¦�� �� - k(2n+1)/

	while (k < testCase) {
		k++;
		if (testCase % k == 0) {
			//¦�� ���� ���ӵ� ���� �� (k(2n+1))
			n = ((testCase / k) - 1) / 2;
			if (n - k + 1 > 0) {
				answer++; cout << "¦" << n << endl;
			}
		}
		if(testCase % (2*(k-1)+1) == 0){
			//Ȧ�� ���� ���ӵ� ���� �� (kn)
			n = testCase / (2*(k-1)+1);
			if (n - k + 1 > 0) {
				answer++; cout << "Ȧ" << n << endl;
			}
		}
	}

	return answer;
}
=========================================================================================
*/

/*
****************************************************************************************
���������� ���� ǥ���� �� ������ ��� ����ߴµ�...
� ���� �̷��� Ǯ����
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
��Ȯ�� ���ش� �ȵ�����
�� �������δ� ���ӵ� ���� ������ ǥ�� ������ testCase��
1���� n������ �տ��� 1���� m������ ���� �� ���� ǥ���� �����ϴ�
testCase     = n(n+1)/2 - m(m+1)/2 �̰�,
testCase * 2 = (n-m)(n+m+1)        �� ��,
n-m < n+m+1 �̰� (n-m)�� ¦���̸� (n+m+1)�� Ȧ���� �ǰ�
                 (n-m)�� Ȧ���̸� (n+m+1)�� ¦���� �ȴ�

��, testCase�� Ȧ���� ����� ���� ��ŭ ���ӵ� ���� ������ ǥ�� �����ϴ�
****************************************************************************************
*/

//��κ��� 2�� �ݺ����� ����Ͽ� Ǯ����
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

	// �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << testAnswer;
}
