//concatenate
#include<stdio.h>
int main()
{
    char str1[]="My name ";
    char str2[]="is Nahian";
    char str3[]="I live in ";


    strcat(str1,str2);

    strcat(str3,"Earth on Galaxy");

    printf("str1 = %s\n",str1);
    printf("str3 = %s\n",str3);



    return 0;
}
