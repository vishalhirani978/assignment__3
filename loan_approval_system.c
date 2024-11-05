#include <stdio.h>

int main() {
    float monthly_income;
    char existing_loan;
    char overdue_payments;

    
    printf("Enter your monthly income: ");
    scanf("%f", &monthly_income);

    
    if (monthly_income > 30000) {
        
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &existing_loan);

        if (existing_loan == 'Y' || existing_loan == 'y') {
            
            printf("Do you have any overdue payments? (Y/N): ");
            scanf(" %c", &overdue_payments);

            if (overdue_payments == 'Y' || overdue_payments == 'y') {
            
                printf("Loan denied due to overdue payments on the existing loan.\n");
            } else {
                
                printf("You are eligible for the loan.\n");
            }
        } else {
            
            printf("You are eligible for the loan.\n");
        }
    } else {
    
        printf("You are ineligible for the loan due to insufficient monthly income.\n");
    }

    return 0;
}
