#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

/*
��κ��� ���� ������� �񱳸� ���� ������� �ð� ���⵵�� n*log(n)���� ���� ���� ����
������ �Է� ��Ŀ� ���� �� �ð��� ���� ���� �ִ�
*/

void countingSort(vector<int> _ar) {
	vector <int> num(100, 0);
	for (int i = 0; i < _ar.size(); i++) {
		num[_ar[i]]++;
	}
	for (int j = 0; j < 100; j++) {
		cout << num[j] << ' ';
	}
}

int main(){
	int N; cin >> N;
	vector <int> ar(N);
	copy_n(istream_iterator<int>(cin), N, begin(ar));

	countingSort(ar);

	return 0;
}
