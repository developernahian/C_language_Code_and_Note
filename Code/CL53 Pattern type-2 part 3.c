//Pattern type-2



//Pattern-1     //START
/*
    Output is:
    Enter N = 3
    1 2 3
    1 2
    1
    */
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}
//Pattern-1     //START







////Pattern-2     //START
///*
//    Output is:
//    Enter N = 3
//    3 3 3
//    2 2
//    1
//    */
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//    for(row=n; row>=1; row--)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",row);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
////Pattern-2     //END






////Pattern-3     //START
///*
//    Output is:
//    Enter N = 3
//    1 0 1
//    1 0
//    1
//    */
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//    for(row=n; row>=1; row--)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",col%2);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
////Pattern-3     //END






////Pattern-4     //START
///*
//    Output is:
//    Enter N = 3
//    1 1 1
//    0 0
//    1
//    */
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//    for(row=n; row>=1; row--)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",row%2);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
////Pattern-4     //END





////Pattern-5     //START
///*
//    Output is:
//    Enter N = 3
//    A B C
//    A B
//    A
//    */
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//    for(row=n; row>=1; row--)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%c ",col+64);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
////Pattern-5     //END





////Pattern-6     //START
///*
//    Output is:
//    Enter N = 3
//    C C C
//    B B
//    A
//    */
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//    for(row=n; row>=1; row--)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%c ",row+64);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
////Pattern-6     //END






////Pattern-7 and 8     //START
///*
//    Output is:      Output is:
//    Enter N = 3     Enter N = 3
//    * * *           # # #
//    * *             # #
//    *               #
//    */
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//    for(row=n; row>=1; row--)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("* ");
//            //printf("# ");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}



