/*<bits/stdc++.h> 헤더가 편하긴 한데, 공부하는 입장에서 함수마다 어떤 헤더로 부터
사용되는지 익히기 위해서 다시 쓰기로 결정
문제를 많이 풀고싶은데 차근차근 공부하는게 아니라서 마구잡이로 찾다보니 시간이 많이 걸리는 것 같다
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;

bool comp (string a, string b) {
	int n = a.length();
	int m = b.length();
	if (n == m)
		return (a<b);

	return n<m;
}

int main(){
	int n;
	cin >> n;
	vector <string> unsorted(n);
	copy_n(istream_iterator<string>(cin), n, begin(unsorted));

	//sort함수의 기본은 '<' 연산자로 비교하는데
	//커스텀으로 compare 함수를 생성하지 않고 연산자를 오버로딩 하고싶었다
	//http://soen.kr/lecture/ccpp/cpp3/28-2-3.htm 참고
	sort(unsorted.begin(), unsorted.end(), comp);

	for (int i = 0; i < n; i++) {
		cout << unsorted[i] << endl;
	}

	return 0;
}
