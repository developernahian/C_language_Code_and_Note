#include<stdio.h>
int main()
{
    /*
    [(C-0)/(100-0) = (F-32)/(212-32) = (K-273)/(373-273) = (R-492)/(672-492)]
    [C/5 = (F-32)/9 = (K-273)/5 = (R-492)/9]
    */

//    // C to F
//    float C,F;
//    printf("Enter C = ");
//    scanf("%f",&C);
//    F=(C*1.8)+32;
//    printf("%.2f\n",F);

    // F to C
    float F,C;
    printf("Enter F = ");
    scanf("%f",&F);
    C=(F-32)/1.8;
    printf("%.2f\n",C);

    return 0;
}
