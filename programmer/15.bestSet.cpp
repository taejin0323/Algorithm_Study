#include<vector>
#include<iostream>
using namespace std;

/*
�׳� �ƹ� ���� ���� ���� �������µ� ����Ǿ���...
���� �ִ��� ���� �� ���� ���� ���̰� �ּ��� ����� �����ߴ�.
*/

vector<int> bestSet(int no, int sum)
{
	vector<int> answer;
	if (no>sum)
		answer.push_back(-1);
	else {
		for (int i = 0; i < no; i++) {
			answer.push_back(sum / no);
		}
		for (int j = 0; j < sum%no; j++) {
			answer[no - j - 1]++;
		}
	}
	return answer;
}
int main()
{
	int n = 3, s = 13;
		vector<int> test = bestSet(n, s);

		// �Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
		for (int i = 0; i<test.size(); i++)
			cout << test[i] << " ";
}
