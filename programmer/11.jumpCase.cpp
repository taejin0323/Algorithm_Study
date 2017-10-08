#include<iostream>
#include<vector>
using namespace std;

/*
뻘짓 하다가 노트에 하나하나 직접 끄적이다 보니 피보나치 수열이라는 걸 알게되었다
*/
int jumpCase(int n)
{
	int a = 0, b = 1, temp;

	if (n <= 1) {
		return n;
	}
	else {
		for (int i = 0; i < n; i++) {
			temp = b;
			b = a + b;
			a = temp;
		}
		return b;
	}
}

/*
삼항연산자를 이용한 매우매우 간단한 다른 사람의 풀이
------------------------------------------------------------------------------
int jumpCase(int num)
{
return num < 2 ? 1 : jumpCase(num - 2) + jumpCase(num - 1);
}
int main()
{
int test = 4;

//아래는 테스트로 출력해 보기 위한 코드입니다.
cout << jumpCase(test);
}
===============================================================================
*/

int main()
{
	int test = 4;

	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << jumpCase(test);
}
