#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
�������� �ڵ��̴�
���� �˰��������� �̷��Ե� �����ϰ� ǥ���� �����ϴٴ�!!

-----------------------------------------------------
int main(){
	int c, n, max = 0;
	cin.ignore();
	while(cin >> n)
		max < n ? c = !!(max = n) : c += max == n;
	cout << c;
	return 0;
}
=====================================================
Ư�� "!!" �� ǥ���� �������� ���ߴ�
!anyNonZeroVal == 0 �̰�,
!0 == 1, ���� !!anyNonZeroVal == 1 �̴�.

���� �ٽ� ���� ��� ���� �ڵ��� �� �� �ִ��� �ű��� ���̴�.
*/

int main(){
	int n; cin >> n;	//�к� ����
	vector <int> candle(n);
	int max = 0, cnt = 1;

	for (int i = 0; i < n; i++) {
		cin >> candle[i];
		if (max < candle[i]) {
			max = candle[i];
			cnt = 1;
		}
		else if (max == candle[i]) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}

