#include <iostream>
#include <vector>
using namespace std;

//아래랑 같은 logic인데 왜 틀린거지
void insertionSort(int ar_size, vector <int> ar) {
	for (int i = 1; i < ar_size; i++) {
		int tmp = ar[i];
		int j = i - 1;
		for (j; j >= 0; j--) {
			if (ar[j] > tmp) {
				ar[j + 1] = ar[j];
			}
			else {
				break;
			}
		}
		ar[j + 1] = tmp;
		for (int k = 0; k < ar_size; k++) {
			cout << ar[k] << ' ';
		}
		cout << endl;
	}
}

/*
// Testcase 1,2,4 fail
void insertionSort(int ar_size, vector <int> ar) {
	for (int i = 1; i < ar_size; i++) {
		int tmp = ar[i];
		for (int j = i - 1; j >= 0; j--) {
			if (ar[j] <= tmp) {
				ar[j + 1] = tmp;
				break;
			}
			else {
				ar[j + 1] = ar[j];
			}
		}
		for (int k = 0; k < ar_size; k++) {
			cout << ar[k] << ' ';
		}
		cout << endl;
	}
}
*/
int main() {
	int _ar_size;
	cin >> _ar_size;
	vector <int> _ar(_ar_size);
	for (int _ar_i = 0; _ar_i < _ar_size; _ar_i++) {
		cin >> _ar[_ar_i];
	}

	insertionSort(_ar_size, _ar);

	return 0;
}
