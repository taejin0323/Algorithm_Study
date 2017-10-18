#include <iostream>
using namespace std;

/*
C������ ���� ������ �Լ��� ���� ù �κп��� �̷�������ϴµ�
C++������ �����ο��� �ʹ� �������⼭ ������ �ϸ� ������ ���̴µ�
�������� ���ؼ� ��� �ϴ°� ������ ����غô�

�ٸ� ������� Ǯ�̵� ��κ� ����߰�
����� ������ ����ϴ� �Լ��� ���� �����ϴ°� ���� �� �����Ǿ� ���̱� �ߴ�
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
