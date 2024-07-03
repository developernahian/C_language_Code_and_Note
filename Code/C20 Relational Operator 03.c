#include<stdio.h>
int main()
{
    //1)result
    float marks;
    printf("Enter your marks : ");
    scanf("%f",&marks);

    if(marks>=80)
        printf("A+");

    else if(marks>=70)
        printf("A");

    else if(marks>=60)
        printf("A-");

    else if(marks>=50)
        printf("B");

    else if(marks>=40)
        printf("C");

    else if(marks>=33)
        printf("D");
    else//else if(marks<33)
        printf("Fail");



        //Positive Negative
        int num;
        printf("\n\nEnter a number: ");
        scanf("%d",&num);
        if(num>0)
            printf("Positive\n");
        else if(num<0)
            printf("Negative\n");
        else
            printf("Zero\n");



    return 0;
}
