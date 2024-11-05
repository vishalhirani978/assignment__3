#include <stdio.h>

int main() {
    int withdrawal_amount, total_amount;
    char special_permit;
    
    total_amount = 15000; 
    
    printf("Enter the withdrawal amount: ");
    scanf("%d", &withdrawal_amount);

    if (withdrawal_amount <= total_amount) {
        if (withdrawal_amount > 10000) {
            printf("Do you have a special permit? [y/n]: ");
            scanf("%s", &special_permit); 
            
            if (special_permit == 'Y' || special_permit == 'y') {
                printf("Withdrawal confirmed.\n");
            } else {
                printf("Withdrawal rejected.\n");
            }
        } else {
            printf("Withdrawal successful.");
        }
    } else {
        printf("Withdrawal rejected. Insufficient balance.\n");
    }
    
    return 0;
}
