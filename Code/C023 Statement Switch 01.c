/*
    Control statements: 1)Conditional control statement 2)loop control statement

    Conditional control statement - 1)if-else and 2)switch
    Loop control statement - for, while, do while
    [I only use here Switch not use (if-else)
    */
//(switch keyword: switch, case, break, default)

/*
Following are some interesting facts about switch statement:
1) The expression used in switch must be integral type (int, char and enum). Any other of expression is not allowed.
  For example: float x=1.1 is compiler error
2) The default block can be placed anywhere. The posting of default doesn't matter, it is still executed if no match found.
3) The statements written above cases are never executed After the switch statement, the control transfers to the matching case, the statements written before case are not executed.
*/


#include<stdio.h>
int main()
{
//    //Write a program that read a digit and display its spelling
//    int digit;
//    printf("Enter a digit : ");
//    scanf("%d",&digit);
//
//    switch(digit)
//    {
//    case 0:
//        printf("Zero");
//        break;
//
//    case 1:
//        printf("One");
//        break;
//
//    case 2:
//        printf("Two");
//        break;
//
//    case 3:
//        printf("Three");
//        break;
//
//    case 4:
//        printf("Four");
//        break;
//
//    case 5:
//        printf("Five");
//        break;
//
//    case 6:
//        printf("Six");
//        break;
//
//    case 7:
//        printf("Seven");
//        break;
//
//    case 8:
//        printf("Eight");
//        break;
//
//    case 9:
//        printf("Nine");
//        break;//No need to use [break;] here. Because Its last one.
//
//    default:
//        printf("Not a valid digit\n");
//    }


    //Same code but use shortcut and use default keyword anywhere
    int digit;
    printf("Enter a digit : ");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0: printf("Zero");
        break;

    case 1: printf("One");
        break;

    case 2: printf("Two");
        break;

    case 3: printf("Three");
        break;

    case 4: printf("Four");
        break;

    case 5: printf("Five");
        break;

    case 6: printf("Six");
        break;

    case 7: printf("Seven");
        break;

    case 8: printf("Eight");
        break;

    case 9: printf("Nine");
        break;//No need to use [break;] here. Because Its last one.

    default: printf("Not a valid digit\n");
    }





    return 0;
}
