//use input as name as ch
#include<stdio.h>

struct ferson
{
    char name[50];
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
        printf("Enter Name : ");

        fflush(stdin);//The function fflush(stdin) is used to flush the output buffer of the stream. It returns zero, if successful otherwise, returns EOF and feof error indicator is set.

        gets(person[i].name);
        printf("Enter Age : ");
        scanf("%d",&person[i].age);
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
        printf("\n");
    }

    printf("\n\n");
    for(i=0; i<4; i++)
    {
        printf("\nInformation for Person %d\n",i+1);
        printf("Name : %s\n",person[i].name);
        printf("Age : %d\n",person[i].age);
        printf("Salary : %f\n",person[i].salary);
    }

    getch();
}

