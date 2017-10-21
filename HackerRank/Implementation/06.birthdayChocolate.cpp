#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

/*
똑같은 logic인데 벡터를 사용하면 세그먼트 오류가 뜨고...
비주얼 스투디오에 아래 코드를 실행시켜보면 int a[n]에서 상수값을 입력하라고 오류나고...
왜 이런 오류들이 발생하는지 잘 모르겠다ㅠ

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
