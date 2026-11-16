#include<stdio.h>
struct std{
    int roll;
    char name[10];
    float percent;
};

int main(){

    struct std s1;
    printf("Enter name: ");
    scanf("%s",s1.name); 

    printf("Enter roll number: ");
    scanf("%d",&s1.roll);
     
    printf("Enter percentage: ");
    scanf("%f",&s1.percent);

    printf("-------Students Details--------\n");
    printf("Name: %s\n",s1.name);
    printf("Rollno: %d\n",s1.roll);
    printf("Percentage: %f\n",s1.percent);

    return 0;
}

