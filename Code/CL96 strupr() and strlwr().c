#include<stdio.h>
int main()
{
    char str1[]= "I Am Nahian";

    strlwr(str1);

    printf("str1 = %s\n",str1);


    strupr(str1);
    printf("str1 = %s\n",str1);

    return 0;
}
