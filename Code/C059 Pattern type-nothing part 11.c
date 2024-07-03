//Pattern Type- nothing



//Pattern-1     //START
/*
Output is:
Enter N = 5
1
2 4
3 6 9
4 8 12 14
5 10 15 20 25
*/
#include<stdio.h>
int main()
{
    int col, row, n;
    printf("Enter N= ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col*row);
        }
        printf("\n");
    }
    return 0;
}

//Pattern-1     //END
