#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
���� �ѷ����� �ٸ� ������� �������� �迭 ������ �����ϰ�
�Է� �޴� ���� ���ǹ� ������ �ٷ� ����ߴ�
*/

void gradingStudents(vector <int> &input) {
	for (int i = 0; i < input.size(); i++) {
		//38�� ���ϴ� failing grade�� �ݿø� ����
		if (input[i] < 38) {
			continue;
		}
		else {
			//5�� �������� ����
			if (input[i] % 5 > 2) {
				input[i] += (5 - (input[i] % 5));
			}
		}
	}
}

int main(){
	int n; cin >> n;	//�л����� ��
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

