//C Functions
//user-defined

void sum(int a, int b, int c) //when function doesn't return then the "return_type is void"
{
    printf("The sum is : %d\n",a+b+c);//function equation and print both
}

void sub(int a, int b)
{
    printf("The subtraction is : %d\n", a-b);//function equation and print both
}

#include<stdio.h>
int main()
{
    sum(1,2,3);
    sum(10,20,30);

    sub(10,7);


    return 0;
}




