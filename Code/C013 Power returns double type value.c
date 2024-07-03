//DOUBLE
#include<stdio.h>
#include<math.h>//math.h হেডার ফা্ইল না দিলে CodeBlocks সেটা by default ধরে নিয়ে কাজ করে। তবে এটা দিতে হবে।
int main()
{
    /*
    The pow() function takes two arguments (base value and power value) and, returns the power raised to the base number. For example,
    For example,
    [Mathematics] xy = pow(x, y) [In programming]
    The first argument is a base value and second argument is a power raised to the base value.
    POWER RETURNS DOUBLE TYPE VALUE ALWAYS
    */


//    //Base=5, Power=2
//    double result = pow(5,2);
//    printf("%.2lf",result);


    //Power by using scanf
    int x,y;
    printf("Enter Base : ");
    scanf("%d",&x);

    printf("Enter Power : ");
    scanf("%d",&y);

    double result=pow(x,y);//POWER RETURNS DOUBLE TYPE VALUE SO I USE DOUBLE
    printf("Result is : %.2lf",result);


    return 0;
}
