#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
���ͷ� 2���� �迭�� ǥ���ϴ� ����� ����
cmath ����� abs �Լ��� ���� �˰� �Ǿ���
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
