#include<iostream>
#include<vector>
using namespace std;


/*
문제에 제시된 예제에는 맞는 값을 반환하는데... 제출하면 맨날 틀리지...ㅠ
접근은 맞게 한거 같은데 변수의 범위가 잘못된 것일까...
-------------------------------------------------------------------------------------
long long gcm(int a, long long b) {
	return b ? gcm(b, a%b) : a;
}

long long nlcm(vector<int> num)
{
	long long answer = num[0];

	for (int i = 1; i < num.size(); i++) {
		answer = ((long long)num[i] * answer) / gcm(num[i], answer);
	}

	return answer;
}
======================================================================================
*/

long long gcm(long long a, long long b) {
	return b ? gcm(b, a%b) : a;
}

long long nlcm(vector<int> num)
{
	long long answer = (long long)num[0]; //그..그래

	for (int i = 1; i < num.size(); i++) {
		answer = ((long long)num[i] * answer) / gcm((long long)num[i], answer); // 그런거였어
	}

	return answer;
}

int main()
{
	vector<int> test{ 2,6,8,14 };

	// 아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << nlcm(test);
}
