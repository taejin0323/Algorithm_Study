#include<iostream>
#include<vector>
using namespace std;


/*
������ ���õ� �������� �´� ���� ��ȯ�ϴµ�... �����ϸ� �ǳ� Ʋ����...��
������ �°� �Ѱ� ������ ������ ������ �߸��� ���ϱ�...
-------------------------------------------------------------------------------------
long long gcm(int a, long long b) {
	return b ? gcm(b, a%b) : a;
}

long long nlcm(vector<int> num)
{
	long long answer = num[0];

	for (int i = 1; i < num.size(); i++) {
		answer = ((long long)num[i] * answer) / gcm(num[i], answer);
	}

	return answer;
}
======================================================================================
*/

long long gcm(long long a, long long b) {
	return b ? gcm(b, a%b) : a;
}

long long nlcm(vector<int> num)
{
	long long answer = (long long)num[0]; //��..�׷�

	for (int i = 1; i < num.size(); i++) {
		answer = ((long long)num[i] * answer) / gcm((long long)num[i], answer); // �׷��ſ���
	}

	return answer;
}

int main()
{
	vector<int> test{ 2,6,8,14 };

	// �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << nlcm(test);
}
