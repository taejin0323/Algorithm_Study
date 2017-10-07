#include<vector>
#include<iostream>
using namespace std;
vector<int> gcdlcm(int a, int b)
{
	vector<int> answer;
	int mod = a%b;
	int x = a, y = b;

	//��Ŭ���� ȣ���� = 2���� �ڿ��� a, b�� ���ؼ� a�� b�� ���� �������� r�̶�� �ϸ�
	//                  a�� b�� �ִ������� b�� r�� �ִ������� ����.
	//��Ŭ���� ȣ������ ����� �ݺ���
	while (mod >0) {
		x = y;
		y = mod;
		mod = x%y;
	}
	answer.push_back(y);
	answer.push_back(a*b / y);	//�ִ������� �ּҰ������ ������ �̿�
	return answer;
}

/*
�ּҰ������ ���ϴ� ���� �ܼ��ϰ� �������� ���		*�ð����⵵ - O(min(a,b))
for(int i=i; i<=min(a,b); i++){
	if(a%i==0 && b%i==0)
		max_div = i;
}

���� ����� �������� Ž���ؼ� ���� ó�� �߰ߵǴ� �ִ������� ã���� ���ߴ� ����� ���� ���� �� ������
a�� b�� ���μ��� ���(�־��� ���) ���� ������ �ð����⵵�� ������ �ȴ�

��Ŭ���� ȣ������ ����� �ٸ� �������		*�ð����⵵ - O(log(min(a,b))
����Լ�
int gcd(int a, int b){
	if(a%b==0)
		return b;
	else
		return gcd(b, a%b);
}
���� ������
int gcd(int a, int b){
	return b ? gcd(b, a%b) : a;
}
*/

int main()
{
	int a = 3, b = 12;
	vector<int> testAnswer = gcdlcm(a, b);

	cout << testAnswer[0] << " " << testAnswer[1];
}