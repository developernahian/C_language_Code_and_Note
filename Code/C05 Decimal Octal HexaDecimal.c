#include<stdio.h>
int main()
{
    //[Here is no Format specifier for Convert Binary]
    /*
    Decimal :     (0,1,2,3,4,5,6,7,8,9)
    Octal   :     (0,1,2,3,4,5,6,7)
    Hexa-Decimal : (0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F)
    Binary       : (1,2)

    Decimal  :  %d
    Octal    :  %o
    Hexa-Decimal: %x
    */

//    //Decimal to Octal
//    int number;
//    printf("Decimal number = ");
//    scanf("%d",&number);
//    printf("Octal number = %o",number);

//    //Octal to Decimal
//    int number;
//    printf("Octal number = ");
//    scanf("%o",&number);
//    printf("decimal number = %d",number);

//    //Decimal to Hexa-Decimal
//    int number;
//    printf("Decimal number = ");
//    scanf("%d",&number);
//    printf("Hexa-Decimal = %x",number);


    //Hexa-Decimal to Decimal
    int number;
    printf("Hexa-Decimal number = ");
    scanf("%x",&number);
    printf("Decimal number = %d",number);

    return 0;
}
