#include <stdio.h>

// Function to calculate the electricity bill
void calculate_electricity_bill(char customer_id[], 
char customer_name[], 
int units_consumed) {
    float charge_per_unit, total_bill, surcharge;

    // Determine the charge per unit based on units consumed
    if (units_consumed <= 199) {
        charge_per_unit = 1.20;
    } else if (units_consumed >= 200 && units_consumed < 400) {
        charge_per_unit = 1.50;
    } else if (units_consumed >= 400 && units_consumed < 600) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }

    // Calculate the total bill without surcharge
    total_bill = units_consumed * charge_per_unit;

    // Apply surcharge if bill exceeds Ksh. 400
    if (total_bill > 400) {
        surcharge = total_bill * 0.15; // 15% surcharge
        total_bill += surcharge;
    }

    // Ensure the minimum bill is Ksh. 100
    if (total_bill < 100) {
        total_bill = 100;
    }

    // Display the bill details
    printf("\nElectricity Bill\n");
    printf("-----------------\n");
    printf("Customer ID: %s\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units_consumed);
    printf("Charges per Unit: %.2f\n", charge_per_unit);
    printf("Total Amount to Pay: Ksh. %.2f\n", total_bill);
}

int main() {
    // Variables to hold customer details and units consumed
    char customer_id[20], customer_name[50];
    int units_consumed;

    // Input: Prompt the user for Customer ID, Name, and Units Consumed
    printf("Enter Customer ID: ");
    scanf("%s", customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units_consumed);

    // Calculate and display the electricity bill
    calculate_electricity_bill(customer_id, customer_name, units_consumed);

    return 0;
}
