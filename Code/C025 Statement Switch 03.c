
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter Two integer : ");
    scanf("%d %d",&a,&b);

    switch(a>b)
    {
       case 1:

           printf("Large number is %d\n",a);
           printf("Small number is %d\n",b);
           break;

           case 0: printf("Large number is %d \nSmallest number is %d",b,a);

    }




    return 0;
}

