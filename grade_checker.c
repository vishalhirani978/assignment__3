#include <stdio.h>

int main() {
    float subject1, subject2, subject3, average;

    
    printf("Enter the marks for Subject 1: ");
    scanf("%f", &subject1);

    printf("Enter the marks for Subject 2: ");
    scanf("%f", &subject2);

    printf("Enter the marks for Subject 3: ");
    scanf("%f", &subject3);

    
    average = (subject1 + subject2 + subject3) / 3;

    
    if (average < 50) {
        printf("Your average is %.2f. You have failed.\n", average);
    } else {
        
        if (average > 75) {
            printf("Your average is %.2f. You have passed with grade A.\n", average);
        } else {
            printf("Your average is %.2f. You have passed with grade B.\n", average);
        }
    }

    return 0;
}

