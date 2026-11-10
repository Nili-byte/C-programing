#include<stdio.h>
#include<string.h>


int main(){
 char input;
  
    printf("Enter a Character to check if it is a vowel : \n");
    scanf(" %c", &input);
    switch (input)
    {
    case 'a':
        printf("Character %c  is a vowel" ,input);
        break;
    
    case 'e':
         printf("Character %c  is a vowel" ,input);
         break;
    case 'i':
         printf("Character %c  is a vowel" ,input);
         break;
    case 'o':
         printf("Character %c  is a vowel" ,input);
         break;
    case 'u':
         printf("Character %c  is a vowel" ,input);
         break;
    case 'A':
        printf("Character %c  is a vowel" ,input);
        break;
    
    case 'E':
         printf("Character %c  is a vowel" ,input);
         break;
    case 'I':
         printf("Character %c  is a vowel" ,input);
         break;
    case 'O':
         printf("Character %c  is a vowel" ,input);
         break;
    case 'U':
         printf("Character %c  is a vowel" ,input);
         break;

    
    default:

        printf(" Character %c is a consonant",input);
        break;
    }
    return 0;
}