#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
대충 둘러보니 다른 사람들은 귀찮은지 배열 생성은 생략하고
입력 받는 족족 조건문 돌려서 바로 출력했다
*/

void gradingStudents(vector <int> &input) {
	for (int i = 0; i < input.size(); i++) {
		//38점 이하는 failing grade로 반올림 없음
		if (input[i] < 38) {
			continue;
		}
		else {
			//5의 나머지로 구별
			if (input[i] % 5 > 2) {
				input[i] += (5 - (input[i] % 5));
			}
		}
	}
}

int main(){
	int n; cin >> n;	//학생들의 수
	vector <int> grade(n);

	for (int i = 0; i < n; i++) {
		cin >> grade[i];
	}

	gradingStudents(grade);

	for (int i = 0; i < n; i++) {
		cout << grade[i] << endl;
	}

	return 0;
}

