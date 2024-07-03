//Sum of diagonal elements of a matrix
/*
    এখানে প্রক্রিয়াটি একটি ম্যাট্রিক্সের উপাদানের যোগফলের সমান, কেবলমাত্র একটি
    শর্ত যুক্ত করা দরকার যা হ'ল আমরা ম্যাট্রিক্সের কেবল সেই উপাদানগুলিকে যুক্ত করি যার
     জন্য সারি সংখ্যা এবং কলাম নম্বর একই, যেমন প্রথম সারির এবং 1 ম কলাম, ২ য় সারি এবং ২ য় কলাম এবং আরও (i == j)।


     C program to find the sum of diagonal elements of a square matrix:

        This C program is to find the sum of diagonal elements of a square matrix.For example, for a 2 x 2 matrix, the
        sum of diagonal elements of the matrix {1,2,3,4} will be equal to 5.

        1  2
        3  4

        Sum = 1+4 = 5

Logic:
Here the procedure is almost same as the sum of elements of a matrix, only one condition needs
 to be added which is, we add only those elements of the matrix for which row number and column number
  is same, like 1st row and 1st column, 2nd row and 2nd column and so on(i==j).
*/

#include<stdio.h>
int main()
{
    int A[3][3],i,j,row,col,sum=0;

    //getting the elements for the matrix
    printf("\nEnter the elements for the matrix.\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    //printing the matrix
    printf("\nEntered Matrix\n");
    for(i=0;i<3; i++)
    {
        for(j=0;j<3; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }



    //sum of diagonal elements
    printf("\nDiagonal elements : ");
    for(i=0;i<3; i++)
    {
        for(j=0;j<3; j++)
        {
            if(i==j)
            {
                printf("%d ",A[i][j]);
                sum= sum + A[i][j];
            }

        }
    }


    printf("\n\nSum of diagonal elements = %d\n\n\n",sum);



    return 0;
}












