#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

/*
카운팅 정렬을 알려주는 이유가?
*/

int main(){
	int N; cin >> N;
	vector<int> ar(N), ar_num(100, 0);

	for (int i = 0; i < N; i++) {
		cin >> ar[i];
		ar_num[ar[i]]++;
	}

	for (int j = 0; j < 100; j++) {
		for (int k = 0; k < ar_num[j]; k++) {
			cout << j << ' ';
		}
	}

	return 0;
}
