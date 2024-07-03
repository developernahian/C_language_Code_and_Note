#include<stdio.h>

union test1
{
   int x,y; //4 bytes
};

union test2
{
    char ch;
    int x //4 bytes
};

union test3
{
    char name[20]; //24 bytes.I dont know why it doesnt show20 problem
    double d;
};

//
struct test4
{
    int x;//12 byte. I dont know why it doesn't show 9 bytes. Problem
    int y;
    char ch;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;

    struct test4 t4;

    printf("sizeof(t1) = %d\n",sizeof(t1));
    printf("sizeof(t2) = %d\n",sizeof(t2));
    printf("sizeof(t3) = %d\n",sizeof(t3));

    printf("sizeof(t4) = %d\n",sizeof(t4));


    getch();
}
