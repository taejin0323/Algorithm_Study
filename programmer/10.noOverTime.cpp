#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

/*
������ �߸� ������ �� ����
�ܼ��� �ܾ����� ���ؼ� ó���� �� �ִ� �ð���ŭ�� ���� �ȴٰ� �����ߴµ�
�� ���� ���еǾ� �ִٴ� ���� ���ƴ�
�������� ���õ� ���ÿ��� �������� �ܾ��� [6, 1, 3] �� ���� ���� ������
[2, 2, 2]�� �й�Ǵ� ���� �ƴ϶� [2, 1, 3] Ȥ�� [3, 1, 2]�� �߱� ������ �ּ�ȭ
�ϴ� ��찡 �ȴ�.

--------------------------------------------------------------------------------

int noOvertime(int no, vector<int> works)
{
	int answer = 0;
	int sum = 0, div;

	for(int i=0; i<works.size(); i++) {
		sum += works[i];
	}

	sum -= no;
	div = sum / 3;
	if (sum % 3 == 1) {
		answer = (int)pow(div, 2) + (int)pow(div, 2) + (int)pow(div+1, 2);
	}
	else if (sum % 3 == 2) {
		answer = (int)pow(div, 2) + (int)pow(div+1, 2) + (int)pow(div + 1, 2);
	}
	else {
		answer = (int)pow(div, div) *3;
	}

	return answer;
}

=================================================================================
*/

/*
������ ���õ� �������� �´� ���� ��ȯ�� �ִµ� �����ϴ� �����̴�
--------------------------------------�� ��-------------------------------------
int noOvertime(int no, vector<int> works)
{
	int answer = 0, max=0;
	vector <int> dif;

	for (int j = 0; j < no; j++) {
		sort(works.begin(), works.end());
		for (int i = 0; i < works.size() - 1; i++) {
			dif.push_back(works[i + 1] - works[i]);
			if (dif[i] >= max) max = i;
		}
		works[max+1]--;
		dif[max]--;
	}

	for (int i = 0; i < works.size(); i++) {
		answer += pow(works[i], 2);
	}

	return answer;
}
=================================================================================
*/

//��.... �ʹ� ��ư� ������ �� ����
int noOvertime(int no, vector<int> works)
{
	int answer = 0;

	while (no--) {
		sort(works.begin(), works.end());
		works[works.size() - 1]--;
	}

	for (int i = 0; i < works.size(); i++) {
		answer += pow(works[i], 2);
	}

	return answer;
}

int main()
{
	vector<int> works{ 6,1,3 };
	int testNo = 4;

	int testAnswer = noOvertime(testNo, works);

	cout << testAnswer;
}