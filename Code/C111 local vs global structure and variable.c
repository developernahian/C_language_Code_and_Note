#include<stdio.h>
//The structure must be global. Otherwise I will get in trouble later. Then I can take variables wherever I want.


    //global structure
    //all function can access this structure but local structure has no this opportunity
    struct Person   /*use 'struc' keyword for make structure and here 'Person' is structure name*/
    {
        int age;//structure member
        float salary;//structure member

    };//must use ;


//    //Local Variable
//    //only this function can access this variable
//    struct Person person1,person2;



int main()
{

//    //Local structure
//    //this is local structure so only this function can access this structure
//    struct Person   //use 'struc' keyword for make structure and here 'Person' is structure name
//    {
//        int age;//structure member
//        float salary;//structure member
//
//    };//must use ;




    //Local Variable
    //only this function can access this variable
    struct Person person1,person2;

//input vaue
    person1.age = 27;
    person1.salary = 27500.50;

    //input value
    person2.age = 29;
    person2.salary = 29000.50;

    //print person1 age and salary
    printf("Person1 : \n");
    printf("Age =%d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    //print person2 age and salary
    printf("\nPerson2 : \n");
    printf("Age =%d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);

    getch();
}

