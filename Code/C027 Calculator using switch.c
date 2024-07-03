//Calculator using switch
#include<stdio.h>
int main()
{
    double num1,num2;
    char Operator;

//    printf("Enter an Operator (+,-,*,/) : ");
//    scanf("%c",&Operator);

    printf("Enter two Operands : ");
    scanf("%lf %lf",&num1,&num2);

    printf("Enter an Operator (+,-,*,/) : ");

    scanf("\n%c",&Operator);//We must use here \n for work

    switch(Operator)
    {
    case '+':
        printf("%.3lf + %.3lf = %.3lf\n",num1,num2,num1+num2);
        break;

    case '-':
        printf("%.3lf - %.3lf = %.3lf\n",num1,num2,num1-num2);
        break;

    case '*':
        printf("%.3lf * %.3lf = %.3lf\n",num1,num2,num1*num2);
        break;

    case '/':
        printf("%.3lf / %.3lf = %.3lf\n",num1,num2,num1/num2);
        break;

    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
