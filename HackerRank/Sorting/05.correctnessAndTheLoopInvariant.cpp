#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

/*
증명하는 방법에 대해 알려주는 장이였다
while (j>0 && value<arr[j])
{
	arr[j + 1] = arr[j];
	j = j - 1;
}
이 부분에서 j가 0보다 크거나 같을 때로 조건을 바꿔주면 된다
*/

void insertionSort(int N, int arr[]) {
	int i, j;
	int value;
	for (i = 1; i<N; i++)
	{
		value = arr[i];
		j = i - 1;
		while (j>=0 && value<arr[j])
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = value;
	}
	for (j = 0; j<N; j++)
	{
		printf("%d", arr[j]);
		printf(" ");
	}
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
