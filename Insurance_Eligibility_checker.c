#include <stdio.h>

int main() {
    int age;
    char serious_illness;

    
    printf("Enter your age: ");
    scanf("%d", &age);

    
    if (age > 18) {
    
        if (age > 45) {
            
            printf("Have you had any serious illness? (Y/N): ");
            scanf("%c", &serious_illness);  
            
            
            if (serious_illness == 'Y' || serious_illness == 'y') {
                printf("You are not eligible for health insurance due to a serious illness.\n");
            } else {
                printf("You are eligible for health insurance.\n");
            }
        } else {
            
            printf("You are eligible for health insurance.\n");
        }
    } else {
        
        printf("You are not eligible for health insurance because you are below 18 years of age.\n");
    }

    return 0;
}
