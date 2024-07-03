#include<stdio.h>
int main()
{
    int x = 5;

    int *ptr; //declear a pointer

    ptr =&x; //pointer variable point the address of x

    printf("%d\n",x);//Output 5         //print value of x
    printf("%d\n",&x);//Output 6356732  //print address of x
    printf("%d\n",ptr);//Output 6356732 //print pointer value and here pointer value is address of x
    printf("%d\n",*ptr);//Output 5      //print pointer value and here pointer value is the value which stay in the address of x
    printf("%d\n",&ptr);//Output 6356728//print pointer variable

    getch();
}
