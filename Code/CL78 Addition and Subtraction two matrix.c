//Addition(+) and Subtraction(-) between two matrix

#include<stdio.h>
int main()
{
     int i, j, numberOfRows, numberOfCols;//i means row, j means col
     int A[10][10],  B[10][10],  C[10][10];


     printf("Enter the number of rows and cols : ");
     scanf("%d %d",&numberOfRows, &numberOfCols);


    //scanning A matrix
    printf("Enter elements for A matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }




    //scanning B matrix
    printf("\n\nEnter elements for B matrix.\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


    //printing A matrix
    printf("A = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");//Important \t for tab
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }






    //printing B matrix
    printf("\nB = ");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");//Important \t for tab
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    //Adding the matrix(+)
    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];//I use (+) for adding. For minus(-)
        }

    }



    //Printing C Matrix
    printf("\n");
    printf("\A + B = ");
    for(i=0; i<numberOfRows; i++)
    {

        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");//Important \t for tab
    }



//    //Printing C Matrix
//    printf("\n");
//    printf("\A + B =");
//    for(i=0; i<numberOfRows; i++)
//    {
//        printf("\t");//Important \t for tab
//        for(j=0; j<numberOfCols; j++)
//        {
//            printf("%d ",C[i][j]);
//        }
//        printf("\n");
//    }






    return 0;
}
