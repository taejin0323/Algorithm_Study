#include<iostream>
using namespace std;

/*
�����ϴ� �ڿ����� Ȧ�� (..., n-1, n, n+1, ...) ¦�� (..., n-1, n, n+1, n+2, ...)
�ϴ� �������
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

	// �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << testAnswer;
}
