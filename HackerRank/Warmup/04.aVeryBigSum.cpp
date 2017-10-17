#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
�ǵ����̸� �������� �ǵ��� �ľ��ϰ� ������ �ذ��Ϸ����ؼ�
�̸� �߰��Ǿ��ִ� ��������� Ȱ���Ϸ��� �ϴµ�...
vector�� algorithm ����� ������� �ʴ� ����� �� ������ �� ���Ƽ� �׷��� Ǯ����
*/
int main(){
	int N; cin >> N;	//input array size N
	int input;
	long long sum = 0;

	for(int i=0; i<N; i++) {
		cin >> input;
		sum += input;
	}

	cout << sum << endl;

	return 0;
}

/*
numeric ����� accumulate �Լ��� ����ϴ� ����� �غ��ٰ� overflow ������ �߻��ؼ�
����ϴٰ� ���Ӱ� ��� ���� �ִ�

long long int sum = accumulate(arr.begin(), arr.end(), 0); ���� 
initial �κ��� 0�� ������Ÿ���� ��������

C������ �ӽ÷� ������Ÿ���� �ٲ� �� ��ȣ�� �־ ǥ���ߴµ�(c++������ ������ �� ����)
c++������ �������� �� �� �����ϱ� ���� ĳ��Ʈ ������ 4���� �߰� �� �� ����
static_cast
dynamic_cast
const_cast
reinterpret_cast
�̸� ����Ͽ� �ùٸ��� �ۼ��ϸ�

long long int sum = accumulate(arr.begin(), arr.end(), static_cast<long long int>(0));

static_cast�� ����ϴ°� ��ٰ� ª�� accumultae(..., 0LL); ���ε� ǥ�� �����ϴٴµ�
�ڼ����� �𸣰����� �ϴ� ������ �ȴ�!!
(long �� -> 0L �� ǥ�� ����)
*/
