#include <stdio.h>
#include <string.h>
#include "transaction.h"

void addTransaction(Transaction records[], int *count) {
    if (*count >= MAX_RECORDS) {
        printf("Error: Maximum number of records reached.\n");
        return;
    }

    printf("Enter description: ");
    getchar(); // To consume the newline left by scanf
    fgets(records[*count].description, 50, stdin);
    records[*count].description[strcspn(records[*count].description, "\n")] = '\0';

    printf("Enter amount: ");
    scanf("%lf", &records[*count].amount);

    printf("Enter type (1 for income, 0 for expense): ");
    scanf("%d", &records[*count].type);

    (*count)++;
    printf("Transaction added successfully!\n");
}

void viewTransactions(Transaction records[], int count) {
    if (count == 0) {
        printf("No transactions to display.\n");
        return;
    }

    printf("\nTransactions:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %.2f (%s)\n", i + 1, records[i].description, records[i].amount,
               records[i].type == 1 ? "Income" : "Expense");
    }
}

void calculateBalance(Transaction records[], int count) {
    double totalIncome = 0.0;
    double totalExpense = 0.0;

    for (int i = 0; i < count; i++) {
        if (records[i].type == 1) {
            totalIncome += records[i].amount;
        } else {
            totalExpense += records[i].amount;
        }
    }

    double balance = totalIncome - totalExpense;

    printf("\nFinancial Summary:\n");
    printf("Total Income: %.2f\n", totalIncome);
    printf("Total Expense: %.2f\n", totalExpense);
    printf("Balance: %.2f\n", balance);
}
