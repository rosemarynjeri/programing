#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    float fineRate, fineAmount;


    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date (as an integer day): ");
    scanf("%d", &dueDate);
    printf("Enter Return Date (as an integer day): ");
    scanf("%d", &returnDate);

  
    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 7) {
        fineRate = 20.0;
    } else if (daysOverdue <= 14) {
        fineRate = 50.0;
    } else {
        fineRate = 100.0;
    }

 
    fineAmount = fineRate * daysOverdue;

  
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh. %.2f per day\n", fineRate);
    printf("Total Fine Amount: Ksh. %.2f\n", fineAmount);

    return 0;
}
