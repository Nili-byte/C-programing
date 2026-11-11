#include<stdio.h>
#include<string.h>
#include<ctype.h>


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




// //Professional and cleaner way


// int main(){
// char input;
// printf("Enter a character to check : ");
// scanf("%c",&input);

// if(!isalpha((unsigned char)input)){
//     printf("Invalid character");
//     return 0;
// }

// switch (tolower((unsigned char)input))
// {
// case 'a':
// case 'e':
// case 'i':
// case 'o':
// case 'u':
// printf("Its is an vowel");
//     break;

// default:
// printf("its an cosonant");
//     break;
// }

// return 0;
// }



