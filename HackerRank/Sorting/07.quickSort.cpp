#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

/*
퀵정렬의 기본 개념에 대해 설명하는데 파트 1에서 끝나 버렸다?
*/

void partition(vector <int>  ar) {
	// Enter code for partitioning and printing here. 
	int pivot = ar[0];
	vector <int> left, right;
	for (int i = 0; i<ar.size(); i++) {
		ar[i] >= pivot ? right.push_back(ar[i]) : left.push_back(ar[i]);
	}

	vector <int> sort_ar = left;
	sort_ar.insert(sort_ar.end(), right.begin(), right.end());

	for (int j = 0; j<sort_ar.size(); j++) {
		cout << sort_ar[j] << ' ';
	}
}
int main(void) {
	vector <int>  _ar;
	int _ar_size;
	cin >> _ar_size;

	for (int _ar_i = 0; _ar_i<_ar_size; _ar_i++) {
		int _ar_tmp;
		cin >> _ar_tmp;
		_ar.push_back(_ar_tmp);
	}

	partition(_ar);

	return 0;
}
