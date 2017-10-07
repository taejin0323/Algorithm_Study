#include<iostream>
#include<time.h>
#include<vector>
using namespace std;

int numOfPrime(int n)
{
	int answer = 0, cnt;

	//단순 반복문을 사용해 하나하나 검색해 소수를 구분		*시간복잡도 - O(n(n+1)/2)
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
소수판별에는 많은 알고리즘이 존재
	1. 결정적 소수 판정 - Sieve of Eratosthenes(에라토스테네스의 체)
	                    - Euclidean algorithm
						- 페르마, 윈슨 ,APR 등등
	2. 확률적 소수 판정 - Solovay-Strassen
	                    - Lehmann-Peralta
						- Miller-Rain
===========================================================================
그 중 에라토스테네스의 체를 가장 많이 사용하는 것 같다
<정의>
말 그대로 체를 치듯이 수를 걸러내는 방법으로 소수를 구하고자 하는 구간의 모든 수를 나열하고
각 수의 배열을 지워나가는 방법

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
# 추가적으로 시간을 조금 더 단축하기 위해서 소수의 성질을 사용하면 더 좋다#
<정리>
1 보다 큰 자연수 n 에 대하여 √n 보다 작거나 같은 모든 소수가 n을 나누지 못하면 n은 소수이다.
(대우와 귀류법을 통해 증명된다)

for (int i = 2; i*i <= n; i++) {	<-반복문 안에 함수를 사용하는 건 좋지 못한 방법이다 for(int i=2; i <= sqrt(n); i++)
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
