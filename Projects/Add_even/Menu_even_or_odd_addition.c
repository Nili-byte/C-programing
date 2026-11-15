#include <stdio.h>

int main(void) {
    int choice, num1, num2;

    printf("1. Addition of two numbers\n");
    printf("2. Check even or odd\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the first integer : ");
            scanf("%d",&num1);
            printf("Enter the second integer : ");
            scanf("%d",&num2);
            printf("The addition is %d ",num1+num2);
            break;
        case 2:
            printf("Enter a integer :");
            scanf("%d",&num1);
            if(num1%2==0){
                printf("\n%d is even",num1);
            }
            else{
                printf("\n%d is odd",num1);
            }
            break;
            
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}