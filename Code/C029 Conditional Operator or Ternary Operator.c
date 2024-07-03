#include<stdio.h>
int main()
{
    int num1,num2,large;

    printf("Enter Two Numbers : ");
    scanf("%d %d",&num1,&num2);

    large = (num1>num2) ? num1 : num2;
    //or
    //large=num1>num2?num1:num2;
    printf("Large number = %d",large);

    return 0;
}
