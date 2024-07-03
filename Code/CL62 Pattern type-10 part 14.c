//Pattern Type- 10



//Pattern-1     //START
/*
Output is:
Enter N = 3
  *
 ***
*****
 ***
  *
*/

#include<stdio.h>
int main()
{
    int n, col, row;
    printf("Enter Number = ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
            //printing spaces
        for(col=1;col<=n-row;col++)
            printf(" ");

            //printing stars
        for(col=1;col<=2*row-1;col++)
            printf("*");

        printf("\n");
    }
    for(row=n-1;row>=1;row--)
    {
            //printing spaces
        for(col=1;col<=n-row;col++)
            printf(" ");

            //printing stars
        for(col=1;col<=2*row-1;col++)
            printf("*");

        printf("\n");
    }

    return 0;
}

//Pattern-1     //END



//Pttern 2,3,4 are same. just change printf and two parts are found in Pattern Type 8 and 9
