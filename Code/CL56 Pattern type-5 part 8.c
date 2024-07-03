//Pattern Type-5



//Pattern-1     //START
/*
Output is:
Enter N = 3
123
 12
  1
*/
#include<stdio.h>
int main()
{
    int row , col, n;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        //printing space
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        //printing number
        for(col=1; col<=row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}
//Pattern-1     //END




////Pattern-2     //START
///*
//Output is:
//Enter N = 3
//333
// 22
//  1
//*/
//#include<stdio.h>
//int main()
//{
//    int row , col, n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=n; row>=1; row--)
//    {
//        //printing space
//        for(col=1; col<=n-row; col++)
//        {
//            printf(" ");
//        }
//        //printing number
//        for(col=1; col<=row; col++)
//        {
//            printf("%d",row);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-2     //END




////Pattern-3     //START
///*
//Output is:
//Enter N = 3
//101
// 10
//  1
//*/
//#include<stdio.h>
//int main()
//{
//    int row , col, n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=n; row>=1; row--)
//    {
//        //printing space
//        for(col=1; col<=n-row; col++)
//        {
//            printf(" ");
//        }
//        //printing number
//        for(col=1; col<=row; col++)
//        {
//            printf("%d",col%2);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-3     //END





////Pattern-4     //START
///*
//Output is:
//Enter N = 3
//111
// 00
//  1
//*/
//#include<stdio.h>
//int main()
//{
//    int row , col, n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=n; row>=1; row--)
//    {
//        //printing space
//        for(col=1; col<=n-row; col++)
//        {
//            printf(" ");
//        }
//        //printing number
//        for(col=1; col<=row; col++)
//        {
//            printf("%d",row%2);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-4     //END





////Pattern-5     //START
///*
//Output is:
//Enter N = 3
//ABC
// AB
//  A
//*/
//#include<stdio.h>
//int main()
//{
//    int row , col, n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=n; row>=1; row--)
//    {
//        //printing space
//        for(col=1; col<=n-row; col++)
//        {
//            printf(" ");
//        }
//        //printing number
//        for(col=1; col<=row; col++)
//        {
//            printf("%c",col+64);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-5     //END




////Pattern-6     //START
///*
//Output is:
//Enter N = 3
//CCC
// BB
//  A
//*/
//#include<stdio.h>
//int main()
//{
//    int row , col, n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=n; row>=1; row--)
//    {
//        //printing space
//        for(col=1; col<=n-row; col++)
//        {
//            printf(" ");
//        }
//        //printing number
//        for(col=1; col<=row; col++)
//        {
//            printf("%c",row+64);
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-6     //END






////Pattern-7 and 8     //START
///*
//Output is:      Output is:
//Enter N = 3     Enter N = 3
//***             ###
// **              ##
//  *               #
//*/
//#include<stdio.h>
//int main()
//{
//    int row , col, n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=n; row>=1; row--)
//    {
//        //printing space
//        for(col=1; col<=n-row; col++)
//        {
//            printf(" ");
//        }
//        //printing number
//        for(col=1; col<=row; col++)
//        {
//            printf("*");
//            //printf("#");
//        }
//        printf("\n");
//    }
//    return 0;
//}
////Pattern-7 and 8     //END
