////Pattern Type- 9





////Pattern-1.1     //START
///*
//Output is:
//Enter N = 3
//*****
// ***   without space between two stars
//  *
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=n;row>=1;row--)
//    {
//        //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf(" ");    //without space between two stars
//
//            //printing stars
//        for(col=1;col<=2*row-1;col++)
//            printf("*");    //without space between two stars
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-1.1     //END






//Pattern-1.2     //START
/*
Output is:
Enter N = 3
* * * * *
  * * *    with space between tow stars
    *
*/

#include<stdio.h>
int main()
{
    int n, col, row;
    printf("Enter Number = ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        //printing spaces
        for(col=1;col<=n-row;col++)
            printf("  ");   //with space between two stars

            //printing stars
        for(col=1;col<=2*row-1;col++)
            printf("* ");   //with space between two stars
        printf("\n");
    }

    return 0;
}

//Pattern-1.2     //END




////Pattern-2     //START
///*
//Output is:
//Enter N = 3
//33333
// 222
//  1
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=n;row>=1;row--)
//    {
//            //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf(" ");
//
//            //printing numbers
//        for(col=1;col<=2*row-1;col++)
//            printf("%d",row);
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-2     //END










////Pattern-3     //START
///*
//Output is:
//Enter N = 3
//12345
// 222
//  1
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=n;row>=1;row--)
//    {
//        //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf(" ");
//
//            //printing number
//        for(col=1;col<=2*row-1;col++)
//            printf("%d",col);
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-3     //END






////Pattern-4     //START
///*
//Output is:
//Enter N = 3
//CCCCC
// BBB
//  A
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=n;row>=1;row--)
//    {
//        //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf(" ");
//
//            //printing alphabet
//        for(col=1;col<=2*row-1;col++)
//            printf("%c",row+64);
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-4     //END







////Pattern-5     //START
///*
//Output is:
//Enter N = 3
//ABCDE
//
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=n;row>=1;row--)
//    {
//        //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf(" ");
//
//            //printing alphabet
//        for(col=1;col<=2*row-1;col++)
//            printf("%c",col+64);
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-5     //END





