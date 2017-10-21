#include <iostream>
#include <vector>
using namespace std;

/*
최대공약수 최소공배수 구하는 알고리즘은 유클리드 호제법을 사용
다른 사람의 풀이
--------------------------------------------------------------------
numeric 헤더의 accumulate 함수를 사용해서 깔끔해 보인다
int gcd_element(const vector<int>& v)
{
return accumulate(begin(v), end(v), *begin(v), gcd);
}
====================================================================
copy_n 함수는 c++11에서 추가된 알고리즘으로 algorithm 헤더로 부터
iterator 사용법은 추가로 공부해야 될 것 같다
매번 for문으로 입력받는 것 보다 이런 표현이 더 깔끔한 것 같다
copy_n(istream_iterator<int>(cin), m, begin(A));
copy_n(istream_iterator<int>(cin), n, begin(B));
--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/

int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}
int lcm(int a, int b) {
	return a*b / gcd(a, b);
}
int gcd_arr(vector <int> arr) {
	int answer = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		answer = gcd(answer, arr[i]);
	}
	return answer;
}
int lcm_arr(vector <int> arr) {
	int answer = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		answer = lcm(answer, arr[i]);
	}
	return answer;
}

int main() {
	int n, m; cin >> n >> m;	//number of elements in set A, B
	vector <int> A(n), B(m);
	int lcm_A, gcd_B, cnt = 0;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> B[i];
	}

	lcm_A = lcm_arr(A);
	gcd_B = gcd_arr(B);

	for (int i = lcm_A; i <= gcd_B; i += lcm_A) {
		if (gcd_B % i == 0) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}