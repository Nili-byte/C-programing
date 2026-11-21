#include<stdio.h>
int main(){
    int num,revi=0,r;
    printf("Enter a number to reverse: ");
    scanf("%d",&num);
    while(num!=0){
        r = num%10;
        revi = revi*10+r;
        num=num/10;
        

    }
    printf("%d",revi);
    return 0;
}