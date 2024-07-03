// Enter 5 numbers and show their sum and average


#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    printf("Enter 5 numbers : ");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }

//    //or
//    int a[5],i,sum=0;
//    printf("Enter 5 numbers : ");
//    scanf("%d %d %d %d %d",&a[0], &a[1], &a[2], &a[3], &a[4]);


//    //or
//    int a[5],sum=0,i;
//    printf("Enter 5 numbers : ");
//    scanf("%d",&a[0]);
//    scanf("%d",&a[1]);
//    scanf("%d",&a[2]);
//    scanf("%d",&a[3]);
//    scanf("%d",&a[4]);







    for(i=0; i<5; i++)
    {
        sum= sum + a[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average is : %.2f\n",(float)sum/5);


    return 0;
}

