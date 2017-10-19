#include <iostream>
#include <vector>
using namespace std;

/*
�ִ����� �ּҰ���� ���ϴ� �˰����� ��Ŭ���� ȣ������ ���

�ٸ� ����� Ǯ��
--------------------------------------------------------------------
numeric ����� accumulate �Լ��� ����ؼ� ����� ���δ�
int gcd_element(const vector<int>& v)
{
	return accumulate(begin(v), end(v), *begin(v), gcd);
}

====================================================================
copy_n �Լ��� c++11���� �߰��� �˰������� algorithm ����� ����
iterator ������ �߰��� �����ؾ� �� �� ����
�Ź� for������ �Է¹޴� �� ���� �̷� ǥ���� �� ����� �� ����

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

int main(){
	int n, m; cin >> n >> m;	//number of elements in set A, B
	vector <int> A(n), B(m);
	int lcm_A, gcd_B, cnt=0;

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
