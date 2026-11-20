#include<stdio.h>
int main(){

    int n , max=0  ;
    int arr[100];
    printf("----------Welcome to the program to find the largest element in an array----------\n");
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j = 0;j<n;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    printf("The largest element in the array is: %d", max);
    return 0;
    printf("bye");
}