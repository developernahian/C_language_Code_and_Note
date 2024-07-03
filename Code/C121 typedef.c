/*
    C is such a dominant language of its time and now, that even you
    can name those primary data type of your own and can create your
    own named data type by blending data type and its qualifier.
*/
//typedef<type_defination> = builtIn datatype and custom datatype rename
#include<stdio.h>


struct book
{
    char name[20];
    int price;
};

int main()
{
    //part1 start
    typedef char LETTER;

    LETTER ch; //here LETTER is char type datatype(char=LETTER)
    ch = 'A';
    printf("ch = %c\n",ch);

    LETTER ch2;
    ch2 = 'B';
    printf("ch2 = %c\n",ch2);
    //part1 end


    //part2 start
    typedef struct book BooooK;

    BooooK b = {"The Art of Thinking",500};
    printf("Book Name = %s\n",b.name);
    printf("Book Price = %d\n",b.price);
    //part2 end



    getch();
}
