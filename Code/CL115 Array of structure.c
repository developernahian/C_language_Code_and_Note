#include<stdio.h>

struct ferson
{
    int age;
    float salary;
};
int main()
{
    struct ferson person[4];
    int i;

    for(i=0; i<4; i++)
    {
        printf("Enter information for Person %d\n",i+1);
        printf("Enter Age : ");
        scanf("%d",&person[i].age);
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
    }

    printf("\n\n");
    for(i=0; i<4; i++)
    {
        printf("Information for Person %d\n",i+1);
        printf("Age : %d\n",person[i].age);
        printf("Salary : %f\n",person[i].salary);
    }

    getch();
}
