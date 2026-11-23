




#include<stdio.h>
#include<ctype.h>
    float num1,num2;
    int choice;
    float Addition(num1 , num2){
        return num1+num2;
    }
    float Substraction(num1 , num2){
        return num1-num2;
    }
    float Division(num1 , num2){
        return num1/num2;
    }
    float Multiplication(num1 , num2){
        return num1*num2;
    }
int main(){

    
    printf("1. Addition ");
    printf("\n2. Subtraction ");
    printf("\n3. Multiplication ");
    printf("\n4. Divivion ");
    printf("\nEnter a choice (1-4): ");
    scanf("%d",&choice);
    if(choice < 1 || choice >4 ){
        printf("Invalid Enter a Integer");
    }
    else{
        printf("Enter the first number : ");
        scanf("%f",&num1);
        printf("Enter the Second number : ");
        scanf("%f",&num2);
        if(num2==0 && choice==4){
            printf("Division by zero is not allowed.");
        }
    }

        switch (choice){
            case 1:
            printf("The Addition is %f ",Addition(num1,num2));
            break;
        
            case 2:
            printf("The Subtraction is %f ",Substraction(num1,num2));
             break;
            case 3:
            printf("The Multipication is %f ",Multiplication(num1,num2));
             break;
            case 4:
            printf("The Division is %f ",Division(num1,num2));
           break;
} 

      

    return 0;
}