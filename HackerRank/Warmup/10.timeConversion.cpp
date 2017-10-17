#include <iostream>
#include <iomanip>
using namespace std;

/*
3항 연산자를 적극 활용해봤다
입력을 string으로 받아서 substring 하면서 각각의 변수에 넣는 방법이 정석인 것 같지만
그냥 이게 편해서 보이는 대로 입력받았다
*/

int main() {
	int hour, min, sec;
	char c, format;
	cin >> hour >> c >> min >> c >> sec >> format;

	hour = format == 'A' ? (hour == 12 ? 0 : hour) : (hour == 12 ? 12 : hour + 12);

	cout << setw(2) << setfill('0') << hour << c << setw(2) << setfill('0') << min << c << setw(2) << setfill('0') << sec;

	return 0;
}