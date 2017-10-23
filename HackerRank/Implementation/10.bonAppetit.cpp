#include <bits/stdc++.h>
using namespace std;

/*
한번씩 보면 파이썬 풀이들은 참 간결하고 짧은 것 같다
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
	처음 설정되어있는 코드는 이건데... 맞았을 때 "Bon Appetit"를 어떻게 출력해야 할지 모르겠었다
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
