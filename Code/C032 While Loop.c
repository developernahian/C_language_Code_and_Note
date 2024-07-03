#include<stdio.h>
int main()
{
    //start example (1)
    int b=1;
    //int b;
    //i=b;
    while(b<=5)//it has only one part, its condition part
    {//here must be use {  }
       printf("%d\n",b);
       printf("hello world\n");
    b++;
    }
    //end example (1)


    //start example (2)
    // Print numbers from 1 to 5
    int i=1;
    while (i<=5)
    {
        printf("%d\n",i);
        ++i;
    }

    /*
    Here, we have initialized i to 1.

    1. When i is 1, the test expression i <= 5 is true. Hence, the body of the while loop is executed.
    This prints 1 on the screen and the value of i is increased to 2.

    2. Now, i is 2, the test expression i <= 5 is again true. The body of the while loop is executed again.
    This prints 2 on the screen and the value of i is increased to 3.
    3. This process goes on until i becomes 6. When i is 6, the test expression i <= 5 will be false and the loop terminates.
    */
    //end example (2)



    int a;
    a=101;
    while(a<=110)
    {
        printf("C Language\n");
        printf("%d\n",a);
        printf("Bangladesh\n");
        a++;
    }

//write a program that print odd number between 1 to 50
    int c=1;
    while(c<=50)
    {
        printf("%d\n",c);
        c=c+2;
    }


    return 0;
}
