// Enter numbers and display their sum and average
// And user can decide how many number want to display


#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;

    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Enter your numbers : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<n; i++)
    {
        sum= sum + a[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The average is : %.2f\n",(float)sum/n);


    return 0;
}


