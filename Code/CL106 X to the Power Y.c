//base^exponent
//2^3 = 2*2*2=8
//2^4=2*2*2*2=16
//3^4=3*3*3*3=81

#include<stdio.h>

void calculatePower(double base, double exp)//no return so void
{
    double  result=1, i;//declear
    for(i=1; i<=exp; i++)
    {
        result = result * base;
    }
    //OR
    //result = pow(base,exp);
    printf("Result is = %.1lf\n",result);
}



int main()
{
    double base, exp;

    printf("Enter base = ");
    scanf("%lf",&base);

    printf("Enter Exponent = ");
    scanf("%lf",&exp);

    //OR
    //calculatePower("2,3");
    //calculatePower("3,3");
    //calculatePower("4,3");

    calculatePower(base,exp);//call function

    return 0;
}


