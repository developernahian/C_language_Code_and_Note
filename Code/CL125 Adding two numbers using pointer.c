#include<stdio.h>
int main()
{
    float x=10.5, y=20.6, sum;

    float *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = &y;

    sum = *ptr1 + *ptr2;

    printf("Sum = %.2f",sum);

    getch();
}
