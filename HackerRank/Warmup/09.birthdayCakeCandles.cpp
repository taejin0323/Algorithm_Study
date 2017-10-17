#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
예술적인 코딩이다
같은 알고리즘이지만 이렇게도 간결하게 표현이 가능하다니!!

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
특히 "!!" 이 표현은 생각지도 못했다
!anyNonZeroVal == 0 이고,
!0 == 1, 따라서 !!anyNonZeroVal == 1 이다.

정말 다시 봐도 어떻게 저런 코딩을 할 수 있는지 신기할 뿐이다.
*/

int main(){
	int n; cin >> n;	//촛불 갯수
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

