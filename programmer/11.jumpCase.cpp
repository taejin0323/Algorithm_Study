#include<iostream>
#include<vector>
using namespace std;

/*
���� �ϴٰ� ��Ʈ�� �ϳ��ϳ� ���� �����̴� ���� �Ǻ���ġ �����̶�� �� �˰ԵǾ���
*/
int jumpCase(int n)
{
	int a = 0, b = 1, temp;

	if (n <= 1) {
		return n;
	}
	else {
		for (int i = 0; i < n; i++) {
			temp = b;
			b = a + b;
			a = temp;
		}
		return b;
	}
}

/*
���׿����ڸ� �̿��� �ſ�ſ� ������ �ٸ� ����� Ǯ��
------------------------------------------------------------------------------
int jumpCase(int num)
{
return num < 2 ? 1 : jumpCase(num - 2) + jumpCase(num - 1);
}
int main()
{
int test = 4;

//�Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
cout << jumpCase(test);
}
===============================================================================
*/

int main()
{
	int test = 4;

	//�Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << jumpCase(test);
}
