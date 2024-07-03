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
    person4 = person3; //3 to 4



    //print person1 age and salary
    printf("Person1 : \n");
    printf("Age =%d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);




    //print person2 age and salary
    printf("\n\nPerson2 : \n");
    printf("Age =%d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    //print person3 age and salary
    printf("\n\nPerson3 : \n");
    printf("Age =%d\n",person3.age);
    printf("Salary = %.2f\n",person3.salary);

    //print person4 age and salary
    printf("\n\nPerson4 : \n");
    printf("Age =%d\n",person4.age);
    printf("Salary = %.2f\n",person4.salary);


    getch();
}



