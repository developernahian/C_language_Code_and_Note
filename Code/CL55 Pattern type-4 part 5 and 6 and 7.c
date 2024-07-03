//Pattern Type-4



//Pattern-1     //START
/*
Output is:
Enter N = 4
   1
  12
 123
1234
*/
#include<stdio.h>
int main()
{
   int row,col,n;
   printf("Enter N = ");
   scanf("%d",&n);

   for(row=1; row<=n; row++)
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
//Enter N = 4
//   1
//  22
// 333
//4444
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%d",row);//change here
//       }
//       printf("\n");
//   }
//
//    return 0;
//}
////Pattern-2     //END




////Pattern-3     //START
///*
//Output is:
//Enter N = 4
//   1
//  10
// 101
//1010
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%d",col%2);//change here
//       }
//       printf("\n");
//   }
//
//    return 0;
//}
////Pattern-3     //END





////Pattern-4     //START
///*
//Output is:
//Enter N = 4
//   1
//  00
// 111
//0000
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%d",row%2);//change here
//       }
//       printf("\n");
//   }
//
//    return 0;
//}
////Pattern-4     //END





////Pattern-5     //START
///*
//Output is:
//Enter N = 4
//   A
//  AB
// ABC
//ABCD
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%c",col+64);//change here
//       }
//       printf("\n");
//   }
//
//    return 0;
//}
////Pattern-5     //END





////Pattern-6     //START
///*
//Output is:
//Enter N = 4
//   A
//  BB
// CCC
//DDDD
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%c",row+64);//change here
//       }
//       printf("\n");
//   }
//
//    return 0;
//}
////Pattern-6     //END




////Pattern-7 and 8     //START
///*
//Output is:          Output is:
//Enter N = 4         Enter N = 4
//   *                   #
//  **                  ##
// ***                 ###
//****                ####
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("*");//change here
//           //printf("#");//change here
//       }
//       printf("\n");
//   }
//
//    return 0;
//}
////Pattern-7 and 8     //END




