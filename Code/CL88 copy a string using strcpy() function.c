#include<stdio.h>
int main()
{
    char source[]="C programming";//I initial here so its not important to put size
    char target[20];//I do not initial here so must put size[20]

    strcpy(target,source);//strcpy library can copy string//here source to target

    printf("Source string = %s\n",source);
    printf("Target string = %s\n",target);


    return 0;
}
