//Pattern Type-7



//Pattern-1     //START
/*
Output is:
Enter N = 5
*****
*****
*****
*****
*****
*/
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter N = ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1; col<=n; col++)//change here
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//Pattern-1     //END





////Pattern-2     //START
///*
//Output is:
//Enter N = 5
//11111
//22222
//33333
//44444
//55555
//*/
//#include<stdio.h>
//int main()
//{
//    int row,col,n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//        for(col=1; col<=n; col++)//change here
//        {
//            printf("%d",row);
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
//12345
//12345
//12345
//12345
//12345
//*/
//#include<stdio.h>
//int main()
//{
//    int row,col,n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//        for(col=1; col<=n; col++)//change here
//        {
//            printf("%d",col);
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
//Enter N = 5
//AAAAA
//BBBBB
//CCCCC
//DDDDD
//EEEEE
//*/
//#include<stdio.h>
//int main()
//{
//    int row,col,n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//        for(col=1; col<=n; col++)//change here
//        {
//            printf("%c",row+64);
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
//Enter N = 5
//ABCDE
//ABCDE
//ABCDE
//ABCDE
//ABCDE
//*/
//#include<stdio.h>
//int main()
//{
//    int row,col,n;
//    printf("Enter N = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//        for(col=1; col<=n; col++)//change here
//        {
//            printf("%c",col+64);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
////Pattern-5     //END

