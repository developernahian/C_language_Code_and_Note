//1 * 2 * 3 * ...... n =?
#include<stdio.h>
int main()
{
//    int i,n,result=1;
//    printf("Enter n : ");
//    scanf("%d",&n);
//
//    for(i=1; i<=n; i++)
//    {
//        result=result*i;
//    }
//    printf("Result = %d\n",result);





//    //1^2 * 2^2 * 3^2 * ...... n^2 =?
//    int i,n,result=1;
//    printf("Enter n : ");
//    scanf("%d",&n);
//
//    for(i=1; i<=n; i++)
//    {
//        result=result * i*i;
//    }
//    printf("Result = %d\n",result);




    //1^3 * 2^3 * 3^3 * ...... n^3 =?
    int i,n,result=1;
    printf("Enter n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        result=result * i*i*i;
    }
    printf("Result = %d\n",result);

    return 0;
}
