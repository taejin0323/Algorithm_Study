#include<iostream>
#include<vector>
#include<algorithm>  //sort 함수 사용을 위해 추가

using namespace std;


//A는 오름차순, B는 내림차순으로 곱하면 최소값이 된다
int getMinSum(vector<int> A, vector<int> B)
{
	int answer = 0;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());	//혹은 sort(B.rbegin(), B.rend());

	for (int i = 0; i < A.size(); i++) {
		answer += (A[i] * B[B.size() - i -1]);	//B를 내림차순 정렬시 answer += A[i]*B[i];
	}

	return answer;
}
int main()
{
	vector<int> tA{ 1,2 }, tB{ 3,4 };

	//아래는 테스트 출력을 위한 코드입니다.
	cout << getMinSum(tA, tB);
}