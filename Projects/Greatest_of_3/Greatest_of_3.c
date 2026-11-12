#include<stdio.h>
int main(){
    printf("---------------Welcome-------------------\n");
int a,b,c;
    printf("Enter the First integers : ");
    scanf("%d",&a);
    printf("Enter the Second integers : ");
    scanf("%d",&b);
    printf("Enter the Third integers : ");
    scanf("%d",&c);

if(a>b && a>c){
    printf("%d is greatest",a);
}
else if(b>a && b>c){
     printf("%d is greatest",b);
    
        
    }
else if(c>a && c>b){
            printf("%d is greatest",c);
            }


else if(a==b && b==c){
                            printf("All integers are equal");
                        
                        
                    }




else if(a==b){
                printf("%d is equal to %d",a,b);
            

            }
else if(b==c){
                    printf("%d is equal to %d",b,c);
            }
else if(a==c){
                        printf("%d is equal to %d",a,c);
                    
                  
                    }

                
                
            
        
    
    

    return 0;
}
