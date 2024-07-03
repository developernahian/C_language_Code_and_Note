//n C programming, a string is a sequence of characters terminated with a null character \0. For example:
/*
How to initialize strings?
You can initialize strings in a number of ways:

char c[] = "abcd";

char c[50] = "abcd";

char c[] = {'a', 'b', 'c', 'd', '\0'};

char c[5] = {'a', 'b', 'c', 'd', '\0'};

here:
c[0]    c[1]    c[2]    c[3]    c[4]
 a       b       c       d       \0

*/




#include<stdio.h>
int main()
{

    char s1[]= "I Am Nahian";//single line

    char s2[]= "I Am Nahian \ iam NAHIAN";//multiple line // I should use here line breaking character (/) for multiple line

//    char s1[7] = {'N', 'A', 'H', 'I', 'A', 'N', '\0'};

//    char s1[] = {'N', 'A', 'H', 'I', 'A', 'N', '\0'};

//   char s1[7];
//   s1[0]='N';
//   s1[1]='A';
//   s1[2]='H';
//   s1[3]='I';
//   s1[4]='A';
//   s1[5]='N';
//   s1[6]='\0';


       printf("s1 is : %s",s1);
       printf("\n");
       printf("s1 is : %s",s2);




    return 0;
}
