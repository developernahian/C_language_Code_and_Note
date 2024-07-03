#include<stdio.h>
int main()
{
     int i, j;//i means row, j means col
//    int A[3][4]; //Data_type  Array_name[row][col]
//                 //Number of elements= rows*columns=>3*4=>12
//    //Initializing 1st row
//    A[0][0] = 5;
//    A[0][1] = 6;
//    A[0][2] = 7;
//    A[0][3] = 8;
//    //Initializing 2nd row
//    A[1][0] = 15;
//    A[1][1] = 16;
//    A[1][2] = 17;
//    A[1][3] = 18;
//    //Initializing 3rd row
//    A[2][0] = 25;
//    A[2][1] = 26;
//    A[2][2] = 27;
//    A[2][3] = 28;



//    //or
//    int A[3][4] = {
//                    {5,6,7,8},//must use comma
//                    {15,16,17,18},//must use comma
//                    {25,26,27,28}
//                  };



    //scanning
    int A[3][4];
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

//    //print first row(col 1,2,3,4)
//    printf("%d  ",A[0][0]);
//    printf("%d  ",A[0][1]);
//    printf("%d  ",A[0][2]);
//    printf("%d  ",A[0][3]);
//    printf("\n");
//    //print second row(col 1,2,3,4)
//    printf("%d ",A[1][0]);
//    printf("%d ",A[1][1]);
//    printf("%d ",A[1][2]);
//    printf("%d ",A[1][3]);
//    printf("\n");
//    //print third row(col 1,2,3,4)
//    printf("%d ",A[2][0]);
//    printf("%d ",A[2][1]);
//    printf("%d ",A[2][2]);
//    printf("%d ",A[2][3]);



    //print
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }



    return 0;
}
