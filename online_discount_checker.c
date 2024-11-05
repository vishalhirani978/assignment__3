#include <stdio.h>

int main() {
    float purchase_amount, final_amount;
    char membership_status;

    
    printf("Enter the purchase amount: ");
    scanf("%f", &purchase_amount);

    
    if (purchase_amount > 2000) {
        
        printf("Are you a member? (Y/N): ");
        scanf(" %c", &membership_status); 
        
        
        if (membership_status == 'Y' || membership_status == 'y') {
            
            final_amount = purchase_amount - (purchase_amount * 0.20);
            printf("You are a member. Your final amount after a 20%% discount is: %.2f\n", final_amount);
        } else {
            
            final_amount = purchase_amount - (purchase_amount * 0.10);
            printf("You are not a member. Your final amount after a 10%% discount is: %.2f\n", final_amount);
        }
    } else {
        
        final_amount = purchase_amount;
        printf("No discount applied. Your final amount is: %.2f\n", final_amount);
    }

    return 0;
}

