#include<iostream>
#include<vector>
#include<algorithm>  //sort �Լ� ����� ���� �߰�

using namespace std;


//A�� ��������, B�� ������������ ���ϸ� �ּҰ��� �ȴ�
int getMinSum(vector<int> A, vector<int> B)
{
	int answer = 0;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());	//Ȥ�� sort(B.rbegin(), B.rend());

	for (int i = 0; i < A.size(); i++) {
		answer += (A[i] * B[B.size() - i -1]);	//B�� �������� ���Ľ� answer += A[i]*B[i];
	}

	return answer;
}
int main()
{
	vector<int> tA{ 1,2 }, tB{ 3,4 };

	//�Ʒ��� �׽�Ʈ ����� ���� �ڵ��Դϴ�.
	cout << getMinSum(tA, tB);
}