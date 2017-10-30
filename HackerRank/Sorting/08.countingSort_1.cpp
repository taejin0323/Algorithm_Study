#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

/*
대부분의 정렬 방법들은 비교를 통한 방식으로 시간 복잡도가 n*log(n)보다 작을 수가 없다
하지만 입력 방식에 따라 그 시간을 줄일 수가 있다
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
