#include<iostream>
using namespace std;

int nextBigNumber(int n)
{
	int answer = 0;
	int temp_n,  origin = 1, nextBig = 1;

	temp_n = n;

	while (temp_n != 1) {
		if (temp_n % 2 == 1) origin++;
		temp_n /= 2;
	}

	while (origin != nextBig) {
		nextBig = 1; // reset
		temp_n = ++n;
		while (temp_n != 1) {
			if (temp_n % 2 == 1) nextBig++;
			temp_n /= 2;
		}
	}

	answer = n;
	
	return answer;
}

/*
--------------------------------------------------------------------------------
                             �ٸ� ����� Ǯ��
//2������ �ٲپ����� 1�� ������ ��ȯ�ϴ� �Լ�
int getCount(int n){
	int count =0;
	for(int i=n; i>0; i--){
		if(n%2 == 1){
			count++;
		}
	n = n/2;
	}
	return count;
}

//���� ū ���ڸ� ��ȯ�ϴ� �Լ�.
int nextBigNumber(int n) {
	int answer;
	int cnt1 = getCount(n);
	int cnt2;

	while(1){
		cnt2 = getCount(++n);
		if(cnt1 == cnt2){
			answer = n;
			break;
		}
	}
	return answer;
}
====================================================================================
*/
int main()
{
	int n = 78;

	//�Ʒ��� �׽�Ʈ ����� ���� �ڵ��Դϴ�.
	cout << nextBigNumber(n);
}
