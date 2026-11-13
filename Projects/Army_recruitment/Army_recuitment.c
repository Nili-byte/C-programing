#include<stdio.h>
#include<ctype.h>
int main(){

    int age;
    char gender;
    printf("Enter the age of the candidate : ");
    scanf("%d",&age);
    while(1){
    printf("enter the gender of the candidate (M/F) : ");
    scanf(" %c",&gender);
    if(isalpha(gender)){
        break;
    }
    else{
        printf("Invalid input. Please enter a valid gender (M/F).\n");
    }
    }

    
    if(age>=18 && tolower(gender)=='m'){
        printf("The candidate is eligible for army recruitment");
    }
    else if(age>=21 && tolower(gender == 'f')){
        printf("The candidate is eligible for army recruitment");

    }
    else{
        
        printf("The candidate is not eligible for army recruitment");
    }
    return 0;
}