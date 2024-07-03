#include<stdio.h>

int maximum(int x[]) //array receive
{
    int i;
    int max= x[0];
    for(i=0; i<6; i++)
    {
        if(max < x[i])
            max = x[i];
    }
    return max;
}

int main()
{
    int num[]={10,20,30,40,50,-5};

    int maximumValue = maximum(num);//function call and no need to use []
    printf("Maximum = %d\n", maximumValue);

    return 0;
}

