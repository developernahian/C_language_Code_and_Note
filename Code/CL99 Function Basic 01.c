//C Functions
//user-defined


#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1, &num2);

    printf("The sum is : %d\n", sum(num1,num2));

    return 0;
}

//in C we can use function before the main function OR after the main function
int sum(int a, int b)   /*Return_type  function_name  (argument parameter)*/
{
    return a+b; //important(return the result in the main function)
}
