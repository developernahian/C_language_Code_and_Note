#include<stdio.h>
int main()
{
    char str1[] = "My Name Is Nahian";
    char str2[] = "my name is nahian";

    int d = strcmp(str1,str2);//The strcmp() function compares two strings and returns 0 if both strings are identical.


    if(d==0)
        printf("String are equal");
    else
    printf("String are not equal");


    return 0;
}
