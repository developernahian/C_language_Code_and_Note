/*
    Relational Operator:

    Operator        Description
    ==              Checks if the values of two operands are equal or not. If yes, then the condition becomes true.
    !=              Checks if the values of two operands are equal or not. If the values are not equal, then the condition becomes true.
    >               Checks if the value of left operand is greater than the value of right operand. If yes, then the condition becomes true.
    >=              Checks if the value of left operand is greater than or equal to the value of right operand. If yes, then the condition becomes true.
    <               Checks if the value of left operand is less than the value of right operand. If yes, then the condition becomes true.
    <=              Checks if the value of left operand is less than or equal to the value of right operand. If yes, then the condition becomes true.

    */
    /*
    Control statements: 1)Conditional control statement 2)loop control statement

    Conditional control statement - 1)if-else and 2)switch
    Loop control statement - for, while, do while
    [I only use here (if-else) not use switch
    */
    //Even means plus number and odd means minus number

#include<stdio.h>
int main()
{
    int num1;
    printf("Enter an integer: ");
    scanf("%d",&num1);

    if(num1%2==0)//here we cant use (;)
    printf("Even\n");
    if(num1%2!=0)
    printf("Odd\n\n");

    //OR

    int num2;
    printf("Enter an integer: ");
    scanf("%d",&num2);

    if(num2%2==0)
    printf("Even\n");
    else
    printf("Odd\n");





    return 0;
}
