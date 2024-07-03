#include<stdio.h>
#include<math.h>//math.h হেডার ফা্ইল না দিলে CodeBlocks সেটা by default ধরে নিয়ে কাজ করে। তবে এটা দিতে হবে।
int main()
{
    /*
    [C- round() function]
    round( ) function in C returns the nearest integer value of the float/double/long double argument passed to this function.
    If decimal value is from ”.1 to .5″, it returns integer value less than the argument. If decimal value is from “.6 to .9″, it returns the integer value greater than the argument.
    ”math.h” header file supports round( ) function in C language. Syntax for round( ) function in C is given below.
    double round (double a);
    float roundf (float a);
    long double roundl (long double a);
    */
   double w1 = 5.49;
   double result1 = round(w1);
   printf("round(%lf) = %lf\n",w1,result1);

   double w2 = 5.5;
   double result2 = round(w2);
   printf("round(%lf) = %lf\n\n",w2,result2);


   /*
   [C trunc() function]
   trunc( ) function in C truncates the decimal value from floating point value and returns integer value.
   ”math.h” header file supports trunc( ) function in C language. Syntax for trunc( ) function in C is given below.
   double trunc (double a);
   float truncf (float a);
   long double truncl (long double a);
   */
   double x1 = 5.89;
   double result3 = trunc(x1);
   printf("trunc(%lf) = %lf\n",x1,result3);

   double x2 = 5.21;
   double result4 = trunc(x2);
   printf("trunc(%lf) = %lf\n\n",x2,result4);


   /*
   [C- ceil() function]
   ceil( ) function in C returns nearest integer value which is greater than or equal to the argument passed to this function.
   ”math.h” header file supports ceil( ) function in C language. Syntax for ceil( ) function in C is given below.
   double ceil (double x);
   */
   double y1 = 5.9;
   double result5 = ceil(y1);
   printf("ceil(%lf) = %lf\n",y1,result5);

   double y2 = 5.3;
   double result6 = ceil(y2);
   printf("ceil(%lf) = %lf\n\n",y2,result6);


   /*
   [C- floor() function]
   floor( ) function in C returns the nearest integer value which is less than or equal to the floating point argument passed to this function.
   ”math.h” header file supports floor( ) function in C language. Syntax for floor( ) function in C is given below.
   double floor ( double x );
   */
   double z1 = -5.9;
   double result7 = floor(z1);
   printf("floor(%lf) = %lf\n",z1,result7);

   double z2 = -5.3;
   double result8 = floor(z2);
   printf("floor(%lf) = %lf\n\n",z2,result8);


   return 0;
}
