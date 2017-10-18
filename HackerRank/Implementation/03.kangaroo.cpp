#include <iostream>
using namespace std;

/*
3항 연산자를 연습한다고 코딩해봤는데 길다...
문제를 다시 보니 x2가 x1보다 크구나 무조건...
어찌됬건 캥거루 2와 1 사이의 거리가 둘의 속도 차이로 나눠지면 언젠가 만난다는 풀이였다
*/

int main() {
	int x1, v1, x2, v2;	//two kangaroos & each jump range
	cin >> x1 >> v1 >> x2 >> v2;

	cout << (x1 > x2 ? (v2 > v1 ? (((x1 - x2) % (v2 - v1) == 0) ? "YES" : "NO") : "NO") : (v1 > v2 ? (((x2 - x1) % (v1 - v2) == 0) ? "YES" : "NO") : "NO"));

	return 0;
}