/*
GCD= Greatest Common Divisor
LCM= Least Common Multiple

num1=60
num2=24

60=2*2*3*5
24=2*2*2*3

GCD= 2*2*3=12
LCM=2*2*3*2*5=120
LCM=(num1*num2)/12=120

*/

#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,rem,gcd,lcm;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&num1,&num2);

    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;

    printf("GCD = %d\n",gcd);
    printf("LCM = %d\n",lcm);

    return 0;
}
