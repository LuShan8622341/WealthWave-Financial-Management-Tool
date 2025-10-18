#ifndef TRANSACTION_H
#define TRANSACTION_H

#define MAX_RECORDS 100

typedef struct {
    char description[50];
    double amount;
    int type; // 1 for income, 0 for expense
} Transaction;

void addTransaction(Transaction records[], int *count);
void viewTransactions(Transaction records[], int count);
void calculateBalance(Transaction records[], int count);

#endif
