//break and continue statement
#include<stdio.h>
int main()
{
    //break and continue statement
    int i;
    for(i=1; i<20; i++)
    {
        if(i%3==0)
            continue;//bypass
        /*when first IF is false then "continue statement" does not work and printf work thats time then check second IF. if second if is false then check
        first IF and when first IF is true then continue statement does work so it goes to for loop with increment value. It happen again and again until
        second IF is not ture. when second IF is true then it break and value does not return FOR Loop.
        */
        printf("%d\n",i);
        if(i==10)
            break;//loop terminate
    }

    /*
    1
    2
    4
    5
    7
    8
    10
    */

    return 0;
}
