//C Functions
//user-defined

//in C we can use function after the main function OR before the main function
int sum(int a, int b)   /*Return_type  function_name  (argument parameter)*/
{
    return a+b; //return the result in the main function
}

#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1, &num2);

    int result = sum(num1,num2);

    printf("The sum is : %d\n",result);

    return 0;
}




