//DOUBLE
#include<stdio.h>
#include<math.h>//math.h হেডার ফা্ইল না দিলে CodeBlocks সেটা by default ধরে নিয়ে কাজ করে। তবে এটা দিতে হবে।
int main()
{/*
    The function sqrt() takes a single argument (in double) and returns the square root (also in double).
    [Mathematics]  √x = sqrt(x) [In C Programming]
    */

//    double result=sqrt(25);
//    printf("%.2lf",result);

//    int x=49;
//    double result = sqrt(x);
//    printf("%.2lf",result);

    int x;
    printf("Enter any number : ");
    scanf("%d",&x);
    double result =sqrt(x);//Square root returns double value so I use here double
    printf("Square Root is : %.2lf",result);

    return 0;
}
