#include<stdio.h>
int main()
{
    char str[]= "I Am Nahian";
    char str2[]= "Earth";

    printf("string : %s\n",str);
    printf("string : %s\n\n",str);

    strrev(str);//this function can reverse one string at a time
    strrev(str2);

    printf("string reverse : %s\n",str);
    printf("string reverse : %s\n\n",str);

    printf("string reverse : %s\n",str2);


    return 0;
}
