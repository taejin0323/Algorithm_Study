#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	vector <int> Alice(3), Bob(3);	//3 categories : clarity, originality, difficulty
	int a_score = 0, b_score = 0;

	for (int i = 0; i < 3; i++) {
		cin >> Alice[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> Bob[i];
	}

	for (int j = 0; j < 3; j++) {
		if (Alice[j] > Bob[j]) {
			a_score++;
		}
		else if (Alice[j] < Bob[j]) {
			b_score++;
		}
	}

	cout << a_score << " " << b_score << endl;

	return 0;
}

/*
STL을 활용한 풀이가 있길래 살펴보았다
나는 그저 의식의 흐름(?)대로 작성해 나갔기에 허접해보인다
iterator 헤더에 대해 공부가 더 필요한 듯 하다
numeric 헤더의 inner_product 함수에 대해 알게 되었다
---------------------------------------------------------------------------------
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;

int main() {
vector<int> a(3), b(3);
copy_n(istream_iterator<int>(cin), 3, begin(a));
copy_n(istream_iterator<int>(cin), 3, begin(b));

cout << inner_product(begin(a), end(a), begin(b), 0, plus<int>(), greater<int>()) << ' '
<< inner_product(begin(b), end(b), begin(a), 0, plus<int>(), greater<int>())
<< endl;
return 0;
}=================================================================================
*/
