#include<stdio.h>
#include<math.h>//math.h হেডার ফা্ইল না দিলে CodeBlocks সেটা by default ধরে নিয়ে কাজ করে। তবে এটা দিতে হবে।
int main()
{
    //এখানে অসঙ্গায়িত মানগুলো ভুল ডিজিট বা অনেক বড় মান হিসেবে প্রদর্শন করে
   double degree;
   printf("Enter your angle value in degree : ");
   scanf("%lf",&degree);
   double radian = degree * (M_PI/180);
   printf("\nsin value is %lf \n",sin(radian));
   printf("cos value is %lf \n",cos(radian));
   printf("tan value is %lf \n\n",tan(radian));
   printf("cosec value is %lf \n",1/sin(radian));
   printf("sec value is %lf \n",1/cos(radian));
   printf("cot value is %lf \n",1/tan(radian));
   return 0;


}

