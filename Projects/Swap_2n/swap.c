#include<stdio.h>
int main(){
 int a=2 , b=3, temp;
 printf("Before swapping: a = %d, b = %d\n", a, b);

temp = a;
a = b;
b = temp;
printf("After swapping: a = %d, b = %d\n", a, b);


    return 0;
}