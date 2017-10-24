#include <bits/stdc++.h>
using namespace std;

int solve(int n, int p) {
	int ans = 0;
	int front = p / 2;
	int back = (n / 2 - p / 2);
	if (front<back) ans = front;
	else ans = back;
	return ans;
}

/*
부족함이 많음을 느낀다...
-------------------------------------------------
int solve(int n, int p){
	int answer = 0;

	if (p <= n / 2) {
		for (int i = 0; i <= n / 2; i += 2) {
			if (i == p || (i + 1) == p) {
				break;
			}
			answer++;
		}
	}
	else {
		for (int j = n; j >= n / 2; j -= 2) {
			if (j == p || (j - 1) == p) {	//끝이 홀수 짝수일 경우를 생각해야하는데...
				break;
			}
			answer++;
		}
	}

	return answer;
}

*/

int main(){
	int n, p; cin >> n >> p;
	int result = solve(n, p);

	cout << result << endl;
	return 0;
}
