#include<stdio.h>
int main()
{
    /*
    Assignment Operator          Example         Full meaning
    =                             y=x+5;
    +=                            x+=5;          x=x+5;
    -=                            x-=y;          x=x-y;
    *=                            x*=5;          x=x*5;
    /=                            x/=5;          x=x/5;
    %=                            x%=5;          x=x%5;
    */
    int a=5;
    a+=2;//a=a+2
    printf("%d\n",a);

    int b=10;
    b%=3;//b=b%3
    printf("%d\n",b);

    int c=10,x=3;
    c%=x;//c=c%3
    printf("%d",c);

    return 0;
}
