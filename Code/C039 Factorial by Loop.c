/*
Factorial of a number:
4! = 1*2*3*4=24
5! = 1*2*3*4*5=120
*/
/*
The factorial of a positive number n is given by:
factorial of n (n!) = 1 * 2 * 3 * 4....n

The factorial of a negative number doesn't exist. And, the factorial of 0 is 1.
*/

#include<stdio.h>
int main()
{
    //Start (1)
    int fact=1,n,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++) //If input 4 then n=4
    {
        //i=1    fact=1*1=1
        fact=fact*i;//i=2    fact=1*2=2
    }               //i=3    fact=2*3=6
    //i=4    fact=6*4=24
    //i=5 exit loop
    printf("%d\n",fact);
    //End (1)


//    //Start (2)
//    //shows error if the user enters a negative integer
//    int n,i;
//    int fact=1;
//    printf("Enter an integer : ");
//    scanf("%d",&n);
//
//
//    if(n<0)
//        printf("Error! Factorial of a negative number doesn't exist.");
//    else
//    {
//        for(i=1; i<=n; i++)
//
//            fact*=i;
//
//        printf("factorial of %d = %d",n,fact);
//    }
//
//
//    /*
//    Output
//
//    Enter an integer: 10
//    Factorial of 10 = 3628800
//
//    This program takes a positive integer from the user and computes the factorial using for loop.
//    If the user enters a negative number, the program displays a custom error message.
//
//    */


    return 0;
}
