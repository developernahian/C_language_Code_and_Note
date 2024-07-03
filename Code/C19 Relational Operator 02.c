#include<stdio.h>
int main()
{
    /*
            প্রোগ্রামে যতবার খুশি if এবং else if ব্যবহার করা যায় কিন্ত else কেবল একবার ব্যবহার করা যায়।
    if এবং else if এ condition থাকে কিন্ত else এ কোনো থাকে না।
             যতবার if থাকে program ততবার চেক করে তায় else if  ব্যবহার করা হয়। কারণ else if সিড়ি হিসেবে কাজ করে।
    */

    /*
    if
    if
    if

    or

    if
    else if
    else if
    else if

    or

    if
    else if
    else if
    else

    */

    int num1,num2;
    printf("Enter the first number : ");
    scanf("%d",&num1);

    printf("Enter the second number : ");
    scanf("%d",&num2);

    if(num1>num2)
        printf("%d is large number\n",num1);

    else if(num1<num2)
        printf("%d is large number\n",num2);

    else
        printf("Numbers are equal\n");

        //OR

        int num3,num4;
    printf("Enter the first number : ");
    scanf("%d",&num3);

    printf("Enter the second number : ");
    scanf("%d",&num4);

    if(num3>num4)
        printf("%d is large number",num3);

    if(num3<num4)
        printf("%d is large number",num4);

    if(num3==num4)
        printf("Numbers are equal");


        //Another Program


        float time;
        printf("\n\nEnter a time : ");
        scanf("%f",&time);
        if(time<=11)
        {
            printf("\nGood Morning\n");
            printf("Nahian\n\n");
        }
        else
        {
            printf("Good Evening\n");
            printf("How was the day?\n\n");
        }



    return 0;
}
