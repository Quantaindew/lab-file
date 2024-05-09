#include <stdio.h>

// Define the Customer structure
typedef struct {
    char name[50];
    int accountNumber;
    float balance;
} Customer;

// Function to print names of customers with balance less than Rs.200
void printLowBalanceCustomers(Customer customers[], int size) {
    printf("Customers with balance less than Rs.200:\n");
    for (int i = 0; i < size; i++) {
        if (customers[i].balance < 200) {
            printf("%s\n", customers[i].name);
        }
    }
}

int main() {
    int n;
    printf("Enter number of customers: ");
    scanf("%d", &n);
    Customer customers[n]; // Array of customers

    // Input customer data
    for (int i = 0; i < n; i++) {
        printf("Enter name, account number, and balance for customer %d: ", i + 1);
        scanf("%s %d %f", customers[i].name, &customers[i].accountNumber, &customers[i].balance);
    }

    // Function call to print customers with low balance
    printLowBalanceCustomers(customers, n);

    return 0;
}
