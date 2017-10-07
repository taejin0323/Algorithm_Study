#include<vector>
#include<iostream>
using namespace std;
vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;
	int mod = a%b;
	int x = a, y = b;

	//유클리드 호제법 = 2개의 자연수 a, b에 대해서 a를 b로 나눈 나머지를 r이라고 하면
	//                  a와 b의 최대공약수는 b와 r의 최대공약수와 같다.
	//유클리드 호제법을 사용한 반복문
	while (mod >0) {
		x = y;
		y = mod;
		mod = x%y;
	}
	answer.push_back(y);
	answer.push_back(a*b / y);	//최대공약수와 최소공배수의 성질을 이용
	return answer;
}

/*
최소공배수를 구하는 가장 단순하고 직관적인 방법		*시간복잡도 - O(min(a,b))
for(int i=i; i<=min(a,b); i++){
	if(a%i==0 && b%i==0)
		max_div = i;
}

위의 방법을 역순으로 탐색해서 제일 처음 발견되는 최대공약수를 찾으면 멈추는 방법이 조금 빠를 것 같지만
a와 b가 서로소인 경우(최악의 경우) 위와 동일한 시간복잡도를 가지게 된다

유클리드 호제법을 사용한 다른 방법으로		*시간복잡도 - O(log(min(a,b))
재귀함수
int gcd(int a, int b){
	if(a%b==0)
		return b;
	else
		return gcd(b, a%b);
}
삼항 연산자
int gcd(int a, int b){
	return b ? gcd(b, a%b) : a;
}
*/

int main()
{
	int a = 3, b = 12;
	vector<int> testAnswer = gcdlcm(a, b);

	cout << testAnswer[0] << " " << testAnswer[1];
}