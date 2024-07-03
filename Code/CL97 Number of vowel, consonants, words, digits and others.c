#include<stdio.h>
int main()
{
    char str[1000], ch;
    int i, vowel, consonant, digit, word, other;

    printf("Enter a string : ");
    gets(str);

    i=vowel=consonant=word=digit=other=0;//inportant

    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')

            vowel++;

        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))//important
            consonant++;

        else if(ch>='0'&& ch<='9')
            digit++;

        else if(ch==' ')
            word++;

        else
            other++;

        i++;
    }
    word++;

    printf("Number of vowers = %d\n",vowel);
    printf("Number of consonants = %d\n",consonant);
    printf("Number of words = %d\n",word);
    printf("Number of digits = %d\n",digit);
    printf("Number of others = %d\n",other);


    return 0;
}
