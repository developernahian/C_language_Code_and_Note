/*
                                                char < int < float < double

Data Type                       Examples              Keyword       Storage size             Format specifier
Character data                 'a','s','1'             char          1   B byte  (8 bit)            %c
Whole numbers                     152                  int           2/4 B bytes (16 bit)       %d or %i (but %d is better than %i)
Floating point numbers       6 decimal places         float          4   B bytes (32 bit)           %f
Double numbers              15 decimal places         double         8   B bytes (64 bit)           %lf
*/


/*
Type            value                        variable name
integer         ...-1,0,1...                a triangle_area
float           -6.3 103.95     [float<=6]
double          3.14164643398   [double>6]
character       h //only one character, if we use abcw then compiler take only w

*/


/*
ভেরিয়েবল বা চলক কি?
প্রোগ্রামে কোন একটি নাম দিয়ে যদি তার অধীনে ডেটা রাখা হয় তবে ঐ নামকেই চলক বলে।
ভেরিয়াবল লেখার নিয়ম
1) ভেরিয়াবল নামের মধ্যে বর্ণ (A...Z, a....z), অঙ্ক (0,1,....9), আন্ডারস্কোর (_), ডলারচিহ্ন ($)  ব্যাবহার করা যায়।
 Variable name:
 Valid( role_number   Id1   Subject102   )
 Invalid( "Anis"   anis@  #anis )

2) ভেরিয়াবলের নাম ডিজিট বা অঙ্ক দিয়ে শুরু হতে পারবে না।
 Valid( number1  _number1  a2b )
 Invalid( 1number 96times )

3) কোন কিওয়ার্ড/ ফাংশন ভেরিয়াবলের নাম হিসাবে ব্যাবহার করা যায় না।
 Valid( Float MAIN )
 Invalid( float main for )

4) ভেরিয়াবলের নামের মধ্যে কোন ফাঁকা স্থান থাকতে পারেনা।
 Valid( my_1st_variable
 Invalid( my 1st variable    number 1  )

5) ভেরিয়াবলের নামকরণে সর্বাধিক ৩১ ক্যারেক্টার ব্যাবহার করা যায়। তবে ৮ ক্যারেক্টার ব্যাবহার করাই শ্রেয়।
*/
/*
An integer variable num that will contain 10,
Write a program that prints an integer number
*/

#include<stdio.h>
int main()
{
//    //Variable declaration and initialization
//    int num1=10;
//    int num2=20;
//    int num3=30;
//    int num4=40,num5=50,num6=60;
//
//
//    //Variable declaration
//    float A;
//    float a,x;
//    double B;
//    double b,z;
//    char ch;
//
//
//    //variable initialization
//    A=1;
//    a=2.5;
//    x=3.0578;
//    B=10.8778;
//    b=11.2111111,z=13.0001;
//    ch='$';// We can use here A to Z, a to z, 0 to 9 and any symbol but only one carecter
//
//
//    printf("Number is %d\n",num1);//always Escape Sequence new line \n should use in the double quotation
//    printf("Number is %d\n",num2);
//    printf("Numbers are %d,%d,   %d\n,%d",num3,num4,num5,num6);
//
//
//    printf("\nThe value of A= %f",A);
//    printf("\nThe value of a= %.2f x=%.9f",a,x);//%.2f for show two digit after (.)
//    printf("\nThe value of B= %lf    b=   %lf z=%lf  ch=%c",B,b,z,ch);



//    int n = 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);
//    n = n + 1;
//    printf("%d\n", n);



//    /*
//    How to check int,float,double and char data takes 4,4,8,1 byte
//    */
//    int i;
//    float f;
//    double d;
//    char c;
//
////    i=737;
////    f=3.5454;
////    d=8.65656565656;
////    c='u';
//
//    printf("Size of integer: %d byte\n",sizeof(i));
//    printf("%d byte\n",sizeof(f));
//    printf("%d\n",sizeof(d));
//    printf("%d",sizeof(c));


    /*
    int, float, double,char  take own data
    */
    int a=1.8787;
    float b=-5.8888888888;
    double c=5.33333333333333333333;
    char d='abcdef';


    printf("int value a: %d\n",a);
    printf("float value b: %f\n",b);
    printf("double value c: %lf\n",c);
    printf("char value d: %c\n",d);




    return 0;
}
