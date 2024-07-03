/*
In programming, loops are used to repeat a block of code until a specified condition is met.
C programming has three types of loops: 1)for loop
                                        2)while loop
                                        3)do while loop
We will learn about for loop in this tutorial. In the next tutorial, we will learn about while and do...while loop.

for Loop:
The syntax of for loop is:
                            for (initializationStatement; testExpression; updateStatement)
                            {
                            // statements inside the body of loop
                            }
How for loop works?
*The initialization statement is executed only once.
Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is terminated.
*However, if the test expression is evaluated to true, statements inside the body of for loop are executed, and the update expression is updated.
*Again the test expression is evaluated.
***This process goes on until the test expression is false. When the test expression is false, the loop terminates.




*/


#include<stdio.h>
int main()
{
//    //start example (1.1)
//    int x;//counter declaration
//    for(x=1; x<=5; x++)//x++ Increment
//        printf("This is my first Loop\n");
//
//    int y;
//    for(y=1; y<5; y++)//y++ Increment
//        printf("This is my second Loop\n");
//
//    int z;
//    for(z=-1; z>=-5; z--)//z--decrement
//        printf("This is my third Loop\n");
////end example (1.1)
//
//
//
//
////start example (1.2)
//int main()
//{
//    int i;
//    for (i=1;i<10;i++)
//    {
//        printf("%d\n", i);
//    }
////end example (1.2)
//
//
//
//
////start example (2.1) write a program that print "c programming" and "hello Bangladesh" 5 times
//    int abc;
//    for(abc=1; abc<=5; abc++)//(abc++,++abc,abc=abc+2) they are same increment
//        /*for (abc=1 initialization; abc<=10 condition; abc++ or ++abc or abc-=-1 or abc+=+abc or abc=abc+2 or abc=abc+3 counterUpdate[Increment or decrement])
//        {
//            If we use only one statement like printf then, no need to use {  }
//            If we use more than one statement then we should use {  }
//        }
//
//        */
//    {
//        printf("C Programming\n");
//        printf("Hello World\n\n");
//    }
////end example (2.1)






////start example (2.2)
////Also, we can skip the initial value expression, condition and/or increment by adding a semicolon.
////print 0 to 9
//    int h=0;
//    int max = 10;
//    for (; h < max; h++)
//    {
//        printf("%d\n", h);
//    }
////end example (2.2)
//
//
////start example (2.3)
//
//
//    int g=1;
//
//    for(; g<=10; g++)
//
//        printf("%d\n",g);
//
//
////end example (2.3)





//    //start example (3)
//    int num1;
//    for(num1=-5; num1<=5; num1++)
//    {
//        printf("Hi\n");
//        printf("%d\n",num1);
//    }
////end example (3)
//
//
//
//    //start example (4) write a program that print even number between 1 to 100 by for loop
//    int odd;
//    for(odd=2; odd<=100; odd=odd+2)
//        printf("%d\n",odd);
//    //end example (4)





//    //start example (5)
//    //program to calculate the sum of first n natural numbers
//    //positive integers 1,2,3,....n are known as natural numbers
//    int num, count, sum=0;
//    printf("Enter a positive integer: ");
//    scanf("%d",&num);
//
//    //for loop terminates when num is less than count
//    for(count=1; count<= num; ++count)
//    {
//        //sum+=count;//Assignment Operator
//        sum=sum+count;
//        //printf("Sum = %d",sum);If I use printf into {} then output will be [Sum = 1Sum = 3Sum = 6Sum = 10Sum = 15Sum = 21Sum = 28Sum = 36Sum = 45Sum = 55]
//    }
//    printf("Sum = %d",sum);
//
//    /*
//    sum  count  sum
//    0   + 1   = 1
//    1   + 2   = 3
//    3   + 3   = 6
//    6   + 4   = 10
//    10  + 5   = 15
//    15  + 6   = 21
//    21  + 7   = 28
//    28  + 8   = 36
//    36  + 9   = 45
//    45  + 10  = 55
//
//
//    The value entered by the user is stored in the variable num. Suppose, the user entered 10.
//
//
//    The count is initialized to 1 and the test expression is evaluated. Since the
//    test expression count<=num (1 less than or equal to 10) is true, the body of for loop is
//    executed and the value of sum will equal to 1.
//
//
//    Then, the update statement ++count is executed and the count will equal to 2.
//    Again, the test expression is evaluated. Since 2 is also less than 10, the test expression is
//    evaluated to true and the body of for loop is executed. Now, the sum will equal 3.
//
//
//    This process goes on and the sum is calculated until the count reaches 11.
//
//    When the count is 11, the test expression is evaluated to 0 (false), and the loop terminates.
//
//    Then, the value of sum is printed on the screen.
//    */
//
//
//    //end example (5)


//    //start example (6)
//    //Write a program in C to display the multiplication table of a given integer.
//    int j,n;
//    printf("Input the number (Table to be calculated) : ");
//    scanf("%d",&n);
//    printf("Selected number is %d\n",n);
//
//    for(j=1; j<=10; j++)
//    {
//        printf("%d * %d = %d\n",n,j,n*j);
//    }
//
//    //end example (6)


    //start example (7)
    int i;
    for(i=1; i<=10; i+=+1)  //i-=-1
        printf("number is %d\n",i);// important printf "number is %d"
    //end example (7)



//Nested For Loop in C

    return 0;
}
