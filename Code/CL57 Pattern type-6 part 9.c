//Pattern Type-6



//Pattern-Entry     //START
/*
Output is:
Enter N = 3
  1
 12
123
123
 12
  1
*/
#include<stdio.h>
int main()
{
   int row,col,n;
   printf("Enter N = ");
   scanf("%d",&n);

   for(row=1; row<=n; row++)//change here
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
   for(row=n; row>=1; row--)//change here
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
//Pattern-Entry     //END




////Pattern-1     //START
///*
//Output is:
//Enter N = 3
//  1
// 12
//123
// 12
//  1
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%d",col);
//       }
//       printf("\n");
//   }
//   for(row=n-1; row>=1; row--)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%d",col);
//       }
//       printf("\n");
//   }
//
//    return 0;
//}
////Pattern-1     //END




////Pattern-2     //START
///*
//Output is:
//Enter N = 3
//  1
// 12
//123
// 12
//  1
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%d",row);
//       }
//       printf("\n");
//   }
//   for(row=n-1; row>=1; row--)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%d",row);
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
//Enter N = 3
//  A
// AB
//ABC
// AB
//  A
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%c",col+64);
//       }
//       printf("\n");
//   }
//   for(row=n-1; row>=1; row--)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%c",col+64);
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
//Enter N = 3
//  A
// BB
//CCC
// BB
//  A
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%c",row+64);
//       }
//       printf("\n");
//   }
//   for(row=n-1; row>=1; row--)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("%c",row+64);
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
//Enter N = 3
//  A
// AB
//ABC
// AB
//  A
//*/
//#include<stdio.h>
//int main()
//{
//   int row,col,n;
//   printf("Enter N = ");
//   scanf("%d",&n);
//
//   for(row=1; row<=n; row++)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("*");
//       }
//       printf("\n");
//   }
//   for(row=n-1; row>=1; row--)//change here
//   {
//       //printing space
//       for(col=1; col<=n-row; col++)
//       {
//           printf(" ");
//       }
//       //printing number
//       for(col=1; col<=row; col++)
//       {
//           printf("*");
//       }
//       printf("\n");
//   }
//
//    return 0;
//}
////Pattern-5     //END

