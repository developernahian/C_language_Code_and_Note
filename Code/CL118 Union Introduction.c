// Union is like a Structure, Union is a user defined data type. In Union, all members share the same memory location.

/*
    What are applications of union?
    Unions can be useful in many situations where we want to use
    some memory for tow ore more members.
*/


/*
        DIFFERENT BETWEEN STRUCTURE AND UNION
    struct test                       union test
    {                                 {
        char ch;                          char ch;
        int x;                            int x;
        float y;                          float y;
    }                                 }
    struct test t1                    union test t1;
    t1 = 1 + 4 + 4 = 9 bytes          t1 = 1, 4, 4 = 4 bytes
*/


#include<stdio.h>

union test
{
    int x,y;
};

int main()
{
    union test t1;

    //
    t1.x=10;
    printf("t1.x = %d\n",t1.x);//output x = 10
    printf("t1.y = %d\n",t1.y);//output y = 10
    //


    //
    t1.y=20;
    printf("t1.x = %d\n",t1.x);//output x = 20
    printf("t1.y = %d\n",t1.y);//output y = 20
    //


    //Wrong Wrong Wrong Wrong Wrong
    //t1.x=30;Wrong
    //t1.y=40;Wrong
    //printf("t1.x = %d\n",t1.x);Wrong
    //printf("t1.y = %d\n",t1.y);Wrong
    //Wrong Wrong Wrong Wrong Wrong
    //Output is 40




    getch();
}
