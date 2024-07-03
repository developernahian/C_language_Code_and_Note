#include<stdio.h>
int main()
{
    /*
    && Logical AND
    || Logical OR
    ! Logical NOT
    */

//    //1) Enter a letter to check vowel or consonant
//    char ch;
//    printf("Enter a letter : ");
//    scanf("%c",&ch);
//
//    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
//       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'
//       )
//        printf("Vowel");
//
//    else
//        printf("Consonant");


//    //2) Write a program that read 3 numbers and display maximum
//    int num1,num2,num3;
//    printf("\n\nEnter three numbers : ");
//    scanf("%d %d %d",&num1,&num2,&num3);
//
//    if(num1>num2 && num1>num2)
//        printf("Large number is : %d",num1);
//    else if(num2>num1 && num2>num3)
//        printf("Large number is : %d",num2);
//    else if(num3>num1 && num3>num2)
//        printf("Large number is : %d",num3);
//    else
//        printf("Numbers are equal");

    //3) Leap Year
    /*
    How to check Whether a year is a leap year or not?
    >>If a year is divisible by 400 then it is a Leap year.
    For example: 2000 is divisible by 400. Therefore it is a leap year.

    >>If a year is not divisible by 400 but it is divisible by 100 then it is not a leap year.
    For Example: 1900 is divisible by 100 but not 400. Therefore it is not a leap year.

    >>If a year is not divisible by 400 and not divisible by 100 but it is divisible by 4 then it is a leap year.
    For example: 2012 is not divisible by 400 and not divisible by 100 but it is divisible by 4. Therefore it is a Leap year.
    */

//    //Leap year 1
//    int x;
//    printf("Enter a year : ");
//    scanf("%d",&x);
//
//    if(x%400==0)
//        printf("Leap Year");
//
//    else if(x%100==0)
//        printf("Not Leap Year");
//
//    else if(x%4==0)
//        printf("Leap year");
//    else
//        printf("Not Leap Year");
//
//    //Leap year 2
//    int year;
//    printf("Enter any year : ");
//    scanf("%d",&year);
//
//    if("year%400==0")
//        printf("Leap year");
//    else if(year%4==0 && year%100!=0)
//        printf("Leap year");
//    else
//        printf("Not Leap year");

    int mark;
    printf("Enter Mark : ");
    scanf("%d",&mark);

    if(mark>100 || mark<0)//We must here Logical OR and we must use Logical AND in all ELSE IF
        printf("Invalid Mark\n");

    else if(mark>=80 && mark<=100)
        printf("A+\n");

    else if(mark>=70 && mark<=79)
        printf("A\n");

    else if(mark>=60 && mark<=69)
        printf("A-\n");

    else if(mark>=50 && mark<=59)
        printf("B\n");

    else if(mark>=40 && mark<=49)
        printf("C\n");

    else if(mark>=33 && mark<=39)
        printf("D\n");

    else
        printf("Fail\n");






    //Another
    int num1,num2,num3,num4,num5;

    printf("Enter 1st integer number : ");
    scanf("%d",&num1);

    printf("Enter 2nd integer number : ");
    scanf("%d",&num2);

    printf("Enter 3rd integer number : ");
    scanf("%d",&num3);

    printf("Enter 4th integer number : ");
    scanf("%d",&num4);

    printf("Enter 5th integer number : ");
    scanf("%d",&num5);
    int max, min;

    //Find Large number
    if(num1>=num2 && num1>=num3 && num1>=num4 && num1>=num5)
        max=num1;

    else if(num2>=num1 && num2>=num3 && num2>=num4 && num2>=num5)
        max=num2;

    else if(num3>=num1 && num3>=num2 && num3>=num4 && num3>=num5)
        max=num3;

    else if(num4>=num1 && num4>=num2 && num4>=num3 && num4>=num5)
        max=num4;

    else
        max=num5;




    //Find smallest number
    if(num1<=num2 && num1<=num3 && num1<=num4 && num1<=num5)
        min=num1;

    else if(num2<=num1 && num2<=num3 && num2<=num4 && num2<=num5)
        min=num2;

    else if(num3<=num1 && num3<=num2 && num3<=num4 && num3<=num5)
        min=num3;

    else if(num4<=num1 && num4<=num2 && num4<=num3 && num4<=num5)
        min=num4;

    else
        min=num5;


    //Print
    printf("Large number is %d\n",max);
    printf("Minimum number is %d\n",min);
    printf("Plus between  large   and smallest  number is : %d + %d = %d\n",max,min,(max+min));
    printf("Minus between   large and  smallest number is : %d - %d = %d\n",max,min,(max-min));
    printf("Multiple between large and smallest number is : %d * %d = %d\n",max,min,(max*min));
    printf("Divide between large and  smallest  number is : %d / %d = %d\n",max,min,(max/min));
    printf("Mod between  large  and  smallest number is : %d Mod %d = %d\n",max,min,(max % min));//We cant use Mod(%)in printf for single print







    return 0;
}
