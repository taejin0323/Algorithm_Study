#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

/*
입력된 수들을 정렬해서 맨 처음과 끝을 뺀 합을 구하면 최대 최소를 구할 수 있지만
정렬하지 않고 바로 최대값과 최솟값을 구할 수 있는 함수가 있을 것 같아 공부해봤다
<algorithm> 헤더의 max_element()와 min_element() 함수인데,
이 함수는 값의 주소를 리턴하는데 iterator를 리턴하기도 한다. 값을 참조하려면 * 연산자를 붙여야 한다
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