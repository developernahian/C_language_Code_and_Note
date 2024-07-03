#include<stdio.h>

    struct Person //glogal structure
    {
        int age;
        float salary;
    };

int main()
{

    struct Person person1,person2;//local variable

    printf("Enter information for person1\n");
    printf("Enter Age : ");
    scanf("%d",&person1.age);

    printf("Enter Salary : ");
    scanf("%f",&person1.salary);

    //print person1 age and salary
    printf("Person1 : \n");
    printf("Age =%d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);


    printf("\n\nEnter information for person2\n");
    printf("Enter Age : ");
    scanf("%d",&person2.age);

    printf("Enter Salary : ");
    scanf("%f",&person2.salary);

    //print person2 age and salary
    printf("Person1 : \n");
    printf("Age =%d\n",person1.age);
    printf("Salary = %.2f\n",person2.salary);


    getch();
}


