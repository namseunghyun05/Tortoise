//C언어 내장 함수 이용
/*
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}
int main()
{
	int arr[] = {5,2,9,1,5,6};
	int n = sizeof(arr)/sizeof(int);
	
	qsort(arr, n, sizeof(int), compare);

	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);

	return 0;
}
*/


#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void quickSort(int arr[], int L, int R)
{
	int left = L;
	int right = R;
	int pivot = arr[(L + R)/2];

	do{
		while(arr[left] < pivot)
			left++;
		while(arr[right] > pivot)
			right--;

		if(left <= right)
		{
			swap(&arr[left], &arr[right]);
			left++;
			right--;
		}
	}while(left <= right);

	if(L < right)
		quickSort(arr, L, right);

	if(R > left)
		quickSort(arr, left, R);
}

int main()
{
	int n;

	scanf("%d",&n);

	int arr[n];

	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	quickSort(arr, 0, n-1);

	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);

	return 0;
}






















