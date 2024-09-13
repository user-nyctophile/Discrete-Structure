//9.Programs to test validity of arguments by using truth tables.

#include <stdio.h>

int implication(int p, int q) {
    return !p || q;
}

int main() {
    int p, q;
    int valid = 1;  
    printf("P | Q | P -> Q | P | Q (Conclusion)\n");
    printf("------------------------------\n");

    for (p = 0; p <= 1; p++) {
        for (q = 0; q <= 1; q++) {
            int premise1 = implication(p, q);  
            int conclusion = q;  

            printf("%d | %d |   %d    | %d |    %d\n", p, q, premise1, p, conclusion);

            
            if (premise1 && p && !conclusion) {
                valid = 0;  
            }
        }
    }

    if (valid) {
        printf("\nThe argument is valid.\n");
    } else {
        printf("\nThe argument is invalid.\n");
    }
    return 0;
}

