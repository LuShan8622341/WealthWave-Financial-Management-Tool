#include <stdio.h>
#include <stdlib.h>
#include "transaction.h"

int main() {
    Transaction records[MAX_RECORDS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nWealthwave Financial Management Tool\n");
        printf("1. Add Transaction\n");
        printf("2. View Transactions\n");
        printf("3. Calculate Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addTransaction(records, &count);
                break;
            case 2:
                viewTransactions(records, count);
                break;
            case 3:
                calculateBalance(records, count);
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
