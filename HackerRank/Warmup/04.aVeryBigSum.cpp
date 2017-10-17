#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
되도록이면 출제자의 의도를 파악하고 문제를 해결하려고해서
미리 추가되어있는 헤더파일을 활용하려고 하는데...
vector나 algorithm 헤더를 사용하지 않는 방법이 더 간단할 것 같아서 그렇게 풀었다
*/
int main(){
	int N; cin >> N;	//input array size N
	int input;
	long long sum = 0;

	for(int i=0; i<N; i++) {
		cin >> input;
		sum += input;
	}

	cout << sum << endl;

	return 0;
}

/*
numeric 헤더의 accumulate 함수를 사용하는 방법을 해보다가 overflow 문제가 발생해서
고민하다가 새롭게 배운 것이 있다

long long int sum = accumulate(arr.begin(), arr.end(), 0); 에서 
initial 부분인 0의 데어터타입이 문제였다

C에서는 임시로 데이터타입을 바꿀 때 괄호에 넣어서 표현했는데(c++에서도 가능한 것 같다)
c++에서는 가독성을 좀 더 보완하기 위해 캐스트 연산자 4개를 추가 한 것 같다
static_cast
dynamic_cast
const_cast
reinterpret_cast
이를 사용하여 올바르게 작성하면

long long int sum = accumulate(arr.begin(), arr.end(), static_cast<long long int>(0));

static_cast를 사용하는게 길다고 짧게 accumultae(..., 0LL); 으로도 표현 가능하다는데
자세히는 모르겠지만 일단 실행은 된다!!
(long 은 -> 0L 로 표현 가능)
*/
