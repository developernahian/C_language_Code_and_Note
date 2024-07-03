#include<stdio.h>
int main()
{

//    //Conversion from lowercase to uppercase without using library function and using ASCII value
//    // a=97, A=65, a97-A65=32
//    char lower;
//    printf("Enter a lowercase letter : ");
//    scanf("%c",&lower);
//    printf("The uppercase letter is : %c",lower-32);//97-65=32



//    //Conversion from uppercase to lowercase without using library function and using ASCII value
//    //a=97, A=65, a97-A65=32
//    char upper;
//    printf("Enter a uppercase letter : ");
//    scanf("%c",&upper);
//    printf("The lowercase is : %c",upper+32);


//    //Conversion from lowercase to uppercase using library function
//    char lower,upper;
//    printf("Enter any lowercase letter : " );
//    scanf("%c",&lower);
//    upper = toupper(lower);
//    printf("Uppercase letter = %c",upper);


    //Conversion from uppercase to lowercase using library function
    char upper,  lower;
    printf("Enter any Uppercase letter : ");
    scanf("%c",&upper);
    lower = tolower(upper);
    printf("Lowercase letter = %c",lower);



//    //Find ASCII Value of a Character
//    char c;
//    printf("Enter a Character : ");
//    scanf("%c",&c);
//    printf("The ASCII value is : %d",c);


//    //Find a Character of ASCII value
//    int n;
//    printf("Enter any ASCI value : ");
//    scanf("%d",&n);
//    printf("The ASCI character is : %c",n);



//    //Find the size of int, float, double, char data type
//    // I cant understand this program
//    int i;
//    float f;
//    double d;
//    char c;
//
//    printf("Size of int = %d bytes\n",sizeof(i));
//    printf("Size of float = %d bytes\n",sizeof(f));
//    printf("Size of double = %d bytes\n",sizeof(d));
//    printf("Size of char = %d bytes\n",sizeof(c));


    return 0;
}
