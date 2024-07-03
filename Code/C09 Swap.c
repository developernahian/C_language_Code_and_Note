#include<stdio.h>
int main()
{
    //How to swap two numbers with temporary variable
    int num1=10;
    int num2=5;

    int temp;

    temp=num1; //temp=10
    num1=num2; //num1=5
    num2=temp; //num2=10

    printf("num1 = %d\nnum2 = %d\n\n",num1,num2);


    //How to swap two numbers without temporary variable
    int Num1=10;
    int Num2=5;

    Num1 = Num1 - Num2; //Num1=5
    Num2 = Num1 + Num2; //Num2=10
    Num1 = Num2 - Num1; //Num1=5

    printf("Num1 = %d\nNum2 = %d\n",Num1,Num2);


    return 0;
}
