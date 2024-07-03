//break
#include<stdio.h>
int main()
{
    /*C break
    The break statement ends the loop immediately when it is encountered. Its syntax is:
    break;

    The break statement is almost always used with if...else statement inside the loop.
    */


    //Example 1: break statement
    // Program to calculate the sum of a maximum of 10 numbers
    // If a negative number is entered, the loop terminates
    int i;
    double number,sum=0.0;
    for(i=1; i<=10; ++i)
    {
        printf("Enter a n%d: ",i);
        scanf("%lf",&number);

        //If the user enters a negative number, the loop ends
        if(number<0)
        {
            break;
        }
        sum+=number; //sum=sum+number;
    }
    printf("Sum=%.2lf",sum);

    /*
    Output
    Enter a n1: 2.4
    Enter a n2: 4.5
    Enter a n3: 3.4
    Enter a n4: -3
    Sum = 10.30

    */

    /*
    This program calculates the sum of a maximum of 10 numbers.
    Why a maximum of 10 numbers? It's because if the user enters a negative number, the break
    statement is executed. This will end the for loop, and the sum is displayed.


    In C, break is also used with the switch statement. This will be discussed in the next tutorial.
    */


    return 0;
}

