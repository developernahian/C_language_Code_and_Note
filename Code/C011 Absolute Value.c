#include<stdio.h>
#include<math.h>//math.h হেডার ফা্ইল না দিলে CodeBlocks সেটা by default ধরে নিয়ে কাজ করে। তবে এটা দিতে হবে।
int main()
{
    /*
    Math, Absolute value, সংখ্যার পরম মান নির্নয়
    I use here a library function
    abs is a library function of Absolute value
    */
   //int result=abs(1.25);
   //printf("%d",result);


//   //Absolute value by scanf
//   int A,ans;
//   printf("Please Enter A Integer Number :");
//   scanf("%d",&A);
//   ans=abs(A);
//   printf("Answer is : %d",ans);

   //Calculate Age by using absolute value
   //IMPORTANT
   int year1,year2,age;
   printf("Enter a year : ");
   scanf("\n%d",&year1);
   printf("Enter another year : ");
   scanf("\n%d",&year2);
   age=year1-year2;
   age=abs(age);
   printf("Age is : %d years old",age);




    return 0;
}
