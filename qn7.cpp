 //7.Programs to perform operations with large integers by breaking down them into set of small integers.

#include <stdio.h>
#include <string.h>

#define MAX 100
#define CHUNK 9 

void add_large_numbers(char num1[], char num2[], char result[]) {
    int carry = 0, i, j, k;
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    i = len1 - 1;
    j = len2 - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i--] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j--] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        result[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    result[k] = '\0';

    for (int start = 0, end = k - 1; start < end; start++, end--) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
}

int main() {
    char num1[MAX] = "9876543210123456789";
    char num2[MAX] = "1234567890123456789";
    char result[MAX + 1];

    add_large_numbers(num1, num2, result);

    printf("Sum of large numbers: %s\n", result);

    return 0;
}

