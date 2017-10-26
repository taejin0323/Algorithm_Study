#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int v, n; cin >> v >> n;
	vector <int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (ar[i] == v) {
			cout << i << endl;
		}
	}
	return 0;
}
