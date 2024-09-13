//12.Programs to implements some probabilistic and randomized algorithms.

#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivotIndex = low + rand() % (high - low + 1);
    int pivot = arr[pivotIndex];
    swap(&arr[pivotIndex], &arr[high]);
    int i = low;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(){
	int a,c,m,n,q;
	int x,z;
	int i;
	int arr[MAX];
	
	printf("Enter the limit of the number: ");
	scanf("%d",&a);
	
	printf("input module m: ");
	scanf("%d",&m);
	
	printf("Enter constant: ");
	scanf("%d",&c);
	
	printf("Total: ");
	scanf("%d",&n);
	
	printf("Enter seed number: ");
	scanf("%d",&x);
	
	printf("random numbers: \n");
	for(i=0; i<n; i++){
		z=((x*a) + c) % m;
		arr[i] = z;
		printf("%d\t",z);
		x=z;
	}
	printf("\n\nThe Sorted array of above Random Numbers are : \n");
	quickSort(arr, 0, n - 1);
    for (i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
    
	return 0;
}
