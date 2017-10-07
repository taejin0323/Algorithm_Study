#include<iostream>
#include<string>
using namespace std;

string caesar(string s, int n)
{
	string answer = "";

	/*
	��κ��� ������� ����ϰ� Ǫ�� �� ����
	���ں��� ��ҹ��� �����ϰ� �ƽ�Ű�ڵ� ǥ�� �����Ͽ� �ҹ��ڴ� 97 �빮�ڴ� 65��ŭ
	���� ���ϰų� �Ʒ� ���ó�� �ϸ� �ȴ�.
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