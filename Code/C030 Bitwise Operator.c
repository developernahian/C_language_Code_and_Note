/*
I skip this Bitwise Operator. In future I will learn it.
*/

/*
১)  বিটওয়াইজ আপারেটর বাইনারি ডেটা আর্থাত বিট/বাইট নিয়ে কাজ করে।
২)  এর সাহায্যে বিভিন্ন যৌক্তিক আপারেশন সম্প করা হয়।
যেমন-  AND, OR, NOT, EXOR, Left Shift, Right Shift etc.

[Can only be used on integrals, don't work with float]

Operators    Meaning of operators
   &            Bitwise AND
   |            Bitwise OR
   ^            Bitwise XOR
   ~            Bitwise complement
   <<           Shift left
   >>           Shift right
*/

#include<stdio.h>
int main()
{
    int a=32;
    int b=12;
    int c;

    c=a&b;
    printf("a&b = %d\n",c);

    c=a|b;
    printf("a|b = %d\n",c);

    c=a^b;
    printf("a^b = %d\n",c);



    return 0;
}
