#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

/*
문제를 잘못 이해한 것 같다
단순히 잔업량을 합해서 처리할 수 있는 시간만큼을 뺴면 된다고 생각했는데
각 일이 구분되어 있다는 것을 놓쳤다
문제에서 제시된 예시에는 괜찮지만 잔업이 [6, 1, 3] 과 같은 경우로 남으면
[2, 2, 2]로 분배되는 것이 아니라 [2, 1, 3] 혹은 [3, 1, 2]가 야근 지수를 최소화
하는 경우가 된다.

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
문제에 제시된 예제에는 맞는 값을 반환해 주는데 제출하니 오답이다
--------------------------------------오 답-------------------------------------
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

//하.... 너무 어렵게 생각한 것 같다
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