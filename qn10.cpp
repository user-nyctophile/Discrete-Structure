//10.Programs to compute an, bn mod m, linear search etc by using recursion.

#include <stdio.h>

int power(int a, int n) {
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}

int mod_power(int b, int n, int m) {
    if (n == 0)
        return 1;
    int half = mod_power(b, n / 2, m);
    half = (half * half) % m;
    if (n % 2 != 0)
        half = (half * b) % m;
    return half;
}

int linear_search(int arr[], int size, int key, int index) {
    if (index >= size)
        return -1;  // Key not found
    if (arr[index] == key)
        return index;  // Key found
    return linear_search(arr, size, key, index + 1);
}
int main() {
    int a,b,n,m,i;
    printf("Enter Value of A : ");
    scanf("%d",&a);
    printf("Enter Value of B : ");
    scanf("%d",&b);
    printf("Enter Value of N : ");
    scanf("%d",&n);
    printf("Enter Value of M : ");
    scanf("%d",&m);
    int arr[6];
    printf("\n For Linear Search : \n");
    for(i=0;i<6;i++){
    	printf("Enter the Element : ");
    	scanf("%d",&arr[i]);
	}
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    printf("\na^n = %d^%d = %d\n", a, n, power(a, n));

    printf("b^n mod m = %d^%d mod %d = %d\n", b, n, m, mod_power(b, n, m));

    int result = linear_search(arr, size, key, 0);
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found in the array\n", key);

    return 0;
}

