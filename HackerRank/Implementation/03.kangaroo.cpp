#include <iostream>
using namespace std;

/*
3�� �����ڸ� �����Ѵٰ� �ڵ��غôµ� ���...
������ �ٽ� ���� x2�� x1���� ũ���� ������...
������ Ļ�ŷ� 2�� 1 ������ �Ÿ��� ���� �ӵ� ���̷� �������� ������ �����ٴ� Ǯ�̿���
*/

int main() {
	int x1, v1, x2, v2;	//two kangaroos & each jump range
	cin >> x1 >> v1 >> x2 >> v2;

	cout << (x1 > x2 ? (v2 > v1 ? (((x1 - x2) % (v2 - v1) == 0) ? "YES" : "NO") : "NO") : (v1 > v2 ? (((x2 - x1) % (v1 - v2) == 0) ? "YES" : "NO") : "NO"));

	return 0;
}