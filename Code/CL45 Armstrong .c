/*
Armstrong or not?

153= 1^3 + 5^3 + 3^3
    = 1 + 125 + 27
    =153
    Yes its a Armstrong
*/

//Input a number and output will Armstrong or not
#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("Enter any number : ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }

    if(sum==num)
        printf("Armstrong number");
    else
        printf("Not Armstrong");


    return 0;
}
