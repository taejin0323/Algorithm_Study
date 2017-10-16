#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

/*
�Էµ� ������ �����ؼ� �� ó���� ���� �� ���� ���ϸ� �ִ� �ּҸ� ���� �� ������
�������� �ʰ� �ٷ� �ִ밪�� �ּڰ��� ���� �� �ִ� �Լ��� ���� �� ���� �����غô�
<algorithm> ����� max_element()�� min_element() �Լ��ε�,
�� �Լ��� ���� �ּҸ� �����ϴµ� iterator�� �����ϱ⵵ �Ѵ�. ���� �����Ϸ��� * �����ڸ� �ٿ��� �Ѵ�
*/

int main() {
	vector <int> arr(5);
	long long max_sum = 0, min_sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	min_sum = accumulate(arr.begin(), arr.end(), 0.0) - *max_element(arr.begin(), arr.end());
	max_sum = accumulate(arr.begin(), arr.end(), 0.0) - *min_element(arr.begin(), arr.end());

	cout << min_sum << ' ' << max_sum << endl;

	return 0;
}