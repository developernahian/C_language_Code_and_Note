/*
variables are the name of memory blocks which are used to store values.
Two kind of variable 1) Local Variable 2) Global Variable
1) Local Variables: Local variables are the variables which are declared or defined within the declaration part of the function block.
2) Global Variables: Global variables are the variables which are declared or defined below the header files inclusion section or before the main () function.

*/


//Example of Local and Global Variable
#include<stdio.h>
int a=3;//Global Variable
int b=2;//Global Variable
int main()
{
    int c=10;//local Variable
    printf("Inside the main function a= %d and b= %d\n",a,b);
    printf("c= %d\n\n\n",c);
    display();
}

void display()
{
    printf("Inside the display function a= %d and b= %d\n",a,b);
}
