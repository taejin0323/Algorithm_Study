#include <bits/stdc++.h>
using namespace std;

/*
�˰��� ���ΰ� �����ϴٺ���... �׳� �����ؼ� ¦�� ����µ�
�����Լ��� �ð����⵵�� O(n log n)��� ���� �ٸ� ����� ������ ���� �˰ԵǾ���
�׸��� for���� �ٸ� ���ǽ����� ar[i]�� ar[i+1]�� ���ϸ鼭 i�� 2�� ������Ű�� ����� �־���

�ؽ� ��Ʈ�� �̿��� �˰����� �ð����⵵ �������⵵ �� �� O(n)�� �����ٴµ�...
�����ؾ߰ڴ�
*/

int sockMerchant(int n, vector <int> ar) {
	sort(ar.begin(), ar.end());
	int answer = 0, cnt = 1;

	int temp = ar[0];
	for (int i = 1; i<n; i++) {
		if (temp == ar[i]) {
			cnt++;
		}
		else {
			temp = ar[i];
			answer += cnt / 2;
			cnt = 1;
		}
	}

	answer += cnt / 2;

	return answer;
}

int main() {
	int n; cin >> n;
	vector <int> ar(n);
	copy_n(istream_iterator<int>(cin), n, begin(ar));

	int result = sockMerchant(n, ar);
	cout << result << endl;
	return 0;
}
