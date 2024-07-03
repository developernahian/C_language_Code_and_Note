/*We use some Backslash Character in the C Program which works as output.
Usually we use a character after the Backslash (\)
Character Escape Sequence         Meaning
/a                             (Alert) Bell
/b                             BackSpace
/f                             Form Feed
/n                             New Line
/r                             Carrige Return
/t                             Horizontal Tab
/0                             Null Character
/'                             Single Quote
/"                             Double Quote
//                             Backslash
/?                             Questionmark

*/
#include<stdio.h>
int main()
{
    /*
    Now I am discribing about (Comment Line).... There are two kind of comment line,,, (1 Single Line Comment) (2 Multiple Line Comment)....
    I use here Multiple Comment Line
    */
    printf("This is my first Program\n");
    //This is Single Line Comment Example
    //Here every single line need // symbol before the line
    //Remember 1) Single Line Comment was created by C++. It's use in C programming is technically invalid, but some compilers will accept it.
    //Remember 2) In C, you can't have one comment within another comment,It's a Syntax Error
    /*
    one more thing, we use here \n in the printf for line break....
    and we use more and more \n for more line break
    */
    printf("This is my second Program\n\n\n\n\n");//Example of Single Line Comment
    printf("This is my third Program\n");/*
    Now I am discribing about (Comment Line).... There are two kind of comment line,,, (1 Single Line Comment) (2 Multiple Line Comment)....
    I use here Multiple Comment Line
    */
    printf("I am Nahian");
    printf("\nEarth University Of Galaxy");
    printf("\nEarth\n Galaxy\n");
    printf("All Place");

    return 0;// We can use here getch (); instead return 0; for hide extra sentences after run project
}
