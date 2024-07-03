//continue
#include<stdio.h>
int main()
{
    /*
    The continue statement skips the current iteration of the loopand continues with the next iteration. Its syntax is:
    continue;

    The continue statement is almost always used with the if...else statement.
    */


    //Example 1: continue statement
    // Program to calculate the sum of a maximum of 10 numbers
    // Negative numbers are skipped from the calculation
    int i;
    double number,sum=0.0;
    for(i=1; i<=10; i++)
    {
        printf("Enter a n%d: ",i);
        scanf("%lf",&number);
        if(number<0.0)
        {
            continue;
        }
        sum+=number; //sum = sum + number
    }

    printf("Sum = %2lf",sum);


    /*
    Output

    Enter a n1: 1.1
    Enter a n2: 2.2
    Enter a n3: 5.5
    Enter a n4: 4.4
    Enter a n5: -3.4
    Enter a n6: -45.5
    Enter a n7: 34.5
    Enter a n8: -4.2
    Enter a n9: -1000
    Enter a n10: 12
    Sum = 59.70
    */

    /*
    In this program, when the user enters a positive number, the sum
    is calculated using sum += number; statement.

    When the user enters a negative number, the continue statement
    is executed and it skips the negative number from the calculation.
    */



    return 0;
}
