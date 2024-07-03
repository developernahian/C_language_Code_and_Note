//Pattern type-1



//Pattern-1     //START
/*
    Output is:
    Enter N = 4
    1
    1 2
    1 2 3
    1 2 3 4
    */
/*
N means number of row(anuVumik shari)
and amount of  col. is equal of amount of row
here print col value.
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);//This program print only row value
        }
        printf("\n");
    }
    return 0;
}
//Pattern-1     //END







////Pattern-2     //START
///*
//    Output is:
//    Enter N = 4
//    1
//    2 2
//    3 3 3
//    4 4 4 4
//    */
//*/
///*
//N means number of row(anuVumik shari)
//and amount of  col. is equal of amount of row
//here print row value.
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n; row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",row);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
////Pattern-2     //End




////Pattern-3     //START
///*
//Output:
//Enter N = 4
//1
//1 0
//1 0 1
//1 0 1 0
//*/
//#include<stdio.h>
//int main()
//{
//int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n; row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",col%2);//Only change here
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-3     //END





////Pattern-4     //START
///*
//Output:
//Enter N = 5
//1
//0 0
//1 1 1
//0 0 0 0
//1 1 1 1 1
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n; row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",row%2);//Only change here
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-4     //END



////Pattern-5     //START
///*
//Output:
//Enter N = 3
//A
//A B
//A B C
//
//Or
//Enter N = 3
//a
//a b
//a b c
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n; row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%c ",col+64);//Only change here and also %d to %c
//            //printf("%c ",col+96);//For small latter
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-5     //END



////Pattern-6     //START
///*
//Output:
//Enter N = 3
//A
//B B
//C C C
//
//Or
//Enter N = 3
//a
//b b
//c c c
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n; row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%c ",row+64);//Only change here and also %d to %c
//            //printf("%c ",row+96);//For small latter
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-6     //END




////Pattern-7 and 8     //START
///*
//7 Output:       8 Output:
//Enter N = 3     Enter N = 3
//*               #
//* *             # #
//* * *           # # #
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n; row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("* ");
//            //printf("# ");
//
//        }
//        printf("\n");
//    }
//    //Pattern-7 and 8     //END
//
//
//
//
//    return 0;
//}











