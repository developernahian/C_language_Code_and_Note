#include<stdio.h>
int main()
{
    //Multiplication table
    while(1)
    {
        int num,i;
        printf("Enter any number : ");
        scanf("%d",&num);
        for(i=1; i<=10; i++)
        {
            printf("%d X %d = %d\n",num,i,num*i);
        }
    }


//    //Multiplication table
//    while(1)
//    {
//    int num1, num2=1,num3;
//    printf("Enter any number : ");
//    scanf("%d",&num1);
//
//    for(num2=1; num2<11; num2++)
//    {
//        num3=num1*num2;
//        printf("%d * %d = %d\n",num1,num2,num3);
//    }
//    }
    return 0;
}
