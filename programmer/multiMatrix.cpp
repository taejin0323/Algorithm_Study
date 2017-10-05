#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> >productMatrix(vector<vector<int> >A, vector<vector<int> >B)
{
	vector<vector<int> >answer;
	int sum;

	for (int i = 0; i < A.size(); i++) {
		answer.push_back(vector <int>());
	}

	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B[0].size(); j++) {
			sum = 0;
			for (int k = 0; k < A[0].size(); k++) {
				sum += A[i][k] * B[k][j];
			}
			answer[i].push_back(sum);
		}

	}

	return answer;
}

int main()
{
	vector<vector<int> >A{ { 1,2,3 },{ 1,2,3 } };
	vector<vector<int> >B{ {1,2}, { 2,3 },{ 3,4 } };
	vector<vector<int> > testAnswer = productMatrix(A, B);

	for (int i = 0; i<testAnswer.size(); i++)
	{
		for (int j = 0; j<testAnswer[i].size(); j++)
			cout << testAnswer[i][j] << " ";
		cout << "\n";
	}
}