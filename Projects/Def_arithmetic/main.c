
//incomplete



#include<stdio.h>
#include<ctype.h>
    float num1,num2,choice;
    Addition(num1 , num1){
        return num1+num2;
    }
    Substraction(num1 , num1){
        return num1-num2;
    }
    Division(num1 , num1){
        return num1/num2;
    }
    Multiplication(num1 , num1){
        return num1*num2;
    }
int main(){

    
    printf("1. Addition ");
    printf("2. Subtraction ");
    printf("3. Multiplication ");
    printf("4. Divivion ");
    printf("Enter a choice (1-4): ");
    scanf("%d",choice);
    if(choice < 1 || choice >4 ){
        printf("Invalid Enter a Integer")
    }
    else{
        printf("Enter the first number : ");
        scanf("%f",num1);
        printf("Enter the Second number : ");
        scanf("%f",num2);
    }

        switch (choice){
            case 1:
            printf("The Addition is %f ",Addition(num1,num2));
        
            case 2:
            printf("The Subtraction is %f ",Subtraction(num1,num2));
        
            case 3:
            printf("The Multipication is %f ",Multiplication(num1,num2));
        
            case 4:
            printf("The Division is %f ",Division(num1,num2));
        }


        //In progess

    return 0;
}