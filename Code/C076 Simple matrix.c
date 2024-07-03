//Scan A Matrix and A Matrix then Scan B Matrix and Print B Matrix

#include<stdio.h>
int main()
{
     int i, j;//i means row, j means col
     int A[3][4],  B[3][4];

    //scanning A matrix
    printf("Enter elements for A matrix.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    //printing A matrix
    printf("A = ");
    for(i=0; i<3; i++)
    {
        printf("\t");//Important \t for tab
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }



    //scanning B matrix
    printf("\n\nEnter elements for B matrix.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


    //printing B matrix
    printf("B = ");
    for(i=0; i<3; i++)
    {
        printf("\t");//Important \t for tab
        for(j=0; j<4; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }



    return 0;
}
