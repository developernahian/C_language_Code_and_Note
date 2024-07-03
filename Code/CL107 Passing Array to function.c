#include<stdio.h>

void display(int x[]) //array receive
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d ",x[i]);//here use space for print space
    }
}

int main()
{
    int num[]={10,20,30,40,50};
    int i;

    display(num);//function call and no need to use []

    return 0;
}
