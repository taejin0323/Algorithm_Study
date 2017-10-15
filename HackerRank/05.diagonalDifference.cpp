#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
벡터로 2차원 배열을 표현하는 방법을 배우고
cmath 헤더의 abs 함수에 대해 알게 되었다
*/

int main(){
	int N; cin >> N;
	vector<vector<int>> arr(N, vector<int>(N));
	int p_diagonal=0, s_diagonal=0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		p_diagonal += arr[i][i];
		s_diagonal += arr[i][N-i-1];
	}

	cout << abs(p_diagonal - s_diagonal) << endl;

	return 0;
}
