#include<stdio.h>
int main()
{


    /*
   ১)  অপারেটর, অপারেন্ড, এক্রপ্রেশন
    a + b = 7; [Here, Operator(+ =), Operand(a b), Constant (7), Expression(a+b=7;)]


    ২) অপারেটর এর প্রকারভেদ
    OPERATOR: 1) Arithmetic Operator 2) Assignment Operator 3) Relational Operator
    4) Logical Operator 5) Conditional Operator 6) Unary Operator
    7) Bitwise Operator 8) Special Operator


    ৩) Arithmetic Operator:
    অপারেটর                           কাজ                 উদাহারণ                ফলাফল
            +                             যোগ করা              X=15+6      X=21
            -                             বিযোগ করা            X=15-6      X=9
             *                              গুন করা               X=15*6      X=90
             /                             ভাগ করা              X=15/6      X=2
    % Modulus   ভাগশেষ করা       X=15%6      X=3


    Operator	Meaning of Operator
        +	addition or unary plus
        -	subtraction or unary minus
        *	multiplication
        /	division
        %	remainder after division (modulo division)




   ৪)      গাণিতিক এ্ক্রপ্রেশন                                                        সমত্যুল্য সি এক্রপ্রেশন
   X=a^2 - 2ab + b^2                   X=a*a-2ab+b*b
   Y=AB^2                              X=A*B*B+C
   X=Y                                 X==Y
   D=x/y                               x/y
   D=square root symbol(b^2-4ac)/2a    sqrt(b*b-4*a*c)/2*a



   ৫) Operators    Priority
   ()            1st

   /             2nd
   *
   %

   +             3rd
   -

   =             4th


   Example:
   Pass1: X=4/2+8*4-(5+2)%3
   Pass2: X=4/2+8*4-7%3
   Pass3: X=2+8*4-7%3
   Pass4: X=2+32-7%3
   Pass5: X=2+32-1
   Pass6: X=34-1
   Pass7: X=33








    */



//    printf("Here I Program only Arithmetic Operator\n another Operator will be next Program\n\n\n");
//
//
//     input two variable by scanf and do +,-,*,/,%
//    int A,B,C;
//
//   printf("Enter tow int number : ");
//   scanf("%d%d",&A,&B);
//
//   C=A+B;
//   printf("Sum = %d\n",C);
//
//   C=A-B;
//   printf("Sub = %d\n",C);
//
//   C=A*B;
//   printf("Mul = %d\n",C);
//
//
//   Note: Shortcut
//   printf("Div = %.2f\n",(float)A/B);
//
//   C = A  % B;
//   printf("Remainder = %d\n",C);



   //End*********************************************


//   // input two variable by scanf and do +,-,*,/,%
//   float X,Y,Z;
//
//   printf("Enter two int number : ");
//   scanf("%f%f",&X,&Y);
//
//   Z=X+Y;
//   printf("Sum = %.0f\n",Z);
//
//   Z=X-Y;
//   printf("Sub = %.0f\n",Z);
//
//   Z=X*Y;
//   printf("Mul = %.0f\n",Z);
//
//   Z=X/Y;
//   printf("Div = %.2f\n",Z);
//
//
//   Z = (int)X  % (int)Y;
//   printf("Remainder = %.0f\n",Z);


   //End*********************************************



//   //Write a Program that takes two integer and display sum and average
//   int num1,sum, num2;
//   float avg;
//
//   printf("Enter two numbers : ");
//   scanf("%d %d",&num1,&num2);
//
//   sum = num1  + num2;
//   printf("The sum is : %d\n",sum);
//
//   avg = (float)sum/2;//Type casting
//   //int and int=int,int and float= float, float and double= double
//   //Thats why I change intSUM to floatSUM. And to change data type of a variable is called TYPE CASTING.
//   printf("The average is = %.2f\n",avg);


   //End*********************************************


   //Math
   float A,B,C,D,E,X,Y,Z,P;
    printf("A= ");
    scanf("%f",&A);

    printf("B= ");
    scanf("%f",&B);

    printf("C= ");
    scanf("%f",&C);

    printf("D= ");
    scanf("%f",&D);

    printf("E= ");
    scanf("%f",&E);


    X=(A+B)-C+(D*E);
    printf("X is = %.2f\n\n",X);

    Y=((A+B)-C)/D;
    printf("Y is = %.2f\n\n",Y);

    Z=((((A-B)+C)/D)-E)-10;
    printf("Z is = %.2f\n\n",Z);

    P=(((((A+B)))));
    printf("P is = %.2f",P);

    //End*********************************************


//    int num1,num2,num3,sum;
//    float avg;
//    printf("Enter 3 numbers : ");
//    scanf("%d%d%d",&num1,&num2,&num3);
//    avg=(num1+num2+num3)/3;
//    printf("Average= %.2f",avg);

    //End*********************************************



    return 0;


}
