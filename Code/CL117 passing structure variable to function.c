#include<stdio.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};


void display(struct Person p)
{
    printf("Name : %s\n",p.name);
    printf("Age : %d\n",p.age);
    printf("Salary : %f\n",p.salary);
}


int main()
{
    struct Person person1,person2;

    //person1.name = "I am Nahian";//Wrong //We can not direct initial a 'structure string' so we need to use string_copy
    strcpy(person1.name,"I am Nahian");//String Copy
    person1.age = 20;
    person1.salary = 20000;
    display(person1);


    strcpy(person2.name,"Robert Downy Jr");
    person2.age = 30;
    person2.salary = 30000;
    display(person2);

    getch();
}
