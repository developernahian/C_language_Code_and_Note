#include<stdio.h>
int main()
{
//    // 1) Write a program that an integer and print that number
//    int num;
//    printf("Please enter an integer =");
//    scanf("%d",&num);
//    printf("\nYou have pressed = %d\n\n",num);
//
//
//
//    // 2) Write a program that input two integer and print them
//    int A,B;
//    printf("Please enter first integer:");
//    scanf("%d",&A);
//    printf("Please enter second integer:");
//    scanf("%d",&B);
//    printf("Numbers are: %d, %d",A,B);


//    // 3) This is second problem but I use here 1printf and 1scanf for take integer
//    int X;
//    float Y,Z;
//    printf("Enter a integers and two float number:");
//    scanf("%d%f%f",&X,&Y,&Z);
//    printf("Numbers are : %d, %f, %.3f",X,Y,Z);
//
//    int Num;
//    printf("\nPlease enter an integer =");
//    scanf("%d",&Num);
//    printf("\nYou have pressed = %d\n\n",Num);


    //Type casting
    int run,bowl;
    float SR;

    printf("Enter Run: ");
    scanf("%d",&run);
    printf("Enter Bowl: ");
    scanf("%d",&bowl);

    //SR=(run/(float)bowl)*100;
    SR=run/(float)bowl*100;
    //SR=(float)run/bowl*100;


    printf("SR is : %.3f",SR);


    return 0;
}
