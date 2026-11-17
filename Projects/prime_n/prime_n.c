#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Please enter a positive integer greater than 1.\n");
        return 1;
    }
    else{
        int isprime=1;
        for(int i = 2;i<n;i++)
        {
            if(n%i==0){
                isprime=0;
                break;
            }
            else{
                isprime=1;
            }
        }
        if(isprime==1)
        {
            printf("%d is a prime number.\n",n);
        }
        else{
            printf("%d is not a prime number.\n",n);
        }
    }
    return 0;
}