#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
소수점 자리 표현을 자주 사용하지 않으니 까먹는다
C의 printf에서는 쉬운데...
삼항 연산자를 사용하면 코드가 조금 더 깔끔해 보일 수 있다

참고 >
4.312115e+04와 같은 지수 표현식은 - cout << scientific
cout.unsetf(ios::scientific)으로 해제 가능
*/

int main() {
	int N; cin >> N;
	double arr, pos = 0, neg = 0, zero = 0;

	for (int i = 0; i < N; i++) {
		cin >> arr;
		pos += (arr > 0) ? 1 : 0;
		neg += (arr < 0) ? 1 : 0;
		zero += (arr == 0) ? 1 : 0;
	}

	cout << fixed;	//소수점을 고정시켜 표현을 하겠다는 뜻
	cout.precision(6);	//6자리까지 표현을 하겠다는 뜻
	//즉, 소수점 6자리까지 표현하겠다

	//해제하려면, cout.unsetf(ios::fixed);를 사용
	//cout << fixed는 cout.setf(ios::fixed)로도 표현이 가능
	cout << pos / N << endl;
	cout << neg / N << endl;
	cout << zero / N << endl;

	return 0;
}

