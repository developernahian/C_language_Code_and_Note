#include<stdio.h>
int main()
{
    char s1[]= "I Am Nahian";


    int i=0,len=0;

    while(s1[i]!='\0')
    {
        i++;
        len++;//as like count++
    }

    printf("Length = %d\n",len);



    return 0;
}

