#include<iostream>
#include<vector>
using namespace std;

/*
�� ���� ���� ũ�鼭 �� ��� ���� ���� �����ʴ� ��츦 �����ؼ� �ۼ������� Ʋ�ȴ�
--------------------------------------------------------------------------------
int hopscotch(vector<vector<int> > board)
{
	// �Լ��� �ϼ��ϼ���.
	int answer = 0;
	int max = 0, pmax_i = 0, max_i = 0;

	for (int i = 0; i < board.size(); i++) {
		pmax_i = max_i;
		max = 0, max_i = 0; //�ʱ�ȭ
		for (int j = 0; j < board[i].size(); j++) {
			if (max < board[i][j]) {
				max_i = j;
				if (pmax_i == max_i)
					continue;
				max = board[i][j];
			}
		}
		answer += max; cout << max << endl;
	}

	return answer;
}
================================================================================
*/

int hopscotch(vector<vector<int> > board)
{
	int answer = 0;

	return 0;
}

int main()
{
	vector<vector<int> > test{ { 1,2,3,5 },{ 5,6,7,8 },{ 4,3,2,1 } };
	//�Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << hopscotch(test);
}
