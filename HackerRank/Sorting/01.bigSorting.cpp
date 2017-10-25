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

/*
기본적인 sort 함수를 사용하면 비교 연산자가 이상하게 작동한다
1 
10 
3 
3 
31414... 
5
이렇게 결과가 출력되는데 이유를 잘 모르겠다
string 함수에서 비교 연산자는 사전식 배열 크기 비교를 하는데 그래서 그런가...

오버로딩에 대해 대충 훓어만 보고 다음에 제대로 공부해 봐야겠다

계속 삽질하면서 string에서 int형 변환 방법도 새로 배웠다
atoi 함수를 사용하는 방법이 흔한데, atoi(str.c_str())
unsigned int로 변환하는 방법을 소개한 글이 있길래 적어둔다
string str;
unsigned int num = stoul(str, nullptr, 0);

모든 것을 한번에 이해하기는 어렵지만 계속 보다보면 늘겠지...
*/