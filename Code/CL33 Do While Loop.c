#include<stdio.h>
int main()
{
    //(1)write a program that print 1 to 10
    printf("1st\n\n");
    int i=1;//initialization
    do
    {
        printf("%d\n",i);
        i++;//increment
    }while(i<=10);//condition
    //while(i<=10);//condition [we can use while here just like example (2)]



    //(2)write a program that print 1 to 10
    printf("2nd\n\n");
    int x=11;
    do
    {
        printf("%d\n",x);
        x++;
    }
    while(x<=10);

    //Output 11
    //Note first work do then it check while so 11>10 but 11 is output then while condition is false so its stop


    //write a program that print even number between 1 to 50
    printf("3rd\n\n");
    int y=2;
    do
    {
        printf("%d\n",y);
        y=y+2;
    }
    while(y<=50);

    return 0;
}
