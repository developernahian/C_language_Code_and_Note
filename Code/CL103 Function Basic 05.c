#include<stdio.h>

long addition(long, long); //Function Declear

int main()
{
   long num1, num2, sum;

   printf("Enter two number : ");
   scanf("%ld%ld", &num1, &num2);

   sum = addition(num1, num2);

   printf("The SUM is %ld\n", sum);

   return 0;
}

long addition(long a, long b)
{
   long result;
   result = a + b;
   return result;
   //OR

//   long restul = a + b;
}
