//Unary operator
#include<stdio.h>
int main()
{
    /*
    Unary Operator           Meaning
     1)   +                  Unary plus
     2)   -                  Unary minus
     3)   ++                 Increment
     4)   --                 Decrement

     Increment and Decrement Operator:
     Increment:1) Prefix Increment: ++a
               2) Postfix Increment: a++
     Decrement:1) Prefix Increment: --a
               2) Postfix Decrement: a--

    */


//    //1) Unary plus (+) Operator
//    //This operator does not make any effect on the operand value, it just returns operands value.
//    int x1=-10;
//    int result1 = +x1;//(-+=-)(-10)
//    printf("Unary Plus %d\n",result1);
//
//
//    //2) Unary minus (-) Operator
//    //This operator makes the value negative. It makes positive value to negative and negative value to positive.
//    int x2=10;
//    int result2 = -x2;//-10
//    printf("%Unary Minus %d\n\n",result2);


    //3) Increment (++) Operator
    //This operator increases the value by 1; there are two varieties of increment operator 1) pre-increment operator and 2) post-increment operator.
    //++x; increments x by one - before it is used
    //x++; increments x by one - after it is used
    int x1=10;
    int y1=++x1;//x1=11 so y1=11
    printf("x1 = %d\n",x1);
    printf("y1 = %d\n\n",y1);


    int x2=10;
    int y2=x2++;//y2=10 so x2=11
    printf("x2 = %d\n",x2);
    printf("y2 = %d\n",y2);



//    //4) Decrement (--) Operator
//    //This operator decreases the value by 1; there are two varieties of decrement operator 1) pre-decrement operator and 2) post-decrement operator.
//    int x1=10;
//    int y1=x1--;//y1=10 so x1=9
//    printf("x1 = %d\n",x1);
//    printf("y1 = %d\n\n",y1);
//
//    int x2=10;
//    int y2=--x2;//x2=9 so y2=9
//    printf("x2 = %d\n",x2);
//    printf("y2 = %d\n",y2);

//    int x=10;
//    printf("%d\n",x++);//x=10
//    printf("%d\n",x);//x=11
//    printf("%d\n",++x);//x=12
//    printf("%d\n",x);//x=12
//    printf("%d\n",x--);//x=12
//    printf("%d\n",--x);//x=10 see this line


    return 0;
}
