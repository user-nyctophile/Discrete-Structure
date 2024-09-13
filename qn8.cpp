//8.Programs to generate truth tables of compound propositions.

#include <stdio.h>
int main() {
    int choice;
    
    printf("Choose a logical operation:\n");
    printf("1. AND\n");    
	printf("2. OR\n");
    printf("3. IMPLIES\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
   // Print header for the selected truth table
    switch (choice) {
        case 1:
            printf("\nA | B | A AND B\n");
            break;
        case 2:
            printf("\nA | B | A OR B\n");
            break;
        case 3:
            printf("\nA | B | A IMPLIES B\n");
            break;
        default:
            printf("Invalid choice\n");
            return 1; // Exit with an error code
	}
    
    printf("--------------\n");
	int i, j;
    for (i = 0; i <= 1; i++) {
        for (j = 0; j <= 1; j++) {
            int result;

            switch (choice) {
                case 1:
                    result = i && j; // AND
                    break;
                case 2:
                    result = i || j; // OR
                    break;
                case 3:
                    result = (!i) || j; // IMPLIES
                    break;
            }

            printf("%d | %d |   %d\n", i, j, result);
        }
    }

    return 0;
}


