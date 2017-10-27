#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector <int> ar) {
	int rightmost = ar.back();
	for (int i = ar.size()-1; i >= 0; i--) {
		if (ar[i-1] > rightmost) {
			ar[i] = ar[i-1];
			for (int j = 0; j < ar.size(); j++) {
				cout << ar[j] << ' ';
			}
		}
		else {
			ar[i] = rightmost;
			for (int j = 0; j < ar.size(); j++) {
				cout << ar[j] << ' ';
			}
			break;
		}
		cout << endl;
	}
}

int main(){
	vector <int> _ar;
	int _ar_size;
	cin >> _ar_size;
	for(int _ar_i=0; _ar_i<_ar_size; _ar_i++){
		int _ar_temp;
		cin >> _ar_temp;
		_ar.push_back(_ar_temp);
	}

	insertionSort(_ar);
	return 0;
}
