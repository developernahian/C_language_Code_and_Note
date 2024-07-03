//C Functions
//user-defined


#include<stdio.h>
int main()
{

    int result = sum(4,6);// insert function value to result
    printf("The sum is : %d",result); //print result

    result = sum(5,3);// insert function value to result
    printf("\nThe sum is : %d\n",result);// print result
//OR
    printf("\nThe sum is : %d",sum(6,8));//function and print
    printf("\nThe sum is : %d\n",sum(10,9));//function and print


    return 0;
}


int sum(int a, int b)   /*Return_type  function_name  (argument parameter)*/
{
    return a+b;
}


