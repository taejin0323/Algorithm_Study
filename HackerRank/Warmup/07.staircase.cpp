#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
2�� for������ �����ϴ°� �ʹ� �ܼ��� �� ����
�ٸ� ����� Ǯ�̸� ���� �ſ� �����ϰ� ǥ���� ���Ҵ�
setw() �Լ��� ���� ���ڰ� ��ŭ ������ ����� �ش�
-------------------------------------------------------------
#include <iomanip> ����� �߰� �Ǿ���Ѵ�

for(int i=1; i<=n; i++){
	cout << setfill(' ') << setw(n) << string(i, '#') << endl;
}
==============================================================

���� setfill �Լ��� ���� �������ִ� �Լ��� ���� ã�ƺ���
cout.setf(ios::right)�� ������ ������ �� �� �־���
----------------------------------------------------
cout.setf(ios::right);
for(int i=1; i<=n; i++){
	cout << setw(n) << string(i, '#') << endl;
}
=====================================================
*/

int main(){
	int n; cin >> n;
	int s=1;
	while (n) {
		n--;
		for (int i = 0; i < n; i++) {
			cout << " ";
		}
		for (int j = 0; j < s; j++) {
			cout << "#";
		}
		cout << endl;
		s++;
	}
	return 0;
}
