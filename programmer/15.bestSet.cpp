#include<vector>
#include<iostream>
using namespace std;

/*
그냥 아무 생각 없이 적어 내려갔는데 통과되었다...
곱이 최대일 경우는 각 원소 간의 차이가 최소일 떄라고 생각했다.
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

		// 아래는 테스트로 출력해 보기 위한 코드입니다.
		for (int i = 0; i<test.size(); i++)
			cout << test[i] << " ";
}
