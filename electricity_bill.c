#Code for calculating electricity bill
#include <stdio.h>

// Function to calculate the bill
float calculateBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 300) {
        bill = (100 * 1.5) + (units - 100) * 2.5;
    } else {
        bill = (100 * 1.5) + (200 * 2.5) + (units - 300) * 3.5;
    }

    return bill;
}

int main() {
    int units;
    float bill;

    // Get the number of units consumed from the user
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the bill
    bill = calculateBill(units);

    // Print the bill
    printf("Total electricity bill is: %.2f\n", bill);

    return 0;
}
