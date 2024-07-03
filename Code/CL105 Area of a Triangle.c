//Area of a Triangle

#include<stdio.h>
double triangleArea(double b, double h);// function declear


int main()
{
    double base, height;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Height : ");
    scanf("%lf",&height);

    double area = triangleArea(base,height);

    printf("Area = %lf\n",area);

    return 0;
}

double triangleArea(double b, double h)
{
    return .5 * b * h;
}
