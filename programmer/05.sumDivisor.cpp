#include<iostream>
using namespace std;

int sumDivisor(int n)
{
	int sum = 0;

	for (int i = 1; i < n / 2; i++) {
		if (n%i == 0) {
			//����� Ư¡�� �̿��� ������ ������ ����� ���ؼ� �ð��� �����Ѵ�
			if (n / i > i)
				sum = sum + i + n / i;
		}
	}

	/*
	���б� �� ��� ������ ��ǻ�� �������δ� ��ȿ�� ���̶� ������� ����
	# A = a^x + b^y + c^z �� ��, A�� ����� ����
		-> (x+1)(y+1)(z+1)

								 A�� ����� ��
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