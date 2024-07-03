//An enumeration is a user-defined data type that consists of integral constants.
#include<stdio.h>


//Enum declaration
enum days_of_week//days_of_week is tag name
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat //constant int variable
                                //here Sun is 0, Mon is 1, Tue is 2
};

int main()
{
    //variable
    enum days_of_week day1,day2,day3;
    int dif;

    day1=Sun;
    day2=Tue;
    day3=Fri;

    dif=day3-day2; //5-2=3
    printf("day1 = %d\n",day1);
    printf("day2 = %d\n",day2);

    printf("day difference = %d\n",dif);



    getch();
}
