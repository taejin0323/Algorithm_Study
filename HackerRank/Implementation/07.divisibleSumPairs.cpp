#include <bits/stdc++.h>
using namespace std;

/*
자주 보고 복습해야할 듯
--------------------------------------------------------------------------
int main(){
	int n;
	int k;
	cin >> n >> k;
	int a[n];
	int m[k];
	for(int i=0; i<k; i++)
		m[i]=0;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		m[a[i]%k]++;
	}
	int sum=0;
	sum+=(m[0]*(m[0]-1))/2;
	for(int i=1; i<=k/2 && i!=k-i; i++){
		sum+=m[i]*m[k-i];
	}
	if(k%2==0)
		sum+=(m[k/2]*(m[k/2]-1))/2;
	cout<<sum;
	return 0;
}
========================================================================
------------------------------------------------------------------------
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> complenemts(k);

	int count = 0;
	int temp;
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;

		int remainder = (temp % k);

		int complenemt = (k - remainder) % k;

		count += complenemts[remainder];

		complenemts[complenemt] += 1;
	}
	cout << count;
	return 0;
}
==========================================================================
*/

int divisibleSumPairs(int n, int k, vector <int> ar) {
	int cnt = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((ar[i] + ar[j]) % k == 0)	cnt++;
		}
	}
	return cnt;
}

int main(){
	int n, k;
	cin >> n >> k;
	vector <int> ar(n);
	//for (int ar_i = 0; ar_i < n; ar_i++) {
	//	cin >> ar[ar_i];
	//}
	copy_n(istream_iterator<int>(cin), n, begin(ar));

	int result = divisibleSumPairs(n, k, ar);
	cout << result << endl;
	return 0;
}
