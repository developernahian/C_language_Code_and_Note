//Recursive Call
//Base Case : recursive call stop to use base case condition

/*
5 factorial
5!=5*4*3*2*1

4 factorial
4!=4*3*2*1

3!=3*2*1

2!=2*1

1!=1


here 5!= 5* 4!
here 4!= 4* 3
here 3!= 3* 2!
here 2!= 2* 1!
here 1!= 1
so we get n!= n* (n-1)!
*/
#include<stdio.h>
int main()
{
    int result= factorialA(5);
    printf("Factorial of 5 = %d", result);
}

int factorialA(int n)//line_38 to here by recursive call until Base_Case==1
{
    if(n==1)//Base Case
        return 1;

    else
        return n*factorialA(n-1);//Recursive Call
}
