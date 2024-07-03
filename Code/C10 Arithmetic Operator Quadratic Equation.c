#include<stdio.h>
int main()
{
   //ax^2 + bx + c  দ্বিঘাত সমীকরণটির মূলগুলো নির্ণয়ের জন্য Program
    /*
    ax^2 + bx + c
    x=(-b+-√(b^2 - 4ac))/(2a)
    */
    float a,b,c,d,x1,x2;
    printf("Enter a b c : ");
    scanf("%f %f %f",&a,&b,&c);

    d=sqrt(b*b-4*a*c);//d=√(b^2 - 4ac)

    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    printf("x1= %.2f\nx2= %.2f",x1,x2);


    return 0;
}
