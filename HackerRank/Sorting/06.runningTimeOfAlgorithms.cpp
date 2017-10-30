#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

void insertionSort(int N, int arr[]) {
	int i, j;
	int value, cnt = 0;
	for (i = 1; i<N; i++)
	{
		value = arr[i];
		j = i - 1;
		while (j >= 0 && value<arr[j])
		{
			arr[j + 1] = arr[j];
			j = j - 1;
			cnt++;
		}
		arr[j + 1] = value;
	}
	printf("%d\n", cnt);
}
int main(void) {

	int N;
	scanf("%d", &N);
	int arr[N], i;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	insertionSort(N, arr);

	return 0;
}
