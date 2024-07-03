/*
Input: n = 124
Output: No it is not a strong number
Explanation: 1! + 2! + 4! = 27 which is not equal to n i.e, 124
Input: n = 145
Output: Yes it is a strong number
Explanation: 1! + 4! + 5! = 145
*/
#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp,fact,i;
    printf("Enter an integer : ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
       printf("%d is a strong number",num);
       else
        printf("%d is not a strong number",num);

    return 0;
}
