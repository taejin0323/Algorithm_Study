#include <iostream>
#include <iomanip>
using namespace std;

/*
3�� �����ڸ� ���� Ȱ���غô�
�Է��� string���� �޾Ƽ� substring �ϸ鼭 ������ ������ �ִ� ����� ������ �� ������
�׳� �̰� ���ؼ� ���̴� ��� �Է¹޾Ҵ�
*/

int main() {
	int hour, min, sec;
	char c, format;
	cin >> hour >> c >> min >> c >> sec >> format;

	hour = format == 'A' ? (hour == 12 ? 0 : hour) : (hour == 12 ? 12 : hour + 12);

	cout << setw(2) << setfill('0') << hour << c << setw(2) << setfill('0') << min << c << setw(2) << setfill('0') << sec;

	return 0;
}