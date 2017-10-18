#include <iostream>
using namespace std;

/*
C에서는 변수 선언이 함수의 가장 첫 부분에서 이루어져야하는데
C++에서는 자유로워서 너무 여기저기서 선언을 하면 난잡해 보이는데
가독성을 위해서 어떻게 하는게 좋을지 고민해봤다

다른 사람들의 풀이도 대부분 비슷했고
사과의 갯수를 계산하는 함수를 따로 생성하는게 조금 더 정돈되어 보이긴 했다
*/

int main(){
	int s, t; cin >> s >> t;	//Sam's house range
	int a, b; cin >> a >> b;	//Apple tree, Orange tree
	int m, n; cin >> m >> n;	//number of apples, oranges
	vector <int> apple(m), orange(n);
	int d, a_cnt = 0, o_cnt = 0;	//distance, count

	for (int i = 0; i < m; i++) {
		cin >> apple[i];
		d = a + apple[i];
		if (d >= s && d <= t) a_cnt++;
	}
	for (int i = 0; i < n; i++) {
		cin >> orange[i];
		d = b + orange[i];
		if (d >= s && d <= t) o_cnt++;
	}
	
	cout << a_cnt << endl << o_cnt;
	return 0;
}
