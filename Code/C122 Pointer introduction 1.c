//Pointer is a variable that store/point the address of another variable.

// & symbol is used to get the address of the variable.

// * symbol is used to get the value of the variable that the point is pointing to.

//Pointer are powerful features of C and C++ programming that differentiates it from other popular programming languages like: Java and Python.
//Using pointer makes the software more efficient cause it words withe memory management.
//But Excessive usage may make the application less understandable.
#include<stdio.h>
int main()
{
    int a =10;
    printf("Value of a = %d\n",a);//Output 10
    printf("Address of a = %d\n",&a);//Output 635732
                                    //Memory Address always positive integer
    printf("Address of a = %u\n",&a);//Output 365732
                                    //so if we use %u thats time it works an unsign nubmber,that means it works only positive integer, so it can work first
    printf("Address of x = %x\n",&a);//Output 60fefc
                                    //use %x for show memory address in hexa decimal number


    getch();
}
