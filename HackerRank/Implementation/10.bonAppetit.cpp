#include <bits/stdc++.h>
using namespace std;

/*
�ѹ��� ���� ���̽� Ǯ�̵��� �� �����ϰ� ª�� �� ����
*/

void bonAppetit(int n, int k, int b, vector <int> ar){
	int actual;
	actual = (accumulate(ar.begin(), ar.end(), 0) - ar.at(k))/2;
	if (actual != b) {
		cout << abs(b - actual) << endl;
	}
	else {
		cout << "Bon Appetit" << endl;
	}
}

int main(){
	int n, k;
	cin >> n >> k;
	vector <int> ar(n);
	copy_n(istream_iterator<int>(cin), n, begin(ar));
	int b;
	cin >> b;
	bonAppetit(n, k, b, ar);

	/*
	ó�� �����Ǿ��ִ� �ڵ�� �̰ǵ�... �¾��� �� "Bon Appetit"�� ��� ����ؾ� ���� �𸣰ھ���
	-----------------------------------
	for(int ar_i; ar_i < n; ar_i++){
		cin >> ar[ar_i];
	}
	int b;
	cin >> b;
	int result = bonAppetit(n, k, b, ar);
	cout << result << endl;
	*/
	return 0;
}
