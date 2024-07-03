//Pattern Type- 8 (Pyramid-1)



////Pattern-1     //START
///*
//Output is:
//Enter N = 3
//  *
// ***      without space between two *
//*****
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//            //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf(" ");    //without space between two*
//
//            //printing stars
//        for(col=1;col<=2*row-1;col++)
//            printf("*");    //without space between two *
//
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-1     //END








////Pattern-1.1     //START
///*
//Output is:
//Enter N = 3
//    *
//  * * *    with space between two *
//* * * * *
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//            //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf("  ");   //with space between two *
//
//            //printing stars
//        for(col=1;col<=2*row-1;col++)
//            printf("* ");   //with space between two n*
//
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-1.1     //END





////Pattern-2.1     //START
///*
//Output is:
//Enter N = 3
//  1
// 222   without space between number
//33333
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//            //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf(" ");//without space between two numbers
//
//            //printing numbers
//        for(col=1;col<=2*row-1;col++)
//            printf("%d",row);//without space between two numbers
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-2.1     //END




////Pattern-2.2     //START
///*
//Output is:
//Enter N = 3
//    1
//  2 2 2   with space between number
//3 3 3 3 3
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//        //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf("  ");//with space between two numbers
//
//            //printing numbers
//        for(col=1;col<=2*row-1;col++)
//            printf("%d ",row);//with space between two numbers
//        printf("\n");
//    }
//
//    return 0;
//}
//
////Pattern-2.2     //END





////Pattern-3     //START
///*
//Output is:
//Enter N = 3
//  1
// 123   without space between two numbers
//12345
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
//    {
//        //printing spaces
//        for(col=1;col<=n-row;col++)
//            printf(" ");//without space between two numbers
//
//            //printing number
//        for(col=1;col<=2*row-1;col++)
//            printf("%d",col);//without space between two numbers
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
//  A
// ABC
//ABCDE
//*/
//
//#include<stdio.h>
//int main()
//{
//    int n, col, row;
//    printf("Enter Number = ");
//    scanf("%d",&n);
//
//    for(row=1;row<=n;row++)
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
////Pattern-4     //END





//Pattern-5     //START
/*
Output is:
Enter N = 3
  A
 BBB
CCCCC
*/

#include<stdio.h>
int main()
{
    int n, col, row;
    printf("Enter Number = ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        //printing spaces
        for(col=1;col<=n-row;col++)
            printf(" ");

            //printing alphabet
        for(col=1;col<=2*row-1;col++)
            printf("%c",row+64);
        printf("\n");
    }

    return 0;
}

//Pattern-5     //END



