#include<iostream>
#include<vector>
using namespace std;

int hopscotch(vector<vector<int> > board)
{
	// �Լ��� �ϼ��ϼ���.
	int answer = 0;
	int max = 0, pmax_i = 0, max_i = 0;

	for (int i = 0; i < board.size(); i++) {
		pmax_i = max_i;
		max=0, max_i = 0; //�ʱ�ȭ
		for (int j = 0; j < board[i].size(); j++) {
			max_i++;
			if (max < board[i][j]) {
				if (pmax_i == max_i)
					continue;
				max = board[i][j];
			}
		}
		answer += max;
	}

	return answer;
}

int main()
{
	vector<vector<int> > test{ { 1,2,3,5 },{ 5,6,7,8 },{ 4,3,2,1 } };
	//�Ʒ��� �׽�Ʈ�� ����� ���� ���� �ڵ��Դϴ�.
	cout << hopscotch(test);
}
