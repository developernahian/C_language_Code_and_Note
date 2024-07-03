//Floyd's Triangle

/*Floyd's triangle is: 1) It is a right angled triangular array of natural number
                       2) It is a defined by filling the rows of the triangle with
                          consecutive numbers, starting with the number one in the
                          top left corner
*/

#include<stdio.h>
int main()
{
    int row, col, n,count=0;
    printf("Enter N= ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",++count);
        }
        printf("\n");
    }
    return 0;
}
