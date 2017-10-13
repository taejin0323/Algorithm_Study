#include<iostream>
#include<vector>
using namespace std;

/*
각 행의 가장 크면서 전 행과 같은 열을 밟지않는 경우를 생각해서 작성했지만 틀렸다
--------------------------------------------------------------------------------
int hopscotch(vector<vector<int> > board)
{
	// 함수를 완성하세요.
	int answer = 0;
	int max = 0, pmax_i = 0, max_i = 0;

	for (int i = 0; i < board.size(); i++) {
		pmax_i = max_i;
		max = 0, max_i = 0; //초기화
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
	//아래는 테스트로 출력해 보기 위한 코드입니다.
	cout << hopscotch(test);
}
