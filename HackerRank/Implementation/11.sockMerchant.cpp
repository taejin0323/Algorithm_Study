#include <bits/stdc++.h>
using namespace std;

/*
알고리즘 공부가 부족하다보니... 그냥 정렬해서 짝을 맞췄는데
정렬함수의 시간복잡도가 O(n log n)라는 것을 다른 사람의 설명을 통해 알게되었다
그리고 for문에 다른 조건식으로 ar[i]와 ar[i+1]을 비교하면서 i는 2씩 증가시키는 방법도 있었다

해쉬 세트를 이용한 알고리즘이 시간복잡도 공간복잡도 둘 다 O(n)을 가진다는데...
공부해야겠다
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
