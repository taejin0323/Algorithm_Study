/*<bits/stdc++.h> ����� ���ϱ� �ѵ�, �����ϴ� ���忡�� �Լ����� � ����� ����
���Ǵ��� ������ ���ؼ� �ٽ� ����� ����
������ ���� Ǯ������� �������� �����ϴ°� �ƴ϶� �������̷� ã�ٺ��� �ð��� ���� �ɸ��� �� ����
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

	//sort�Լ��� �⺻�� '<' �����ڷ� ���ϴµ�
	//Ŀ�������� compare �Լ��� �������� �ʰ� �����ڸ� �����ε� �ϰ�;���
	//http://soen.kr/lecture/ccpp/cpp3/28-2-3.htm ����
	sort(unsorted.begin(), unsorted.end(), comp);

	for (int i = 0; i < n; i++) {
		cout << unsorted[i] << endl;
	}

	return 0;
}
