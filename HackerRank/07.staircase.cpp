#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
2중 for문으로 구현하는건 너무 단순한 것 같고
다른 사람의 풀이를 보니 매우 간결하게 표현해 놓았다
setw() 함수는 들어온 인자값 만큼 공간을 만들어 준다
-------------------------------------------------------------
#include <iomanip> 헤더가 추가 되어야한다

for(int i=1; i<=n; i++){
	cout << setfill(' ') << setw(n) << string(i, '#') << endl;
}
==============================================================

앞의 setfill 함수를 보다 정렬해주는 함수는 없나 찾아보니
cout.setf(ios::right)로 오른쪽 정렬을 할 수 있었다
----------------------------------------------------
cout.setf(ios::right);
for(int i=1; i<=n; i++){
	cout << setw(n) << string(i, '#') << endl;
}
=====================================================
*/

int main(){
	int n; cin >> n;
	int s=1;
	while (n) {
		n--;
		for (int i = 0; i < n; i++) {
			cout << " ";
		}
		for (int j = 0; j < s; j++) {
			cout << "#";
		}
		cout << endl;
		s++;
	}
	return 0;
}
