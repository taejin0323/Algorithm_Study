#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int h_cnt = 0; l_cnt = 0;

void BTR(vector <int> score) {
	int highest = score[0], lowest = score[0];
	for (int i = 1; i < score.size(); i++) {
		if (score[i] > highest) {
			highest = score[i];
			h_cnt++;
		}
		if (score[i] < lowest) {
			lowest = score[i];
			l_cnt++;
		}
	}
}

int main(){
	int n; cin >> n;
	vector <int> score(n);

	copy_n(istream_iterator<int>(cin), n, begin(score));

	BTR(score);

	cout << h_cnt << ' ' << l_cnt;

	return 0;
}
