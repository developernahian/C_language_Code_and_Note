//Pattern Type-3



//Pattern-1     //START
/*
Output is:
Enter N = 5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5
1 2 3 4
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

    for(row=1; row<=n;row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    for(row=n; row>=1;row--)//change here
    {
        for(col=1; col<=row; col++)//change here
        {
            printf("%d ",col);
        }
        printf("\n");
    }

    return 0;
}
//Pattern-1     //END





////Pattern-2     //START
///*
//Output:
//Enter N = 5
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
//1 2 3 4
//1 2 3
//1 2
//1
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n;row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",col);
//        }
//        printf("\n");
//    }
//    for(row=n-1; row>=1;row--)//change here
//    {
//        for(col=1; col<=row; col++)//change here
//        {
//            printf("%d ",col);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
////Pattern-2     //END




////Pattern-3     //START
///*
//Output is:
//Enter N = 5
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5
//4 4 4 4
//3 3 3
//2 2
//1
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n;row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%d ",row);//change here
//        }
//        printf("\n");
//    }
//    for(row=n-1; row>=1;row--)//change here
//    {
//        for(col=1; col<=row; col++)//change here
//        {
//            printf("%d ",row);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
////Pattern-3     //END





////Pattern-4     //START
///*
//Output is:
//Enter N = 3
//A
//A B
//A B C
//A B
//A
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n;row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%c ",col+64);//change here
//        }
//        printf("\n");
//    }
//    for(row=n-1; row>=1;row--)//change here
//    {
//        for(col=1; col<=row; col++)//change here
//        {
//            printf("%c ",col+64);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
////Pattern-4     //END





////Pattern-5     //START
///*
//Output is:
//Enter N = 3
//A
//B B
//C C C
//B B
//A
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n;row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("%c ",row+64);//change here
//        }
//        printf("\n");
//    }
//    for(row=n-1; row>=1;row--)//change here
//    {
//        for(col=1; col<=row; col++)//change here
//        {
//            printf("%c ",row+64);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
////Pattern-S     //END





////Pattern-6     //START
///*
//Output is:
//Enter N = 3
//*
//* *
//* * *
//* *
//*
//*/
//#include<stdio.h>
//int main()
//{
//    int n,row,col;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1; row<=n;row++)
//    {
//        for(col=1; col<=row; col++)
//        {
//            printf("* ");//change here
//        }
//        printf("\n");
//    }
//    for(row=n-1; row>=1;row--)//change here
//    {
//        for(col=1; col<=row; col++)//change here
//        {
//            printf("* ");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
////Pattern-6     //END



