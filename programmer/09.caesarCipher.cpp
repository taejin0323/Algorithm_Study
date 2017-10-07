#include<iostream>
#include<string>
using namespace std;

string caesar(string s, int n)
{
	string answer = "";

	/*
	대부분의 사람들이 비슷하게 푸는 것 같다
	문자별로 대소문자 구분하고 아스키코드 표를 참고하여 소문자는 97 대문자는 65만큼
	빼고 더하거나 아래 방법처럼 하면 된다.
	*/
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') continue;
		if (isupper(s[i])) {
			s[i] = (s[i] - 'A' + n) % 26 + 'A';
		}
		else if (islower(s[i])) {
			s[i] = (s[i] - 'a' + n) % 26 + 'a';
		}
	}
		
	answer = s;
	return answer;
}

int main()
{
	string text = "a  B  c  D  y  Z  z";
	int testNo = 26;

	string testAnswer = caesar(text, testNo);

	cout << testAnswer;
}