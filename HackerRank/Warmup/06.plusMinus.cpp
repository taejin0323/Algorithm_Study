#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
�Ҽ��� �ڸ� ǥ���� ���� ������� ������ ��Դ´�
C�� printf������ ���...
���� �����ڸ� ����ϸ� �ڵ尡 ���� �� ����� ���� �� �ִ�

���� >
4.312115e+04�� ���� ���� ǥ������ - cout << scientific
cout.unsetf(ios::scientific)���� ���� ����
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

	cout << fixed;	//�Ҽ����� �������� ǥ���� �ϰڴٴ� ��
	cout.precision(6);	//6�ڸ����� ǥ���� �ϰڴٴ� ��
	//��, �Ҽ��� 6�ڸ����� ǥ���ϰڴ�

	//�����Ϸ���, cout.unsetf(ios::fixed);�� ���
	//cout << fixed�� cout.setf(ios::fixed)�ε� ǥ���� ����
	cout << pos / N << endl;
	cout << neg / N << endl;
	cout << zero / N << endl;

	return 0;
}

