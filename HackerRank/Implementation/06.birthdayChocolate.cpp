#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

/*
�Ȱ��� logic�ε� ���͸� ����ϸ� ���׸�Ʈ ������ �߰�...
���־� ��������� �Ʒ� �ڵ带 ������Ѻ��� int a[n]���� ������� �Է��϶�� ��������...
�� �̷� �������� �߻��ϴ��� �� �𸣰ڴ٤�

---------------------------------------------------------------------------------------
#include<iostream>
using namespace std;
int main (){
	int d,m,n,total=0,sum;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>d;
	cin>>m;

	for (int i=0;i<n-m+1;i++){
		for (int j = i; j < i + m; j++){
			sum=sum+a[j];
		}
		if (d==sum){
			total ++;
		}
			sum=0;
	}
	cout<<total;
	return 0;
}
======================================================================================
*/

int main() {
	int n, d, m;	//number of squares, birth day, birth month
	vector <int> square(n);
	int cnt = 0;

	cin >> n;
	//copy_n(istream_iterator<int>(cin), n, begin(square));
	for (int i = 0; i < n; i++) {
		cin >> square[i];
	}
	cin >> d >> m;

	for (int i = 0; i < n - m + 1; i++) {
		int sum = 0;
		for (int j = i; j < i + m; j++) {
			sum += square[j];
		}
		if (sum == d) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}
