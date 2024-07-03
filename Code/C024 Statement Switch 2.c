#include<stdio.h>
int main()
{
    //Check vowel or consonant
    char ch;
    printf("Enter any letter : ");
    scanf("%c",&ch);

    switch(ch)
    {
    case 'a'://multiple case work for one statement
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel\n");
        break;

    default:
        printf("Consonant\n");
    }


    return 0;
}
