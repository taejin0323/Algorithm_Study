#include <bits/stdc++.h>
using namespace std;

int migratoryBirds(int n, vector <int> ar) {
	vector <int> type(5, 0);
	int max = 0, answer;

	for (int i = 0; i < n; i++) {
		type[ar[i] - 1]++;
		if (type[ar[i] - 1] > max) {
			max = type[ar[i] - 1];
			answer = ar[i];
		}
		else if (type[ar[i] - 1] == max && ar[i] < answer) {
			answer = ar[i];
		}
	}
	return answer;
}

int main(){
	int n; cin >> n;
	vector <int> ar(n);
	copy_n(istream_iterator<int>(cin), n, ar.begin());
	int result = migratoryBirds(n, ar);
	cout << result << endl;
	return 0;
}
