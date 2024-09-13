//6.Programs to implement Boolean matrix operations join, product, and Boolean product.

#include <stdio.h>

void bool_join(int a[3][3], int b[3][3], int c[3][3]) {
	int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] | b[i][j];
        }
    }
}

void bool_product(int a[3][3], int b[3][3], int c[3][3]) {
	int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] & b[i][j]; 
        }
    }
}

void bool_matrix_product(int a[3][3], int b[3][3], int c[3][3]) {
	int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
            for (k = 0; k < 3; k++) {
                c[i][j] |= (a[i][k] & b[k][j]);
            }
        }
    }
}

void print_matrix(int matrix[3][3]) {
	int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3] = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 1, 0}
    };

    int mat2[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    int result[3][3];

    bool_join(mat1, mat2, result);
    printf("Join (OR operation) result:\n");
    print_matrix(result);

    bool_product(mat1, mat2, result);
    printf("\nProduct (AND operation) result:\n");
    print_matrix(result);

    bool_matrix_product(mat1, mat2, result);
    printf("\nBoolean Product result:\n");
    print_matrix(result);

    return 0;
}

