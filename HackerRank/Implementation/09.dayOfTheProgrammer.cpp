#include <bits/stdc++.h>
using namespace std;

/*
알고리즘은 비슷한 것 같고
조건이 제각각 다양했는데
아래 두가지가 인상 깊었다

-------------------------------------------------------
string solve(int y){
	int d = 13;
	if(!(y%4) && (y < 1918 || y%100 || !(y%400))) d--;
	if(y == 1918) d = 26;
	return to_string(d) + ".09." + to_string(y);
}
========================================================
--------------------------------------------------------
const int mon7 = 215; //7 months' days

string solve(int year)
{
	short int feb; //days in february
	if(year < 1918) //julian
		feb = year%4 ? 28 : 29;
	else if(year > 1918) //gregorian
		feb = !(year%400) || year%100&&!(year%4) ? 29 : 28;
	else //dreaded 1918
		feb = 15;
	feb = 256 - (feb + mon7);
	return to_string(feb) + ".09." + to_string(year);
}
=========================================================
*/

//year 1918 = 26.09.1918
//leap year = 12.09.yy
//other years = 13.09.yy
string solve(int year) {
	string answer;
	if (year == 1918) {
		answer = "26.09.1918";
	}
	else if ((year <= 1917 && year % 4 == 0) || year >= 1919 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
		answer = "12.09." + to_string(year);
	}
	else {
		answer = "13.09." + to_string(year);
	}
	return answer;
}

int main() {
	int year;
	cin >> year;
	string result = solve(year);
	cout << result << endl;
	return 0;
}
