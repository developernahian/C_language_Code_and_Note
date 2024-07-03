#include<stdio.h>
int main()
{
    //Start (1)

    /*
    C goto Statement:
    The goto statement allows us to transfer control of the program to the specified label.

    Syntax of goto Statement:
    goto label;
    ... .. ...
    ... .. ...
    label:
    statement;

    The label is an identifier. When the goto statement is encountered, the control of the program jumps to label: and starts executing the code.
    */

    // Program to calculate the sum and average of positive numbers
// If the user enters a negative number, the sum and average are displayed.
    int maxInput = 5;
    int i;
    double number, average, sum=0.0;

    for(i=1; i<=maxInput; ++i)
    {
        printf("%d. Enter a number: ", i);
        scanf("%lf",&number);
        if(number < 0.0)
            goto jump;
        sum += number;
    }
jump:
    average=sum/(i-1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", average);

    /*
    OUTPUT;
    1. Enter a number: 3
    2. Enter a number: 4.3
    3. Enter a number: 9.3
    4. Enter a number: -2.9
    Sum = 16.60
    */
    /*
    Reasons to avoid goto
    The use of goto statement may lead to code that is buggy and hard to follow. For example,
    one:
    for (i = 0; i < number; ++i)
    {
    test += i;
    goto two;
    }
    two:
    if (test > 5) {
    goto three;
    }
    ... .. ...

    Also, the goto statement allows you to do bad stuff such as jump out of the scope.

    That being said, goto can be useful sometimes. For example: to break from nested loops.

    */

    /*
    Should you use goto?
    If you think the use of goto statement simplifies your program, you can use it. That being said, goto is rarely useful and
    you can create any C program without using goto altogether.

    Here's a quote from Bjarne Stroustrup, creator of C++, "The fact that 'goto' can do anything is exactly why we don't use it."
    */

    //End (1)








//Start (2)
//    int num;
//    char latter;
//jump:
//    printf("Enter a number : ");
//    scanf("%d",&num);
//    if(num<25)
//        printf("The number %d is not greater than 25\n",num);
//    else if(num>25)
//        printf("The number %d is greater than 25\n",num);
//    else
//    {
//        printf("The number 25 is equal to 25\n");
//        goto jump;
//    }
//    getch();
//    printf("Enter a latter :");
//    scanf("%c",&latter);
//
//    if(latter=='a' || latter=='e' || latter=='i' || latter=='o' || latter=='u')
//        printf("%c is Vowel",latter);
//    else
//        printf("%c is Consonant",latter);

//End (2)
    getch();
}
