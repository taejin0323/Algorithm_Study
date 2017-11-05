#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

/*
문제를 이해하는데 시간이 좀 걸렸다

---------------------------------------------------------------------------------
// Driver function to sort the 2D vector
// on basis of a particular column
bool sortcol( const vector<int>& v1, const vector<int>& v2 ) {
	if(v1[1]==v2[1])
		return (v1[0]<v2[0]);
	return v1[1] < v2[1];
}

int main() {
	int n,x;
	cin>>n;
	vector<vector<int>> a(n);
	vector<string> s(n);
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a[i].push_back(i);
		a[i].push_back(x);
		cin>>s[i];
		if(i<n/2)
		{
			s[i]="-";
		}

	}

	sort(a.begin(),a.end(),sortcol);
	int j;
	for(int i=0;i<n;i++)
	{
		j=a[i][0];
		cout<<s[j]<<" ";
	}

	return 0;
}
==================================================================================
*/

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	long long int n;
	cin >> n;
	long long int temp, freq[100] = { 0 };
	string t, sa[n] = { "" };
	long long int i;
	for (i = 0; i<n; i++)
	{
		cin >> temp;
		freq[temp]++;

		cin >> t;
		if (i<(n / 2))
		{

			t = "-";
		}
		if (freq[temp]>1)
			sa[temp] = sa[temp] + t + " ";
		else
			sa[temp] = t + " ";

	}
	for (i = 0; i<100; i++)
	{
		if (freq[i] != 0)
		{
			cout << sa[i];
		}
	}

	return 0;
}