#include<iostream>
#include<time.h>
#include<vector>
using namespace std;

int numOfPrime(int n)
{
	int answer = 0, cnt;

	//�ܼ� �ݺ����� ����� �ϳ��ϳ� �˻��� �Ҽ��� ����		*�ð����⵵ - O(n(n+1)/2)
	for (int i = 1; i <= n; i++) {
		cnt = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0) cnt++;
		}
		if (cnt == 2) answer++;
	}

	return answer;
}

/*
�Ҽ��Ǻ����� ���� �˰����� ����
	1. ������ �Ҽ� ���� - Sieve of Eratosthenes(�����佺�׳׽��� ü)
	                    - Euclidean algorithm
						- �丣��, ���� ,APR ���
	2. Ȯ���� �Ҽ� ���� - Solovay-Strassen
	                    - Lehmann-Peralta
						- Miller-Rain
===========================================================================
�� �� �����佺�׳׽��� ü�� ���� ���� ����ϴ� �� ����
<����>
�� �״�� ü�� ġ���� ���� �ɷ����� ������� �Ҽ��� ���ϰ��� �ϴ� ������ ��� ���� �����ϰ�
�� ���� �迭�� ���������� ���

int Erostos(int n){
	int answer = 0;
	int *arr = (int *)malloc(sizeof(int)*n);

	for (int i = 2; i <= n; i++) {
		arr[i]=i;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0) continue;
		for (int j = i + i; j <= n; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = 2; i <= n; i++) {
		if (arr[i] != 0) answer++;
	}

	return answer;
}
=========================================================================
# �߰������� �ð��� ���� �� �����ϱ� ���ؼ� �Ҽ��� ������ ����ϸ� �� ����#
<����>
1 ���� ū �ڿ��� n �� ���Ͽ� ��n ���� �۰ų� ���� ��� �Ҽ��� n�� ������ ���ϸ� n�� �Ҽ��̴�.
(���� �ͷ����� ���� ����ȴ�)

for (int i = 2; i*i <= n; i++) {	<-�ݺ��� �ȿ� �Լ��� ����ϴ� �� ���� ���� ����̴� for(int i=2; i <= sqrt(n); i++)
	if (arr[i] == 0) continue;
	for (int j = i + i; j <= n; j += i) {
		arr[j] = 0;
	}
}


*/

int main()
{
	clock_t start, end;

	int testCase = 10;
	start = clock();
	int testAnswer = numOfPrime(testCase);
	end = clock();

	double time = (double)(end - start) / CLOCKS_PER_SEC;

	cout << testAnswer << "\n" << time;
}
