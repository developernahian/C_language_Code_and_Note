#include<stdio.h>

    struct Person //glogal structure
    {
        int age;
        float salary;
    };

int main()
{

    struct Person person1 = {10,10000.50};//local variable declear and initializ;
    struct Person person2 = {20,20000.50};//local variable declear and initializ;

    struct Person person3,person4;//local variable declear

    //element wise assignment
    person3.age = 30;
    person3.salary = 30000.50;

    //structure variable assignment
    person4 = person3;


    if(person1.age==person2.age && person1.salary==person2.salary)
        printf("person1 equal to person2");
    else
        printf("person1 not equal ot person2");



    if(person3.age==person4.age && person3.salary==person4.salary)
        printf("\nperson3 equal to person4");
    else
        printf("\nperson3 not equal to person4");




    getch();
}




